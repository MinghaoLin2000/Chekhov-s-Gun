+[NSString expirationTimeStringWithExpirationDate:]
id __cdecl +[NSString expirationTimeStringWithExpirationDate:](id a1, SEL a2, id a3)
{
  id v3; // x19
  NSDate *v4; // x20
  double v5; // d0
  unsigned int v6; // w8
  __int64 v7; // x21
  NSBundle *v8; // x0
  NSBundle *v9; // x23
  const __CFString *v10; // x2
  __CFString *v11; // x21
  NSBundle *v12; // x22
  NSNumber *v13; // x23
  NSString *v14; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    if ( objc_msgSend(v3, "compare:", v4) == (void *)-1LL )
    {
      v12 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v11 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v12,
                "localizedStringForKey:value:table:",
                CFSTR("Expired"),
                &stru_1000BA220,
                0LL));
    }
    else
    {
      objc_msgSend(v3, "timeIntervalSinceDate:", v4);
      v6 = (unsigned int)v5;
      if ( (unsigned int)v5 >> 8 < 0x2A3 )
      {
        if ( v6 >> 5 < 0xE1 )
        {
          if ( v6 < 0x3C )
            v7 = 1LL;
          else
            v7 = v6 / 0x3C;
          v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
          v9 = v8;
          v10 = CFSTR("Expires in %@ minutes");
        }
        else
        {
          v7 = (unsigned int)(int)((double)v6 / 3600.0 + 0.5);
          v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
          v9 = v8;
          v10 = CFSTR("Expires in %@ hours");
        }
      }
      else
      {
        v7 = (unsigned int)(int)((double)v6 / 86400.0 + 0.5);
        v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v9 = v8;
        v10 = CFSTR("Expires in %@ days");
      }
      v12 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v8,
                "localizedStringForKey:value:table:",
                v10,
                &stru_1000BA220,
                0LL));
      objc_release(v9);
      v13 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v7));
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSNumberFormatter localizedStringFromNumber:numberStyle:](
                &OBJC_CLASS___NSNumberFormatter,
                "localizedStringFromNumber:numberStyle:",
                v13,
                0LL));
      v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v12, v14));
      objc_release(v14);
      objc_release(v13);
    }
    objc_release(v12);
    objc_release(v4);
  }
  else
  {
    v11 = &stru_1000BA220;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}