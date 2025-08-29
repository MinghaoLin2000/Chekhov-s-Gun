-[PrintdRPCService getJobUpdateStatus:includeThumbnail:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[PrintdRPCService getJobUpdateStatus:includeThumbnail:reply:](
        PrintdRPCService *self,
        SEL a2,
        int a3,
        bool a4,
        id a5)
{
  _BOOL8 v5; // x21
  __int64 v6; // x22
  void (__fastcall **v8)(id, _QWORD); // x19
  os_log_s *v9; // x23
  void *v10; // x23
  unsigned __int8 v11; // w24
  os_log_s *v12; // x21
  NSXPCConnection *connection; // x8
  int v14; // [xsp+0h] [xbp-50h] BYREF
  NSXPCConnection *v15; // [xsp+4h] [xbp-4Ch]

  v5 = a4;
  v6 = *(_QWORD *)&a3;
  v8 = (void (__fastcall **)(id, _QWORD))objc_retain(a5);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    LOWORD(v14) = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "getJobUpdateStatus:includeThumbnail:reply:",
      (uint8_t *)&v14,
      2u);
  }
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSXPCConnection valueForEntitlement:](
            self->_connection,
            "valueForEntitlement:",
            CFSTR("com.apple.printing.getjoblist")));
  v11 = (unsigned __int8)objc_msgSend(v10, "boolValue");
  objc_release(v10);
  if ( (v11 & 1) != 0 )
  {
    +[lite_job_t getJobAttributes:includeThumbnail:completionHandler:](
      &OBJC_CLASS___lite_job_t,
      "getJobAttributes:includeThumbnail:completionHandler:",
      v6,
      v5,
      v8);
  }
  else
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryProgress[0]));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_ERROR) )
    {
      connection = self->_connection;
      v14 = 138543362;
      v15 = connection;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_ERROR,
        "Client %{public}@ doesn't have getjoblist entitlement",
        (uint8_t *)&v14,
        0xCu);
    }
    objc_release(v12);
    v8[2](v8, 0LL);
  }
  objc_release(v8);
}