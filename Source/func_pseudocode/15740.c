-[UARPUSBDFUAccessory disconnectUarpController]
unsigned int __cdecl -[UARPUSBDFUAccessory disconnectUarpController](UARPUSBDFUAccessory *self, SEL a2)
{
  unsigned int v3; // w19
  OS_os_log *log; // x20

  v3 = uarpPlatformRemoteEndpointRemove(&self->_localEP, &self->_remoteEP);
  if ( v3 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100018FD4(log);
  }
  return v3;
}