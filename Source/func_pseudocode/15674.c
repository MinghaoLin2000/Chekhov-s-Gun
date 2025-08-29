-[UARPUpdaterServiceDFU getBSDNotificationsListWithReply:]
void __cdecl -[UARPUpdaterServiceDFU getBSDNotificationsListWithReply:](UARPUpdaterServiceDFU *self, SEL a2, id a3)
{
  void (__fastcall **v4)(id, void *); // x19
  OS_os_log *log; // x20
  uint8_t v6[16]; // [xsp+0h] [xbp-20h] BYREF

  v4 = (void (__fastcall **)(id, void *))objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_1000177B0(log);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_WORD *)v6 = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "UARPUpdaterService does not provide matching BSD notifications",
      v6,
      2u);
  }
  v4[2](v4, &__NSArray0__struct);
  objc_release(v4);
}