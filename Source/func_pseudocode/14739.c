+[UINSSystemPreferencesLocationSetting settingForApplicationWithBundleIdentifier:]
id __cdecl +[UINSSystemPreferencesLocationSetting settingForApplicationWithBundleIdentifier:](id a1, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  void *v6; // x20
  void **v8; // [xsp+0h] [xbp-70h] BYREF
  __int64 v9; // [xsp+8h] [xbp-68h]
  __int64 (__fastcall *v10)(); // [xsp+10h] [xbp-60h]
  void *v11; // [xsp+18h] [xbp-58h]
  id v12; // [xsp+20h] [xbp-50h]
  __int64 *v13; // [xsp+28h] [xbp-48h]
  __int64 v14; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v15; // [xsp+38h] [xbp-38h]
  __int64 v16; // [xsp+40h] [xbp-30h]
  char v17; // [xsp+48h] [xbp-28h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v4 = objc_retain(a3);
  v14 = 0LL;
  v15 = &v14;
  v16 = 0x2020000000LL;
  v17 = 0;
  if ( qword_100011BB8 != -1 )
    dispatch_once(&qword_100011BB8, &stru_10000C310);
  if ( byte_100011B90 )
  {
    *((_BYTE *)v15 + 24) = 1;
LABEL_6:
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "_setting", v8, v9, v10, v11));
    goto LABEL_7;
  }
  v5 = objc_retainAutoreleasedReturnValue(+[CLLocationManager appsUsingLocationWithInfo](&OBJC_CLASS___CLLocationManager, "appsUsingLocationWithInfo"));
  v8 = _NSConcreteStackBlock;
  v9 = 3254779904LL;
  v10 = sub_10000558C;
  v11 = &unk_10000C240;
  v12 = objc_retain(v4);
  v13 = &v14;
  objc_msgSend(v5, "enumerateKeysAndObjectsUsingBlock:", &v8);
  objc_release(v12);
  objc_release(v5);
  if ( *((_BYTE *)v15 + 24) )
    goto LABEL_6;
  v6 = 0LL;
LABEL_7:
  _Block_object_dispose(&v14, 8);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}