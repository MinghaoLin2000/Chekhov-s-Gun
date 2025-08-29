-[UARPUpdaterServiceDFU firmwareStagingComplete:withStatus:]
void __cdecl -[UARPUpdaterServiceDFU firmwareStagingComplete:withStatus:](
        UARPUpdaterServiceDFU *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v6; // x20
  OS_os_log *log; // x22

  v6 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100017CEC(log, a4, v6);
  -[UARPDFUUpdater assetTransferComplete:assetID:status:](
    self->_dfuOtpUpdater,
    "assetTransferComplete:assetID:status:",
    v6,
    0LL,
    a4);
  objc_release(v6);
}