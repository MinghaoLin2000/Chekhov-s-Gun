+[NSUserDefaults AUDeveloperSettingsSetObject:withKey:]
void __cdecl +[NSUserDefaults AUDeveloperSettingsSetObject:withKey:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  id v7; // x21
  id v8; // x22
  AUHelperServiceProtocol *v9; // x21
  AUHelperInstance *v10; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  if ( getuid() == 278 )
  {
    v7 = objc_alloc((Class)&OBJC_CLASS___NSUserDefaults);
    v8 = objc_retainAutoreleasedReturnValue((id)MapPreferenceSuiteToString(1LL));
    v9 = (AUHelperServiceProtocol *)objc_msgSend(v7, "initWithSuiteName:", v8);
    objc_release(v8);
    -[AUHelperServiceProtocol setObject:forKey:](v9, "setObject:forKey:", v6, v5);
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(+[AUHelperInstance sharedInstance](&OBJC_CLASS___AUHelperInstance, "sharedInstance"));
    v9 = objc_retainAutoreleasedReturnValue(-[AUHelperInstance remoteObject](v10, "remoteObject"));
    objc_release(v10);
    -[AUHelperServiceProtocol userPreferenceSetObject:forSuite:withKey:](
      v9,
      "userPreferenceSetObject:forSuite:withKey:",
      v6,
      1LL,
      v5);
  }
  objc_release(v5);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}