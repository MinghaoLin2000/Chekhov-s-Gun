-[PrintdRPCService _interrupted]
void __cdecl -[PrintdRPCService _interrupted](PrintdRPCService *self, SEL a2)
{
  os_log_s *v3; // x20
  NSXPCConnection *connection; // x0
  uint8_t v5[16]; // [xsp+0h] [xbp-20h] BYREF

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)v5 = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "interrupted", v5, 2u);
  }
  objc_release(v3);
  -[PrintdRPCService _commonInvalidation](self, "_commonInvalidation");
  connection = self->_connection;
  if ( connection )
  {
    self->_connection = 0LL;
    objc_release(connection);
  }
}