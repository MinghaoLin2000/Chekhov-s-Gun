+[NSKeyedUnarchiver tsu_securelyUnarchiveObjectWithFile:ofClasses:]
id __cdecl +[NSKeyedUnarchiver tsu_securelyUnarchiveObjectWithFile:ofClasses:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  NSData *v8; // x21
  id v9; // x22
  void *v10; // x23
  void *v11; // x23
  id v13; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v13 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSData dataWithContentsOfFile:options:error:](
           &OBJC_CLASS___NSData,
           "dataWithContentsOfFile:options:error:",
           v6,
           0LL,
           &v13));
  v9 = objc_retain(v13);
  if ( v8 )
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(a1), "tsu_securelyUnarchiveRoot:forClasses:", v8, v7));
  }
  else
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC338);
    v11 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016DD4C((int)v6, v11);
    v10 = 0LL;
  }
  objc_release(v8);
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}