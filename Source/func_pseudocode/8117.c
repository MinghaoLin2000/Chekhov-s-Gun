-[XPCSignpostReader writeSignpostFile:withOrder:withData:]
int __cdecl -[XPCSignpostReader writeSignpostFile:withOrder:withData:](
        XPCSignpostReader *self,
        SEL a2,
        id a3,
        int a4,
        id a5)
{
  __int64 v6; // x19
  id v8; // x20
  id v9; // x21
  os_log_s *v10; // x22
  NSFileManager *v11; // x22
  void *v12; // x24
  os_log_s *v13; // x24
  const char *v14; // x0
  id v15; // x23
  os_log_s *v16; // x24
  const char *v17; // x0
  _UNKNOWN **v18; // x27
  NSString *v19; // x25
  unsigned __int8 v20; // w26
  id v21; // x24
  os_log_s *v22; // x25
  NSString *v24; // x26
  const char *v25; // x28
  const char *v26; // x0
  id v27; // [xsp+18h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-70h] BYREF
  const char *v29; // [xsp+24h] [xbp-6Ch]
  __int16 v30; // [xsp+2Ch] [xbp-64h]
  const char *v31; // [xsp+2Eh] [xbp-62h]

  LODWORD(v6) = a4;
  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 134217984;
    v29 = (const char *)objc_msgSend(v9, "count");
    _os_log_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_LOG_TYPE_INFO,
      "writing to signpost file for %lu records.",
      buf,
      0xCu);
  }
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  if ( !-[NSFileManager fileExistsAtPath:](v11, "fileExistsAtPath:", v8) )
    goto LABEL_13;
  v12 = objc_msgSend(v9, "count");
  objc_release(v11);
  if ( v12 )
  {
    v11 = objc_retainAutoreleasedReturnValue(
            +[NSJSONSerialization dataWithJSONObject:options:error:](
              &OBJC_CLASS___NSJSONSerialization,
              "dataWithJSONObject:options:error:",
              v9,
              0LL,
              0LL));
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_INFO) )
    {
      v14 = (const char *)-[NSFileManager length](v11, "length");
      *(_DWORD *)buf = 134217984;
      v29 = v14;
      _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_INFO, "\t Original JSON size = %lu", buf, 0xCu);
    }
    objc_release(v13);
    v15 = objc_retainAutoreleasedReturnValue(-[XPCSignpostReader gzipDeflate:](self, "gzipDeflate:", v11));
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_INFO) )
    {
      v17 = (const char *)objc_msgSend(v15, "length");
      *(_DWORD *)buf = 134217984;
      v29 = v17;
      _os_log_impl((void *)&_mh_execute_header, v16, OS_LOG_TYPE_INFO, "\t Compressed size = %lu", buf, 0xCu);
    }
    objc_release(v16);
    v18 = &ADClientSetValueForScalarKey_ptr;
    v6 = (unsigned int)(v6 + 1);
    v19 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%@signpost.%d.json.gz"),
              v8,
              v6));
    v27 = 0LL;
    v20 = (unsigned __int8)objc_msgSend(v15, "writeToFile:options:error:", v19, 1LL, &v27);
    v21 = objc_retain(v27);
    objc_release(v19);
    if ( (v20 & 1) == 0 )
    {
      v22 = (os_log_s *)objc_retainAutoreleasedReturnValue(PLLogSignpostReader());
      if ( os_log_type_enabled(v22, OS_LOG_TYPE_ERROR) )
      {
        v24 = objc_retainAutorelease(
                objc_retainAutoreleasedReturnValue(
                  +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("%@%d.json.gz"),
                    v8,
                    v6)));
        v25 = -[NSString UTF8String](v24, "UTF8String");
        if ( v21 )
        {
          v18 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "localizedDescription")));
          v26 = (const char *)objc_msgSend(v18, "UTF8String");
        }
        else
        {
          v26 = "Unknown error";
        }
        *(_DWORD *)buf = 136315394;
        v29 = v25;
        v30 = 2080;
        v31 = v26;
        _os_log_error_impl((void *)&_mh_execute_header, v22, OS_LOG_TYPE_ERROR, "Unable to write to %s: %s", buf, 0x16u);
        if ( v21 )
          objc_release(v18);
        objc_release(v24);
      }
      objc_release(v22);
    }
    objc_msgSend(v9, "removeAllObjects");
    objc_release(v21);
    objc_release(v15);
LABEL_13:
    objc_release(v11);
  }
  objc_release(v9);
  objc_release(v8);
  return v6;
}