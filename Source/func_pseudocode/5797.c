+[IPLocaleCoder localeWithPreferences:]
id __cdecl +[IPLocaleCoder localeWithPreferences:](id a1, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x19
  void *v6; // x22
  __int64 v7; // x1
  void *v8; // x21
  id v9; // x22
  void *v10; // x0
  void *v11; // x8
  NSMutableDictionary *v12; // x21
  void *v13; // x20
  _QWORD v15[4]; // [xsp+8h] [xbp-58h] BYREF
  id v16; // [xsp+28h] [xbp-38h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", CFSTR("AppleLocale")));
  if ( !qword_100008AB8 )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(a1, v7), "localePreferenceKeysAndClasses"));
    v15[0] = _NSConcreteStackBlock;
    v15[1] = 3254779904LL;
    v15[2] = sub_100001200;
    v15[3] = &unk_100004168;
    v16 = v6;
    v9 = objc_retain(v6);
    objc_msgSend(v8, "enumerateKeysAndObjectsUsingBlock:", v15);
    objc_release(v8);
    v10 = objc_msgSend(v9, "copy");
    v11 = (void *)qword_100008AB8;
    qword_100008AB8 = (__int64)v10;
    objc_release(v11);
    objc_release(v16);
    objc_release(v9);
  }
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSMutableDictionary dictionaryWithDictionary:](
            &OBJC_CLASS___NSMutableDictionary,
            "dictionaryWithDictionary:"));
  -[NSMutableDictionary setValuesForKeysWithDictionary:](v12, "setValuesForKeysWithDictionary:", v4);
  objc_release(v4);
  v13 = (void *)_CFLocaleCopyAsIfCurrentWithOverrides(v5, v12);
  objc_release(v12);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}