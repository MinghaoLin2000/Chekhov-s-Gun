+[NSKeyedUnarchiver tsu_securelyUnarchiveRoot:forClasses:]
id __cdecl +[NSKeyedUnarchiver tsu_securelyUnarchiveRoot:forClasses:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  id v7; // x21
  void *v8; // x22
  void *v9; // x22
  id v11; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a3);
  v11 = 0LL;
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSKeyedUnarchiver unarchivedObjectOfClasses:fromData:error:](
           &OBJC_CLASS___NSKeyedUnarchiver,
           "unarchivedObjectOfClasses:fromData:error:",
           a4,
           v5,
           &v11));
  v7 = objc_retain(v11);
  if ( !v6 )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC2F8);
    v8 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016DC6C((int)v5, v8);
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC318);
    v9 = TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_DEBUG) )
      sub_10016DBF4(v5, v9);
  }
  objc_release(v7);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}