-[UARPUpdaterServiceDFU firmwareStagingProgress:bytesSent:bytesTotal:]
void __cdecl -[UARPUpdaterServiceDFU firmwareStagingProgress:bytesSent:bytesTotal:](
        UARPUpdaterServiceDFU *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  OS_os_log *log; // x19

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_100017C74(log);
}