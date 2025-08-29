-[XPCSignpostReader removeFile:]
void __cdecl -[XPCSignpostReader removeFile:](XPCSignpostReader *self, SEL a2, id a3)
{
  id v3; // x19
  NSFileManager *v4; // x21
  unsigned __int8 v5; // w22
  id v6; // x20
  os_log_s *v7; // x0
  os_log_s *v8; // x21
  id v9; // [xsp+8h] [xbp-28h] BYREF

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v9 = 0LL;
  v5 = -[NSFileManager removeItemAtPath:error:](v4, "removeItemAtPath:error:", v3, &v9);
  v6 = objc_retain(v9);
  objc_release(v4);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  v8 = v7;
  if ( (v5 & 1) != 0 )
  {
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEBUG) )
      sub_10000E9A8(v3, v8);
  }
  else if ( os_log_type_enabled(v7, OS_LOG_TYPE_ERROR) )
  {
    sub_10000EA10(v3, v6, v8);
  }
  objc_release(v8);
  objc_release(v6);
  objc_release(v3);
}