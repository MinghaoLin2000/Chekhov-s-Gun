-[PrintdRPCService updateiCloudPrinterLocation:newLocation:]
void __cdecl -[PrintdRPCService updateiCloudPrinterLocation:newLocation:](PrintdRPCService *self, SEL a2, id a3, id a4)
{
  NSDictionary *v5; // x19
  NSString *v6; // x20
  os_log_s *v7; // x21
  uint8_t v8[16]; // [xsp+0h] [xbp-30h] BYREF

  v5 = (NSDictionary *)objc_retain(a3);
  v6 = (NSString *)objc_retain(a4);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v8 = 0;
    _os_log_impl((void *)&_mh_execute_header, v7, OS_LOG_TYPE_DEFAULT, "updateiCloudPrinterDisplayName", v8, 2u);
  }
  objc_release(v7);
  liteUpdateiCloudPrinterLocation(v5, v6);
  objc_release(v6);
  objc_release(v5);
}