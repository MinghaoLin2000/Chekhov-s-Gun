-[PrintdRPCService _removeKeychainItem:]
void __cdecl -[PrintdRPCService _removeKeychainItem:](PrintdRPCService *self, SEL a2, id a3)
{
  id v3; // x19
  os_log_s *v4; // x20
  lite_printer_t *v5; // x0
  lite_printer_t *v6; // x20
  int v7; // [xsp+0h] [xbp-30h] BYREF
  id v8; // [xsp+4h] [xbp-2Ch]

  v3 = objc_retain(a3);
  v4 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
  {
    v7 = 138543362;
    v8 = v3;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v4,
      OS_LOG_TYPE_DEFAULT,
      "_removeKeychainItem: %{public}@",
      (uint8_t *)&v7,
      0xCu);
  }
  objc_release(v4);
  v5 = (lite_printer_t *)objc_retainAutoreleasedReturnValue(
                           +[lite_printer_t existingPrinterWithEndpoint:](
                             &OBJC_CLASS___lite_printer_t,
                             "existingPrinterWithEndpoint:",
                             v3));
  v6 = v5;
  if ( v5 )
    liteNotifyClearPassword(v5);
  objc_release(v6);
  objc_release(v3);
}