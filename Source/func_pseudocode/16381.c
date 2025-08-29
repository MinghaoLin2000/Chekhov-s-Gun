-[EAFirmwareUpdater flushOutput]
id __cdecl -[EAFirmwareUpdater flushOutput](EAFirmwareUpdater *self, SEL a2)
{
  _opaque_pthread_mutex_t *p_flushOutputLock; // x19
  EASession *session; // x0
  NSOutputStream *v5; // x0
  NSOutputStream *v6; // x21
  __int64 v7; // x0
  void *v8; // x20
  const __CFString *v10; // x2
  __int64 v11; // x1

  p_flushOutputLock = &self->_flushOutputLock;
  pthread_mutex_lock(&self->_flushOutputLock);
  if ( -[EAFirmwareUpdater accessory](self, "accessory") )
  {
    session = self->_session;
    if ( session )
    {
      v5 = -[EASession outputStream](session, "outputStream");
      if ( v5 )
      {
        v6 = v5;
        if ( -[NSOutputStream hasSpaceAvailable](v5, "hasSpaceAvailable") )
        {
          while ( -[NSMutableData length](self->_outputData, "length") )
          {
            v7 = -[NSOutputStream write:maxLength:](
                   v6,
                   "write:maxLength:",
                   -[NSMutableData bytes](self->_outputData, "bytes"),
                   -[NSMutableData length](self->_outputData, "length"));
            if ( v7 == -1 )
            {
              v10 = CFSTR("Failure attempting to write to NSOutputStream");
              v11 = 16LL;
              goto LABEL_13;
            }
            if ( v7 >= 1 )
              -[NSMutableData replaceBytesInRange:withBytes:length:](
                self->_outputData,
                "replaceBytesInRange:withBytes:length:",
                0LL,
                v7,
                0LL,
                0LL);
            if ( !-[NSOutputStream hasSpaceAvailable](v6, "hasSpaceAvailable") )
              goto LABEL_10;
          }
        }
        goto LABEL_10;
      }
      v10 = CFSTR("No output stream on session");
      v11 = 15LL;
    }
    else
    {
      v10 = CFSTR("No session");
      v11 = 14LL;
    }
LABEL_13:
    v8 = (void *)sub_100009A6C(0LL, v11, v10);
    goto LABEL_11;
  }
LABEL_10:
  v8 = 0LL;
LABEL_11:
  pthread_mutex_unlock(p_flushOutputLock);
  return v8;
}