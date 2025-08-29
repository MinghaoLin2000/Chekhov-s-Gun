-[UARPUSBDFUAccessory enableDisconnectCallback:reference:]
int __cdecl -[UARPUSBDFUAccessory enableDisconnectCallback:reference:](
        UARPUSBDFUAccessory *self,
        SEL a2,
        void *a3,
        void *a4)
{
  NSString *identifier; // x23
  void *v8; // x24
  id v9; // x20
  __CFRunLoop *Current; // x23
  __CFRunLoopSource *RunLoopSource; // x0
  IONotificationPort *mNotificationPort; // x24
  const __CFDictionary *v13; // x20
  kern_return_t v14; // w21
  io_object_t v15; // w0
  OS_os_log *log; // x22
  int v18; // [xsp+0h] [xbp-50h] BYREF
  const char *v19; // [xsp+4h] [xbp-4Ch]
  __int16 v20; // [xsp+Ch] [xbp-44h]
  UARPUSBDFUAccessory *v21; // [xsp+Eh] [xbp-42h]

  IONotificationPortSetDispatchQueue(self->_mNotificationPort, (dispatch_queue_t)self->_notificationQueue);
  identifier = self->_identifier;
  v8 = objc_retainAutoreleasedReturnValue(-[UARPAccessory serialNumber](self->_uarpAccessory, "serialNumber"));
  v9 = objc_retainAutoreleasedReturnValue(
         +[UARPUSBDFUAccessory matchingDictionaryForIdentifier:serialNumber:](
           &OBJC_CLASS___UARPUSBDFUAccessory,
           "matchingDictionaryForIdentifier:serialNumber:",
           identifier,
           v8));
  objc_release(v8);
  Current = CFRunLoopGetCurrent();
  RunLoopSource = IONotificationPortGetRunLoopSource(self->_mNotificationPort);
  CFRunLoopAddSource(Current, RunLoopSource, kCFRunLoopDefaultMode);
  mNotificationPort = self->_mNotificationPort;
  v13 = (const __CFDictionary *)objc_retain(v9);
  v14 = IOServiceAddMatchingNotification(
          mNotificationPort,
          "IOServiceTerminate",
          v13,
          (IOServiceMatchingCallback)a3,
          a4,
          &self->_notificationIterator);
  if ( !v14 )
  {
    while ( 1 )
    {
      v15 = IOIteratorNext(self->_notificationIterator);
      if ( !v15 )
        break;
      IOObjectRelease(v15);
    }
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
    {
      v18 = 136315394;
      v19 = "-[UARPUSBDFUAccessory enableDisconnectCallback:reference:]";
      v20 = 2112;
      v21 = self;
      _os_log_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_INFO,
        "%s: Enabled disconnect callback for %@",
        (uint8_t *)&v18,
        0x16u);
    }
  }
  objc_release(v13);
  return v14;
}