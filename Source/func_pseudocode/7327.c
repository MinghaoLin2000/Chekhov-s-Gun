-[ImageConversionService enumerateEnvironmentVariablePairsInRequestOptions:block:]
void __cdecl -[ImageConversionService enumerateEnvironmentVariablePairsInRequestOptions:block:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  void (__fastcall **v5)(id, void *, void *); // x21
  void *v6; // x0
  void *v7; // x25
  __int64 v8; // x28
  void *i; // x24
  void *v10; // x20
  void *v11; // x19
  void *v12; // x22
  void *v13; // x20
  NSAssertionHandler *v14; // x22
  id obj; // [xsp+48h] [xbp-148h]
  __int128 v18; // [xsp+50h] [xbp-140h] BYREF
  __int128 v19; // [xsp+60h] [xbp-130h]
  __int128 v20; // [xsp+70h] [xbp-120h]
  __int128 v21; // [xsp+80h] [xbp-110h]
  uint8_t buf[4]; // [xsp+90h] [xbp-100h] BYREF
  void *v23; // [xsp+94h] [xbp-FCh]
  __int16 v24; // [xsp+9Ch] [xbp-F4h]
  void *v25; // [xsp+9Eh] [xbp-F2h]
  __int16 v26; // [xsp+A6h] [xbp-EAh]
  const __CFString *v27; // [xsp+A8h] [xbp-E8h]
  _BYTE v28[128]; // [xsp+B0h] [xbp-E0h] BYREF

  v5 = (void (__fastcall **)(id, void *, void *))objc_retain(a4);
  obj = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            a3,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionUnitTestSupportExtraEnvironmentVariablesKey")));
  if ( obj )
  {
    v20 = 0u;
    v21 = 0u;
    v18 = 0u;
    v19 = 0u;
    v6 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v18, v28, 16LL);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)v19;
      do
      {
        for ( i = 0LL; i != v7; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v19 != v8 )
            objc_enumerationMutation(obj);
          v10 = *(void **)(*((_QWORD *)&v18 + 1) + 8LL * (_QWORD)i);
          v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "componentsSeparatedByString:", CFSTR("=")));
          if ( objc_msgSend(v11, "count") != (void *)2 )
          {
            v14 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
            -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
              v14,
              "handleFailureInMethod:object:file:lineNumber:description:",
              a2,
              self,
              CFSTR("ImageConversionService.m"),
              324LL,
              CFSTR("Unexpected env var item count: %@"),
              v10);
            objc_release(v14);
          }
          v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectAtIndexedSubscript:", 0LL));
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectAtIndexedSubscript:", 1LL));
          if ( objc_msgSend(v12, "rangeOfString:options:", CFSTR("^CI_.+$"), 1024LL) == (void *)0x7FFFFFFFFFFFFFFFLL )
          {
            if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
            {
              *(_DWORD *)buf = 138412290;
              v23 = v12;
              _os_log_error_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_LOG_TYPE_ERROR,
                "Ignoring unsupported env var key %@",
                buf,
                0xCu);
            }
          }
          else
          {
            if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
            {
              *(_DWORD *)buf = 138412802;
              v23 = v12;
              v24 = 2112;
              v25 = v13;
              v26 = 2112;
              v27 = CFSTR("PAMediaConversionServiceOptionUnitTestSupportExtraEnvironmentVariablesKey");
              _os_log_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_LOG_TYPE_DEFAULT,
                "Setting environment variable '%@' to '%@' because %@ request option is set",
                buf,
                0x20u);
            }
            v5[2](v5, v12, v13);
          }
          objc_release(v13);
          objc_release(v12);
          objc_release(v11);
        }
        v7 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v18, v28, 16LL);
      }
      while ( v7 );
    }
  }
  objc_release(obj);
  objc_release(v5);
}