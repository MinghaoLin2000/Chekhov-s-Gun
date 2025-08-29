+[NSUserDefaults AUDeveloperSettingsObjectWithKey:]
id __cdecl +[NSUserDefaults AUDeveloperSettingsObjectWithKey:](id a1, SEL a2, id a3)
{
  id v3; // x19
  id v4; // x20
  id v5; // x21
  AUHelperServiceProtocol *v6; // x20
  id v7; // x21
  AUHelperInstance *v8; // x21
  _QWORD v10[5]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v11; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v12; // [xsp+38h] [xbp-48h]
  __int64 v13; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v14)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v15)(); // [xsp+50h] [xbp-30h]
  id v16; // [xsp+58h] [xbp-28h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v3 = objc_retain(a3);
  if ( getuid() == 278 )
  {
    v4 = objc_alloc((Class)&OBJC_CLASS___NSUserDefaults);
    v5 = objc_retainAutoreleasedReturnValue((id)MapPreferenceSuiteToString(1LL));
    v6 = (AUHelperServiceProtocol *)objc_msgSend(v4, "initWithSuiteName:", v5);
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[AUHelperServiceProtocol objectForKey:](v6, "objectForKey:", v3));
  }
  else
  {
    v8 = objc_retainAutoreleasedReturnValue(+[AUHelperInstance sharedInstance](&OBJC_CLASS___AUHelperInstance, "sharedInstance"));
    v6 = objc_retainAutoreleasedReturnValue(-[AUHelperInstance remoteObject](v8, "remoteObject"));
    objc_release(v8);
    v11 = 0LL;
    v12 = &v11;
    v13 = 0x3032000000LL;
    v14 = sub_100015430;
    v15 = sub_100015440;
    v16 = 0LL;
    v10[0] = _NSConcreteStackBlock;
    v10[1] = 3254779904LL;
    v10[2] = sub_100015448;
    v10[3] = &unk_100031A18;
    v10[4] = &v11;
    -[AUHelperServiceProtocol userPreferenceObjectForSuite:withKey:withReply:](
      v6,
      "userPreferenceObjectForSuite:withKey:withReply:",
      1LL,
      v3,
      v10);
    v7 = objc_retain((id)v12[5]);
    _Block_object_dispose(&v11, 8);
    objc_release(v16);
  }
  objc_release(v6);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}