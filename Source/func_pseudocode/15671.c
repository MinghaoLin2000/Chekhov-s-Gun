-[UARPUpdaterServiceDFU getMatchingServicesListWithReply:]
void __cdecl -[UARPUpdaterServiceDFU getMatchingServicesListWithReply:](UARPUpdaterServiceDFU *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, id); // x19
  OS_os_log *log; // x21
  id v6; // x20

  v4 = (void (__fastcall **)(id, id))objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
    sub_1000173DC(log);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_100017394();
  v6 = objc_retainAutoreleasedReturnValue(-[UARPUpdaterServiceDFU getMatchingServicesList](self, "getMatchingServicesList"));
  v4[2](v4, v6);
  objc_release(v6);
  objc_release(v4);
}