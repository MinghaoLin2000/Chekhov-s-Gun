-[PrintdRPCService getLastUsedPrintersForCurrentNetworkReply:]
void __cdecl -[PrintdRPCService getLastUsedPrintersForCurrentNetworkReply:](PrintdRPCService *self, SEL a2, id a3)
{
  void (__fastcall **v3)(id, void *, void *); // x19
  os_log_s *v4; // x20
  NameAndPrinters *v5; // x20
  NSString *v6; // x21
  NSArray *v7; // x22
  __int16 v8[8]; // [xsp+0h] [xbp-30h] BYREF

  v3 = (void (__fastcall **)(id, void *, void *))objc_retain(a3);
  v4 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
  {
    v8[0] = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v4,
      OS_LOG_TYPE_DEFAULT,
      "getLastUsedPrintersForCurrentNetworkReply",
      (uint8_t *)v8,
      2u);
  }
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(liteGetPrintersForCurrentNetwork());
  v6 = objc_retainAutoreleasedReturnValue(-[NameAndPrinters networkName](v5, "networkName"));
  v7 = objc_retainAutoreleasedReturnValue(-[NameAndPrinters printers](v5, "printers"));
  v3[2](v3, v6, v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v3);
}