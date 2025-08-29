+[PKPrinterBonjourEndpoint resolveEndpoint:timeout:completionHandler:]
void __cdecl +[PKPrinterBonjourEndpoint resolveEndpoint:timeout:completionHandler:](
        id a1,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  nw_endpoint *v10; // x21
  nw_endpoint_type_t type; // w0
  const char *url; // x0
  const char *v13; // x24
  NSURL *v14; // x22
  os_log_s *v15; // x22
  os_log_s *v16; // x23
  int v17; // [xsp+0h] [xbp-60h] BYREF
  const char *v18; // [xsp+4h] [xbp-5Ch]

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = (nw_endpoint *)objc_msgSend(v8, "copyCEndpoint");
  type = nw_endpoint_get_type(v10);
  if ( type == nw_endpoint_type_bonjour_service )
  {
    objc_msgSend(a1, "resolveWithBonjourEndpoint:timeout:completionHandler:", v10, v9, a4);
    goto LABEL_17;
  }
  if ( type != nw_endpoint_type_url )
  {
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
    {
      v17 = 138543362;
      v18 = (const char *)v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_ERROR,
        "Can't resolve from this endpoint: %{public}@",
        (uint8_t *)&v17,
        0xCu);
    }
    goto LABEL_9;
  }
  url = nw_endpoint_get_url(v10);
  v13 = url;
  if ( !url )
  {
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
    {
      v17 = 138543362;
      v18 = (const char *)v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v15,
        OS_LOG_TYPE_ERROR,
        "Can't resolve from this url endpoint: %{public}@",
        (uint8_t *)&v17,
        0xCu);
    }
LABEL_9:
    objc_release(v15);
    (*((void (__fastcall **)(id, _QWORD, _QWORD))v9 + 2))(v9, 0LL, 0LL);
    goto LABEL_17;
  }
  v14 = objc_retainAutoreleasedReturnValue(PKURLWithUTF8String((__int64)url));
  if ( v14 )
  {
    objc_msgSend(a1, "resolveWithURL:timeout:completionHandler:", v14, v9, a4);
  }
  else
  {
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
    {
      v17 = 136446210;
      v18 = v13;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v16,
        OS_LOG_TYPE_ERROR,
        "Can't resolve from this url string: %{public}s",
        (uint8_t *)&v17,
        0xCu);
    }
    objc_release(v16);
    (*((void (__fastcall **)(id, _QWORD, _QWORD))v9 + 2))(v9, 0LL, 0LL);
  }
  objc_release(v14);
LABEL_17:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}