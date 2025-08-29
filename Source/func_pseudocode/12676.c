-[NSDate tsu_relativeAnnotationStringForEarlierDate:withDateFormatter:shortAsPossible:lowercaseIfNeeded:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[NSDate tsu_relativeAnnotationStringForEarlierDate:withDateFormatter:shortAsPossible:lowercaseIfNeeded:](
        NSDate *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        bool a6)
{
  _BOOL8 v6; // x25
  _BOOL4 v7; // w27
  id v10; // x19
  id v11; // x20
  NSCalendar *v12; // x21
  NSDateComponents *v13; // x22
  NSDateComponents *v14; // x23
  NSDateComponents *v15; // x24
  _BYTE *v16; // x28
  _BOOL4 v17; // w28
  __CFString *v18; // x25
  id v19; // x0
  id v22; // x0
  void *v23; // x27
  const __CFString *v24; // x2
  id v25; // x25
  void *v27; // x28
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v6 = a6;
  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  if ( !v10 )
  {
    v18 = CFSTR(" ");
    goto LABEL_28;
  }
  if ( -[NSDate compare:](self, "compare:", v10) == NSOrderedAscending )
  {
    v18 = (__CFString *)objc_retainAutoreleasedReturnValue(-[NSDate tsu_fullFormattedDate](self, "tsu_fullFormattedDate"));
    goto LABEL_28;
  }
  v12 = objc_retainAutoreleasedReturnValue(+[NSCalendar currentCalendar](&OBJC_CLASS___NSCalendar, "currentCalendar"));
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSCalendar components:fromDate:toDate:options:](
            v12,
            "components:fromDate:toDate:options:",
            240LL,
            v10,
            self,
            0LL));
  v14 = objc_retainAutoreleasedReturnValue(-[NSCalendar components:fromDate:](v12, "components:fromDate:", 752LL, v10));
  v15 = objc_retainAutoreleasedReturnValue(-[NSCalendar components:fromDate:](v12, "components:fromDate:", 512LL, self));
  v16 = -[NSDateComponents weekday](v15, "weekday");
  if ( v16 - (_BYTE *)-[NSDateComponents weekday](v14, "weekday") == 1 )
    v17 = 1;
  else
    v17 = (void *)-[NSDateComponents weekday](v14, "weekday") == (void *)7
       && (void *)-[NSDateComponents weekday](v15, "weekday") == (void *)1;
  if ( -[NSDateComponents day](v13, "day") < 365 )
  {
    if ( -[NSDateComponents day](v13, "day") < 8 )
    {
      if ( -[NSDateComponents day](v13, "day") <= 1 && ((void *)-[NSDateComponents day](v13, "day") != (void *)1 || v17) )
      {
        if ( (void *)-[NSDateComponents day](v13, "day") == (void *)1 && v17 )
        {
          if ( !v7 )
          {
            v19 = objc_retainAutoreleasedReturnValue(
                    -[NSDate p_ruleForYesterday:withDateFormatter:lowercase:](
                      self,
                      "p_ruleForYesterday:withDateFormatter:lowercase:",
                      v10,
                      v11,
                      v6));
            goto LABEL_26;
          }
          v22 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
          v23 = v22;
          v24 = CFSTR("Yesterday");
        }
        else
        {
          if ( -[NSDateComponents hour](v13, "hour") >= 1 )
          {
            v19 = objc_retainAutoreleasedReturnValue(
                    -[NSDate p_rule1To23HoursAgo:withDateFormatter:lowercase:](
                      self,
                      "p_rule1To23HoursAgo:withDateFormatter:lowercase:",
                      -[NSDateComponents hour](v13, "hour"),
                      v11,
                      v6));
            goto LABEL_26;
          }
          if ( -[NSDateComponents minute](v13, "minute") >= 1 )
          {
            v19 = objc_retainAutoreleasedReturnValue(
                    -[NSDate p_rule1To59MinutesAgo:withDateFormatter:lowercase:](
                      self,
                      "p_rule1To59MinutesAgo:withDateFormatter:lowercase:",
                      -[NSDateComponents minute](v13, "minute"),
                      v11,
                      v6));
            goto LABEL_26;
          }
          v22 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
          v23 = v22;
          v24 = CFSTR("Just now");
        }
        v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "localizedStringForKey:value:table:", v24, &stru_1001DFAA0, CFSTR("TSUtility")));
        v25 = objc_retainAutoreleasedReturnValue(
                -[NSDate p_stringWithString:lowercase:dateFormatter:](
                  self,
                  "p_stringWithString:lowercase:dateFormatter:",
                  v27,
                  v6,
                  v11));
        objc_release(v27);
        objc_release(v23);
        goto LABEL_27;
      }
      v19 = objc_retainAutoreleasedReturnValue(
              -[NSDate p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:withDateFormatter:](
                self,
                "p_ruleForUpToSevenDaysAgoAndNotYesterdayForDate:withDateFormatter:",
                v10,
                v11));
    }
    else
    {
      v19 = objc_retainAutoreleasedReturnValue(
              -[NSDate p_ruleForOverAWeekAgoForDate:withDateFormatter:](
                self,
                "p_ruleForOverAWeekAgoForDate:withDateFormatter:",
                v10,
                v11));
    }
  }
  else
  {
    v19 = objc_retainAutoreleasedReturnValue(
            -[NSDate p_ruleForOverAYearAgoForDate:withDateFormatter:](
              self,
              "p_ruleForOverAYearAgoForDate:withDateFormatter:",
              v10,
              v11));
  }
LABEL_26:
  v25 = v19;
LABEL_27:
  v18 = (__CFString *)objc_retain(v25);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(v18);
LABEL_28:
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v18);
}