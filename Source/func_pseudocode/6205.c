-[MediaConversionQueue cameraWatcherDidChangeState:]
void __cdecl -[MediaConversionQueue cameraWatcherDidChangeState:](MediaConversionQueue *self, SEL a2, id a3)
{
  OS_dispatch_queue *cameraWatcherQueue; // x20
  id v5; // x22
  unsigned int v6; // w21
  MediaConversionQueueDelegate *v7; // x20
  int v8; // w22
  MediaConversionQueueEntry *v9; // x21
  _DWORD v10[2]; // [xsp+0h] [xbp-40h] BYREF
  __int16 v11; // [xsp+8h] [xbp-38h]
  MediaConversionQueueDelegate *v12; // [xsp+Ah] [xbp-36h]
  __int16 v13; // [xsp+12h] [xbp-2Eh]
  int v14; // [xsp+14h] [xbp-2Ch]

  cameraWatcherQueue = self->_cameraWatcherQueue;
  v5 = objc_retain(a3);
  dispatch_assert_queue_V2((dispatch_queue_t)cameraWatcherQueue);
  v6 = (unsigned int)objc_msgSend(v5, "isCameraRunning");
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueue delegate](self, "delegate"));
  v8 = objc_opt_respondsToSelector();
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    v10[0] = 67109632;
    v10[1] = v6;
    v11 = 2048;
    v12 = v7;
    v13 = 1024;
    v14 = v8 & 1;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Media conversion queue camera watcher state change, new state = %d, delegate (%p) present and supports cancellation: %d",
      (uint8_t *)v10,
      0x18u);
  }
  if ( (v6 & v8) == 1 )
  {
    os_unfair_lock_lock(&self->_queueStateLock);
    if ( -[MediaConversionQueue delegateCanCancelCurrentlyProcessingRequestQueueEntry](
           self,
           "delegateCanCancelCurrentlyProcessingRequestQueueEntry") )
    {
      v9 = objc_retain(self->_currentlyProcessingRequestQueueEntry);
      os_unfair_lock_unlock(&self->_queueStateLock);
      if ( v9 )
      {
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
        {
          LOWORD(v10[0]) = 0;
          _os_log_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_INFO,
            "Currently processing queue entry is optional, cancelling because camera started up",
            (uint8_t *)v10,
            2u);
        }
        -[MediaConversionQueueDelegate conversionQueue:cancelCurrentlyProcessingEntry:](
          v7,
          "conversionQueue:cancelCurrentlyProcessingEntry:",
          self,
          v9);
        objc_release(v9);
      }
    }
    else
    {
      os_unfair_lock_unlock(&self->_queueStateLock);
    }
  }
  objc_release(v7);
}