__Z26platformHTTP_GetDataForURLP10IPPSessionP5NSURLU13block_pointerFvP6NSDataE
void __fastcall platformHTTP_GetDataForURL(void *a1, void *a2, void *a3)
{
  id v5; // x19
  id v6; // x20
  id v7; // x21
  platform_http_get *v8; // x22
  os_log_s *v9; // x23
  int v10; // [xsp+0h] [xbp-50h] BYREF
  platform_http_get *v11; // [xsp+4h] [xbp-4Ch]

  v5 = objc_retain(a1);
  v6 = objc_retain(a2);
  v7 = objc_retain(a3);
  v8 = -[platform_http_get initWithSession:url:callback:](
         objc_alloc(&OBJC_CLASS___platform_http_get),
         "initWithSession:url:callback:",
         v5,
         v6,
         v7);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = 138543362;
    v11 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "Starting fetch %{public}@",
      (uint8_t *)&v10,
      0xCu);
  }
  objc_release(v9);
  -[platform_http_get start](v8, "start");
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
}