+[PKPrinterBonjourEndpoint _finishResolveEndpointArray:timeout:completionHandler:]
void __cdecl +[PKPrinterBonjourEndpoint _finishResolveEndpointArray:timeout:completionHandler:](
        id a1,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v7; // x19
  unsigned __int64 v8; // x24
  void *v9; // x22
  NSURL *v10; // x27
  __int128 v11; // q0
  nw_endpoint *v12; // x0
  nw_endpoint *v13; // x21
  nw_txt_record_t v14; // x20
  nw_endpoint_type_t type; // w0
  const char *url; // x0
  nw_endpoint *v17; // x28
  __CFString *v18; // x0
  __CFString *v19; // x23
  __CFString *v20; // x27
  const char *hostname; // x2
  NSString *v22; // x25
  __int64 port; // x26
  void *v24; // x20
  __int128 v25; // [xsp+0h] [xbp-B0h]
  NSNumber *v27; // [xsp+18h] [xbp-98h]
  void (__fastcall **v28)(id, NSURL *, void *); // [xsp+20h] [xbp-90h]
  id v29; // [xsp+28h] [xbp-88h]
  uint8_t buf[4]; // [xsp+30h] [xbp-80h] BYREF
  __CFString *v31; // [xsp+34h] [xbp-7Ch]

  v7 = objc_retain(a3);
  v28 = (void (__fastcall **)(id, NSURL *, void *))objc_retain(a5);
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  *(_QWORD *)&v11 = 138543362LL;
  v25 = v11;
  while ( nw_array_get_count(v7) > v8 )
  {
    if ( v10 && v9 )
      goto LABEL_37;
    v12 = (nw_endpoint *)objc_retainAutoreleasedReturnValue((id)nw_array_get_object_at_index(v7, v8));
    v13 = v12;
    if ( !v9 )
    {
      v14 = nw_endpoint_copy_txt_record(v12);
      if ( v14 )
        v9 = objc_retainAutoreleasedReturnValue(
               +[PKTXTRecord txtRecordDictionaryForTxtRecord:](
                 &OBJC_CLASS___PKTXTRecord,
                 "txtRecordDictionaryForTxtRecord:",
                 v14));
      else
        v9 = 0LL;
      objc_release(v14);
    }
    if ( !v10 )
    {
      type = nw_endpoint_get_type(v13);
      if ( type == nw_endpoint_type_host )
      {
        v17 = objc_retain(v13);
        v29 = objc_retain(v9);
        v18 = objc_retainAutoreleasedReturnValue(
                +[PKPrinterBonjourEndpoint serviceFromEndpoint:](
                  &OBJC_CLASS___PKPrinterBonjourEndpoint,
                  "serviceFromEndpoint:",
                  v17));
        if ( v18 )
          v19 = v18;
        else
          v19 = CFSTR("_ipp._tcp.");
        v20 = CFSTR("ipps");
        if ( ((unsigned int)-[__CFString hasPrefix:](v19, "hasPrefix:", CFSTR("_ipps."), v25) & 1) != 0
          || (v20 = CFSTR("ipp"), ((unsigned int)-[__CFString hasPrefix:](v19, "hasPrefix:", CFSTR("_ipp.")) & 1) != 0)
          || (v20 = CFSTR("http"), ((unsigned int)-[__CFString hasPrefix:](v19, "hasPrefix:", CFSTR("_http.")) & 1) != 0)
          || (v20 = CFSTR("https"),
              ((unsigned int)-[__CFString hasPrefix:](v19, "hasPrefix:", CFSTR("_https.")) & 1) != 0) )
        {
          hostname = nw_endpoint_get_hostname(v17);
          if ( hostname )
          {
            v22 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", hostname));
            if ( v22 )
            {
              port = nw_endpoint_get_port(v17);
              if ( (_DWORD)port )
                v27 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithUnsignedShort:](&OBJC_CLASS___NSNumber, "numberWithUnsignedShort:", port));
              else
                v27 = 0LL;
              v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "objectForKeyedSubscript:", CFSTR("rp")));
              v10 = (NSURL *)objc_retainAutoreleasedReturnValue(PKURLWithComponents(v20, v22, v27, v24));
              objc_release(v24);
              if ( (_DWORD)port )
                objc_release(v27);
              goto LABEL_32;
            }
          }
          else
          {
            v22 = 0LL;
          }
        }
        else
        {
          v22 = (NSString *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
          if ( os_log_type_enabled((os_log_t)v22, OS_LOG_TYPE_ERROR) )
          {
            *(_DWORD *)buf = v25;
            v31 = v19;
            _os_log_impl(
              (void *)&_mh_execute_header,
              (os_log_t)v22,
              OS_LOG_TYPE_ERROR,
              "Unknown scheme %{public}@",
              buf,
              0xCu);
          }
        }
        v10 = 0LL;
LABEL_32:
        objc_release(v22);
        objc_release(v19);
        objc_release(v29);
        objc_release(v17);
        goto LABEL_11;
      }
      if ( type == nw_endpoint_type_url )
      {
        url = nw_endpoint_get_url(v13);
        v10 = objc_retainAutoreleasedReturnValue(PKURLWithUTF8String((__int64)url));
      }
      else
      {
        v10 = 0LL;
      }
    }
LABEL_11:
    objc_release(v13);
    ++v8;
  }
  if ( v10 )
  {
    if ( v9 )
    {
LABEL_37:
      v28[2](v28, v10, v9);
      goto LABEL_40;
    }
    objc_msgSend(a1, "resolveWithURL:timeout:completionHandler:", v10, v28, a4);
  }
  else
  {
    v28[2](v28, 0LL, v9);
  }
LABEL_40:
  objc_release(v9);
  objc_release(v10);
  objc_release(v28);
  objc_release(v7);
}