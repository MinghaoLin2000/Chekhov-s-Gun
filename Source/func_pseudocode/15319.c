-[UARPUpdaterServiceDisplay getBSDNotificationsListWithReply:]
void __cdecl -[UARPUpdaterServiceDisplay getBSDNotificationsListWithReply:](
        UARPUpdaterServiceDisplay *self,
        SEL a2,
        id a3)
{
  void (__fastcall **v4)(id, _UNKNOWN **); // x19
  OS_os_log *log; // x20
  int v6; // [xsp+0h] [xbp-30h] BYREF
  const char *v7; // [xsp+4h] [xbp-2Ch]

  v4 = (void (__fastcall **)(id, _UNKNOWN **))objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = 136315138;
    v7 = "-[UARPUpdaterServiceDisplay getBSDNotificationsListWithReply:]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", (uint8_t *)&v6, 0xCu);
  }
  v4[2](v4, &off_100021850);
  objc_release(v4);
}