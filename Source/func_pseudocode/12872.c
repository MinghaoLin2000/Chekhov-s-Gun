-[NSString tsu_bindToSqlStatement:index:error:]
bool __cdecl -[NSString tsu_bindToSqlStatement:index:error:](NSString *self, SEL a2, sqlite3_stmt *a3, int a4, id *a5)
{
  NSUInteger v9; // x0
  bool result; // w0
  os_log_s *v11; // x20
  id v12; // x8

  v9 = -[NSString lengthOfBytesUsingEncoding:](self, "lengthOfBytesUsingEncoding:", 4LL);
  if ( HIDWORD(v9) )
    return 0;
  if ( sqlite3_bind_text(
         a3,
         a4,
         -[NSString UTF8String](self, "UTF8String"),
         v9,
         (void (__cdecl *)(void *))0xFFFFFFFFFFFFFFFFLL) )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001DD710);
    v11 = (os_log_s *)TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      sub_1001702E4(v11);
      if ( !a5 )
        return 0;
    }
    else if ( !a5 )
    {
      return 0;
    }
    if ( !*a5 )
    {
      v12 = +[NSError tsu_errorWithCode:userInfo:](&OBJC_CLASS___NSError, "tsu_errorWithCode:userInfo:", 0LL, 0LL);
      result = 0;
      *a5 = v12;
      return result;
    }
    return 0;
  }
  return 1;
}