-[TSPDatabase openBlobForObject:error:]
sqlite3_blob *__cdecl -[TSPDatabase openBlobForObject:error:](TSPDatabase *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  sqlite3_blob *v7; // x21
  os_log_s *v8; // x21

  v6 = objc_retain(a3);
  if ( (unsigned int)objc_msgSend(v6, "hasDataState") )
  {
    v7 = -[TSPDatabase openDataStateBlobWithIdentifier:error:](
           self,
           "openDataStateBlobWithIdentifier:error:",
           objc_msgSend(v6, "dataState"),
           a4);
  }
  else
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D2C60);
    v8 = (os_log_s *)TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016BCD8(v8);
    v7 = 0LL;
    if ( !*a4 )
      *a4 = objc_autorelease(objc_retainAutoreleasedReturnValue(+[NSError tsu_errorWithCode:userInfo:](&OBJC_CLASS___NSError, "tsu_errorWithCode:userInfo:", 1LL, 0LL)));
  }
  objc_release(v6);
  return v7;
}