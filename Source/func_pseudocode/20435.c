-[PrintdRPCService getiCloudPrintersReply:]
void __cdecl -[PrintdRPCService getiCloudPrintersReply:](PrintdRPCService *self, SEL a2, id a3)
{
  void (__fastcall **v3)(id, void *); // x19
  os_log_s *v4; // x20
  void *v5; // x20
  uint8_t v6[16]; // [xsp+0h] [xbp-30h] BYREF

  v3 = (void (__fastcall **)(id, void *))objc_retain(a3);
  v4 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v4, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl((void *)&_mh_execute_header, v4, OS_LOG_TYPE_DEFAULT, "getiCloudPrintersReply", v6, 2u);
  }
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(liteGetiCloudPrinters());
  v3[2](v3, v5);
  objc_release(v5);
  objc_release(v3);
}