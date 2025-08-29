-[ATEnforcementService numberOfDayFrom:andNow:]
signed __int64 __cdecl -[ATEnforcementService numberOfDayFrom:andNow:](
        ATEnforcementService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x21
  id v6; // x22
  NSCalendar *v7; // x19
  id v8; // x22
  id v9; // x21
  NSDateComponents *v10; // x23
  NSInteger v11; // x20
  id v13; // [xsp+0h] [xbp-40h] BYREF
  id v14; // [xsp+8h] [xbp-38h] BYREF

  if ( !a3 )
    return 0LL;
  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(+[NSCalendar currentCalendar](&OBJC_CLASS___NSCalendar, "currentCalendar"));
  v14 = 0LL;
  -[NSCalendar rangeOfUnit:startDate:interval:forDate:](
    v7,
    "rangeOfUnit:startDate:interval:forDate:",
    16LL,
    &v14,
    0LL,
    v6);
  objc_release(v6);
  v8 = objc_retain(v14);
  v13 = 0LL;
  -[NSCalendar rangeOfUnit:startDate:interval:forDate:](
    v7,
    "rangeOfUnit:startDate:interval:forDate:",
    16LL,
    &v13,
    0LL,
    v5);
  objc_release(v5);
  v9 = objc_retain(v13);
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSCalendar components:fromDate:toDate:options:](
            v7,
            "components:fromDate:toDate:options:",
            16LL,
            v8,
            v9,
            0LL));
  v11 = -[NSDateComponents day](v10, "day");
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  return v11;
}