-[PrintdRPCService _endpointResolve:timeout:reply:]
void __cdecl -[PrintdRPCService _endpointResolve:timeout:reply:](
        PrintdRPCService *self,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  os_log_s *v9; // x21
  int v10; // [xsp+0h] [xbp-50h] BYREF
  id v11; // [xsp+4h] [xbp-4Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a5);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = 138543362;
    v11 = v7;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "_endpointResolve: %{public}@",
      (uint8_t *)&v10,
      0xCu);
  }
  objc_release(v9);
  +[PKPrinterBonjourEndpoint resolveEndpoint:timeout:completionHandler:](
    &OBJC_CLASS___PKPrinterBonjourEndpoint,
    "resolveEndpoint:timeout:completionHandler:",
    v7,
    v8,
    a4);
  objc_release(v8);
  objc_release(v7);
}