-[ATEnforcementService appTrackingEnforcement:]
void __cdecl -[ATEnforcementService appTrackingEnforcement:](ATEnforcementService *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, void *, void *, __int64); // x19
  NSDate *v5; // x20
  void *v6; // x0
  void *v7; // x22
  void *v8; // x23
  id v9; // x22
  id v10; // x24
  id v11; // x23
  id v12; // x26
  id v13; // x25
  id v14; // x24
  _BOOL8 v15; // x21
  NSNumber *v16; // x26
  NSNumber *v17; // x21
  id v18; // [xsp+8h] [xbp-68h] BYREF
  id v19; // [xsp+10h] [xbp-60h] BYREF
  id v20; // [xsp+18h] [xbp-58h] BYREF

  v4 = (void (__fastcall **)(id, void *, void *, __int64))objc_retain(a3);
  if ( -[ATEnforcementService isInternalInstall](self, "isInternalInstall") )
  {
    v5 = (NSDate *)objc_msgSend(
                     objc_alloc((Class)&OBJC_CLASS___NSUserDefaults),
                     "initWithSuiteName:",
                     CFSTR("com.apple.AppTrackingTransparency"));
    v6 = objc_retainAutoreleasedReturnValue(-[NSDate objectForKey:](v5, "objectForKey:", CFSTR("TrackingEnforced")));
    if ( v6 )
    {
      v7 = v6;
      v8 = objc_retainAutoreleasedReturnValue(-[NSDate objectForKey:](v5, "objectForKey:", CFSTR("ReasonCode")));
      objc_release(v8);
      objc_release(v7);
      if ( v8 )
      {
        v4[2](
          v4,
          -[NSDate boolForKey:](v5, "boolForKey:", CFSTR("TrackingEnforced")),
          -[NSDate integerForKey:](v5, "integerForKey:", CFSTR("ReasonCode")),
          1LL);
        goto LABEL_15;
      }
    }
    objc_release(v5);
  }
  v5 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
  v20 = 0LL;
  v9 = objc_retainAutoreleasedReturnValue(
         +[ATKeychainStore objectForKey:error:](
           &OBJC_CLASS___ATKeychainStore,
           "objectForKey:error:",
           CFSTR("EnforcementService.enforced"),
           &v20));
  v10 = objc_retain(v20);
  v19 = v10;
  v11 = objc_retainAutoreleasedReturnValue(
          +[ATKeychainStore objectForKey:error:](
            &OBJC_CLASS___ATKeychainStore,
            "objectForKey:error:",
            CFSTR("EnforcementService.reasonCode"),
            &v19));
  v12 = objc_retain(v19);
  objc_release(v10);
  v18 = v12;
  v13 = objc_retainAutoreleasedReturnValue(
          +[ATKeychainStore objectForKey:error:](
            &OBJC_CLASS___ATKeychainStore,
            "objectForKey:error:",
            CFSTR("EnforcementService.lastBagLookup"),
            &v18));
  v14 = objc_retain(v18);
  objc_release(v12);
  if ( v9 && v13 && !v14 )
    v4[2](
      v4,
      objc_msgSend(v9, "boolValue"),
      (void *)+[ATEnforcementService reasonCodeFromNumberValue:](
                &OBJC_CLASS___ATEnforcementService,
                "reasonCodeFromNumberValue:",
                v11),
      0LL);
  else
    v4[2](v4, (void *)1, 0LL, 1LL);
  if ( -[ATEnforcementService numberOfDayFrom:andNow:](self, "numberOfDayFrom:andNow:", v13, v5) > 0 || !v13 )
  {
    v15 = +[ATEnforcementService isAppTrackingTransparencyEnforced](
            &OBJC_CLASS___ATEnforcementService,
            "isAppTrackingTransparencyEnforced");
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithInteger:](
              &OBJC_CLASS___NSNumber,
              "numberWithInteger:",
              +[ATEnforcementService appTrackingTransparencyEnforcementReason](
                &OBJC_CLASS___ATEnforcementService,
                "appTrackingTransparencyEnforcementReason")));
    v17 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v15));
    +[ATKeychainStore setObject:forKey:](
      &OBJC_CLASS___ATKeychainStore,
      "setObject:forKey:",
      v17,
      CFSTR("EnforcementService.enforced"));
    objc_release(v17);
    +[ATKeychainStore setObject:forKey:](
      &OBJC_CLASS___ATKeychainStore,
      "setObject:forKey:",
      v16,
      CFSTR("EnforcementService.reasonCode"));
    +[ATKeychainStore setObject:forKey:](
      &OBJC_CLASS___ATKeychainStore,
      "setObject:forKey:",
      v5,
      CFSTR("EnforcementService.lastBagLookup"));
    objc_release(v16);
  }
  objc_release(v13);
  objc_release(v11);
  objc_release(v9);
  objc_release(v14);
LABEL_15:
  objc_release(v5);
  objc_release(v4);
}