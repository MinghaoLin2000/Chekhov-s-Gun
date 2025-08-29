-[UARPUSBDFUAccessory recvMessage:]
unsigned int __cdecl -[UARPUSBDFUAccessory recvMessage:](UARPUSBDFUAccessory *self, SEL a2, id a3)
{
  id v4; // x20
  OS_os_log *log; // x21
  id v6; // x20
  unsigned int v7; // w21
  OS_os_log *v8; // x19

  v4 = objc_retain(a3);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEBUG) )
    sub_1000190D4(log);
  v6 = objc_retainAutorelease(v4);
  v7 = uarpPlatformEndpointRecvMessage(
         &self->_localEP,
         &self->_remoteEP,
         objc_msgSend(v6, "bytes"),
         objc_msgSend(v6, "length"));
  if ( v7 )
  {
    v8 = self->_log;
    if ( os_log_type_enabled(v8, OS_LOG_TYPE_ERROR) )
      sub_10001904C((int)v6, v7, v8);
  }
  objc_release(v6);
  return v7;
}