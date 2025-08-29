-[PrintdRPCService removePrinterFromiCloudWithInfo:]
void __cdecl -[PrintdRPCService removePrinterFromiCloudWithInfo:](PrintdRPCService *self, SEL a2, id a3)
{
  NSDictionary *v3; // x19
  os_log_s *v4; // x20
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = (NSDictionary *)objc_retain(a3);
  v4 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, "addPrinterToiCloudWithInfo", v5, 2u);
  }
  objc_release(v4);
  liteRemovePrinterFromiCloudWithInfo(v3);
  objc_release(v3);
}