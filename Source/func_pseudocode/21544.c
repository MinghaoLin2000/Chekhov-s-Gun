-[LSRConnection _consumeSandboxExtensions:error:]
bool __cdecl -[LSRConnection _consumeSandboxExtensions:error:](LSRConnection *self, SEL a2, id a3, id *a4)
{
  char *v6; // x20
  os_log_s *v7; // x22
  char *v8; // x20
  void *v9; // x0
  void *v10; // x22
  __int64 v11; // x27
  void *i; // x25
  __int64 v13; // x0
  NSMutableArray *consumedSandboxExtensions; // x23
  NSNumber *v15; // x24
  void *v16; // x21
  int *v17; // x0
  NSString *v18; // x22
  NSError *v19; // x23
  NSDictionary *v20; // x24
  os_log_s *v22; // x21
  int *v23; // x0
  char *v24; // x0
  __int128 v25; // [xsp+10h] [xbp-160h] BYREF
  __int128 v26; // [xsp+20h] [xbp-150h]
  __int128 v27; // [xsp+30h] [xbp-140h]
  __int128 v28; // [xsp+40h] [xbp-130h]
  _QWORD v29[2]; // [xsp+50h] [xbp-120h] BYREF
  _QWORD v30[2]; // [xsp+60h] [xbp-110h] BYREF
  uint8_t v31[128]; // [xsp+70h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+F0h] [xbp-80h] BYREF
  const char *v33; // [xsp+F4h] [xbp-7Ch]
  __int16 v34; // [xsp+FCh] [xbp-74h]
  char *v35; // [xsp+FEh] [xbp-72h]

  v6 = (char *)objc_retain(a3);
  v7 = (os_log_s *)SFLogConnection;
  if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
  {
    *(_DWORD *)buf = 136315394;
    v33 = "-[LSRConnection _consumeSandboxExtensions:error:]";
    v34 = 2112;
    v35 = v6;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v7,
      OS_LOG_TYPE_DEBUG,
      "%s Consuming sandbox extensions: %@",
      buf,
      0x16u);
  }
  v27 = 0u;
  v28 = 0u;
  v25 = 0u;
  v26 = 0u;
  v8 = objc_retain(v6);
  v9 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v25, v31, 16LL);
  if ( !v9 )
    goto LABEL_11;
  v10 = v9;
  v11 = *(_QWORD *)v26;
  while ( 2 )
  {
    for ( i = 0LL; i != v10; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v26 != v11 )
        objc_enumerationMutation(v8);
      v13 = sandbox_extension_consume(objc_msgSend(objc_retainAutorelease(*(id *)(*((_QWORD *)&v25 + 1) + 8LL * (_QWORD)i)), "UTF8String"));
      if ( v13 < 0 )
      {
        v16 = (void *)SFLogConnection;
        if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
        {
          v22 = objc_retain(v16);
          v23 = __error();
          v24 = strerror(*v23);
          *(_DWORD *)buf = 136315394;
          v33 = "-[LSRConnection _consumeSandboxExtensions:error:]";
          v34 = 2080;
          v35 = v24;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            v22,
            OS_LOG_TYPE_ERROR,
            "%s Error consuming sandbox extension: %s",
            buf,
            0x16u);
          objc_release(v22);
          if ( !a4 )
            goto LABEL_15;
        }
        else if ( !a4 )
        {
          goto LABEL_15;
        }
        v29[0] = NSLocalizedDescriptionKey;
        v17 = __error();
        v18 = objc_retainAutoreleasedReturnValue(
                +[NSString stringWithFormat:](
                  &OBJC_CLASS___NSString,
                  "stringWithFormat:",
                  CFSTR("Error consuming sandbox extension: %s"),
                  strerror(*v17)));
        v30[0] = v18;
        v29[1] = NSUnderlyingErrorKey;
        v19 = objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  NSPOSIXErrorDomain,
                  *__error(),
                  0LL));
        v30[1] = v19;
        v20 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  v30,
                  v29,
                  2LL));
        *a4 = objc_autorelease(
                objc_retainAutoreleasedReturnValue(
                  +[NSError errorWithDomain:code:userInfo:](
                    &OBJC_CLASS___NSError,
                    "errorWithDomain:code:userInfo:",
                    CFSTR("kLSRErrorDomain"),
                    1LL,
                    v20)));
        objc_release(v20);
        objc_release(v19);
        objc_release(v18);
        LOBYTE(a4) = 0;
        goto LABEL_15;
      }
      consumedSandboxExtensions = self->_consumedSandboxExtensions;
      v15 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithLongLong:](&OBJC_CLASS___NSNumber, "numberWithLongLong:", v13));
      -[NSMutableArray addObject:](consumedSandboxExtensions, "addObject:", v15);
      objc_release(v15);
    }
    v10 = objc_msgSend(v8, "countByEnumeratingWithState:objects:count:", &v25, v31, 16LL);
    if ( v10 )
      continue;
    break;
  }
LABEL_11:
  LOBYTE(a4) = 1;
LABEL_15:
  objc_release(v8);
  objc_release(v8);
  return (char)a4;
}