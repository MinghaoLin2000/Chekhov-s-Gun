-[IPPSessionTransaction URLSession:dataTask:didReceiveResponse:completionHandler:]
void __cdecl -[IPPSessionTransaction URLSession:dataTask:didReceiveResponse:completionHandler:](
        IPPSessionTransaction *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v9; // x19
  void (__fastcall **v10)(id, __int64); // x20
  __int64 v11; // x1
  __int64 v12; // x0
  id v13; // x21
  os_log_s *v14; // x23
  __int64 v15; // x24
  NSHTTPURLResponse *httpResponse; // x23
  os_log_s *v17; // x21
  int v18; // [xsp+0h] [xbp-50h] BYREF
  id v19; // [xsp+4h] [xbp-4Ch]

  v9 = objc_retain(a5);
  v10 = (void (__fastcall **)(id, __int64))objc_retain(a6);
  v12 = objc_opt_class(&OBJC_CLASS___NSHTTPURLResponse, v11);
  if ( (objc_opt_isKindOfClass(v9, v12) & 1) != 0 )
  {
    v13 = objc_retain(v9);
    objc_storeStrong((id *)&self->_httpResponse, a5);
    if ( objc_msgSend(v13, "statusCode") == (void *)426 )
    {
      v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
      {
        LOWORD(v18) = 0;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v14,
          OS_LOG_TYPE_DEFAULT,
          "redirect to TLS received",
          (uint8_t *)&v18,
          2u);
      }
      objc_release(v14);
      v15 = 0LL;
      self->_tlsRetry = 1;
      httpResponse = self->_httpResponse;
      self->_httpResponse = 0LL;
    }
    else if ( self->_initialPayloadSentCallback )
    {
      httpResponse = (NSHTTPURLResponse *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled((os_log_t)httpResponse, OS_LOG_TYPE_DEFAULT) )
      {
        LOWORD(v18) = 0;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)httpResponse,
          OS_LOG_TYPE_DEFAULT,
          "never started additional payload",
          (uint8_t *)&v18,
          2u);
      }
      v15 = 0LL;
    }
    else
    {
      httpResponse = (NSHTTPURLResponse *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled((os_log_t)httpResponse, OS_LOG_TYPE_DEFAULT) )
      {
        LOWORD(v18) = 0;
        _os_log_impl(
          (void *)&_mh_execute_header,
          (os_log_t)httpResponse,
          OS_LOG_TYPE_DEFAULT,
          "response received and we've sent initial payload",
          (uint8_t *)&v18,
          2u);
      }
      v15 = 1LL;
    }
    objc_release(httpResponse);
    v10[2](v10, v15);
    objc_release(v13);
  }
  else
  {
    v17 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEFAULT) )
    {
      v18 = 138543362;
      v19 = v9;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_DEFAULT,
        "non http response received %{public}@",
        (uint8_t *)&v18,
        0xCu);
    }
    objc_release(v17);
    v10[2](v10, 0LL);
  }
  objc_release(v10);
  objc_release(v9);
}