-[PrintdRPCService resetPKCloudData]
void __cdecl -[PrintdRPCService resetPKCloudData](PrintdRPCService *self, SEL a2)
{
  os_log_s *v2; // x19
  uint8_t v3[16]; // [xsp+0h] [xbp-20h] BYREF

  v2 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v2, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v3 = 0;
    _os_log_impl((void *)&_mh_execute_header, v2, OS_LOG_TYPE_DEFAULT, "resetPKCloudData", v3, 2u);
  }
  objc_release(v2);
  liteResetPKCloudData();
}