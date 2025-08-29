-[USBDFUUpdater setDfuMode]
int __cdecl -[USBDFUUpdater setDfuMode](USBDFUUpdater *self, SEL a2)
{
  OS_os_log *log; // x20
  int v4; // w20
  OS_os_log *v5; // x19
  int v7; // [xsp+0h] [xbp-30h] BYREF
  const char *v8; // [xsp+4h] [xbp-2Ch]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
  {
    v7 = 136315138;
    v8 = "-[USBDFUUpdater setDfuMode]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_INFO,
      "%s: Change to kDFU_IDLE through HVCI_APP_DETACH_TO_DFU",
      (uint8_t *)&v7,
      0xCu);
  }
  v4 = -[USBDFUUpdater hvciAppDetachToDfuCmd](self, "hvciAppDetachToDfuCmd");
  if ( v4 )
  {
    v5 = self->_log;
    if ( os_log_type_enabled(v5, OS_LOG_TYPE_ERROR) )
      sub_100017220(v5);
  }
  return v4;
}