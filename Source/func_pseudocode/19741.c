-[platform_http_get URLSession:dataTask:didReceiveResponse:completionHandler:]
void __cdecl -[platform_http_get URLSession:dataTask:didReceiveResponse:completionHandler:](
        platform_http_get *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v7; // x19
  void (__fastcall **v8)(id, __int64); // x20
  __int64 v9; // x1
  __int64 v10; // x0
  void *v11; // x0
  id v12; // x0
  void *v13; // x21
  __int64 v14; // x1
  os_log_s *v15; // x22
  uint8_t v16[16]; // [xsp+0h] [xbp-30h] BYREF

  v7 = objc_retain(a5);
  v8 = (void (__fastcall **)(id, __int64))objc_retain(a6);
  v10 = objc_opt_class(&OBJC_CLASS___NSHTTPURLResponse, v9);
  if ( (objc_opt_isKindOfClass(v7, v10) & 1) != 0 )
    v11 = v7;
  else
    v11 = 0LL;
  v12 = objc_retain(v11);
  v13 = v12;
  if ( v12 && objc_msgSend(v12, "statusCode") == (void *)200 )
  {
    v14 = 1LL;
  }
  else
  {
    v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEFAULT) )
    {
      *(_WORD *)v16 = 0;
      _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_DEFAULT, "not using response", v16, 2u);
    }
    objc_release(v15);
    v14 = 0LL;
  }
  v8[2](v8, v14);
  objc_release(v13);
  objc_release(v8);
  objc_release(v7);
}