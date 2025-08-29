-[PrintdRPCService cancelJob:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[PrintdRPCService cancelJob:](PrintdRPCService *self, SEL a2, int a3)
{
  __int64 v3; // x20
  os_log_s *v5; // x21
  void *v6; // x21
  unsigned __int8 v7; // w22
  os_log_s *v8; // x20
  NSXPCConnection *connection; // x8
  int v10; // [xsp+0h] [xbp-40h] BYREF
  NSXPCConnection *v11; // [xsp+4h] [xbp-3Ch]

  v3 = *(_QWORD *)&a3;
  v5 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
  {
    LOWORD(v10) = 0;
    _os_log_impl((void *)&_mh_execute_header, v5, OS_LOG_TYPE_DEFAULT, "cancelJob", (uint8_t *)&v10, 2u);
  }
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSXPCConnection valueForEntitlement:](
           self->_connection,
           "valueForEntitlement:",
           CFSTR("com.apple.printing.getjoblist")));
  v7 = (unsigned __int8)objc_msgSend(v6, "boolValue");
  objc_release(v6);
  if ( (v7 & 1) != 0 )
  {
    +[lite_job_t cancelJob:](&OBJC_CLASS___lite_job_t, "cancelJob:", v3);
  }
  else
  {
    v8 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
    {
      connection = self->_connection;
      v10 = 138543362;
      v11 = connection;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v8,
        OS_LOG_TYPE_ERROR,
        "Client %{public}@ doesn't have getjoblist entitlement",
        (uint8_t *)&v10,
        0xCu);
    }
    objc_release(v8);
  }
}