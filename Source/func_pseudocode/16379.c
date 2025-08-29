-[EAFirmwareUpdater updateComplete:error:]
void __cdecl -[EAFirmwareUpdater updateComplete:error:](EAFirmwareUpdater *self, SEL a2, id a3, id a4)
{
  dispatch_queue_s *eaNotificationDispatchQueue; // x0
  id v8; // x20
  void *v9; // x4
  __int64 v10; // x3
  NSError *v11; // x21
  void (__fastcall **v12)(id, id, NSError *); // x0
  id progressHandler; // x0
  id updateHandler; // x0
  id personalizationRequestHandler; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF

  objc_sync_enter(self);
  -[EAFirmwareUpdater log:format:](self, "log:format:", 5LL, CFSTR("error=%@"), a4);
  -[EAFirmwareUpdater stopReconnectTimer](self, "stopReconnectTimer");
  eaNotificationDispatchQueue = (dispatch_queue_s *)self->_eaNotificationDispatchQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000C94C;
  block[3] = &unk_1000315C0;
  block[4] = self;
  dispatch_async(eaNotificationDispatchQueue, block);
  if ( !self->_applyCompletion )
    goto LABEL_16;
  if ( a3 )
  {
    v8 = -[EAFirmwareUpdater createEndOfUpdateEventDict:error:](self, "createEndOfUpdateEventDict:error:", a3, a4);
    if ( (unsigned int)objc_msgSend(
                         objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("Event")),
                         "isEqualToString:",
                         CFSTR("com.apple.fud.updateInterrupted")) )
    {
      v9 = objc_msgSend(a4, "userInfo");
      v10 = 1LL;
    }
    else
    {
      if ( !(unsigned int)objc_msgSend(
                            objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("Event")),
                            "isEqualToString:",
                            CFSTR("com.apple.fud.updateFailed")) )
      {
        v11 = 0LL;
        goto LABEL_10;
      }
      v9 = objc_msgSend(a4, "userInfo");
      v10 = 4LL;
    }
    v11 = +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            CFSTR("com.apple.MobileAccessoryUpdater.ErrorDomain"),
            v10,
            v9);
  }
  else
  {
    v11 = 0LL;
    v8 = 0LL;
  }
LABEL_10:
  v12 = -[EAFirmwareUpdater applyCompletion](self, "applyCompletion");
  v12[2](v12, v8, v11);
  _Block_release(self->_applyCompletion);
  self->_applyCompletion = 0LL;
  progressHandler = self->_progressHandler;
  if ( progressHandler )
  {
    _Block_release(progressHandler);
    self->_progressHandler = 0LL;
  }
  updateHandler = self->_updateHandler;
  if ( updateHandler )
  {
    _Block_release(updateHandler);
    self->_updateHandler = 0LL;
  }
  personalizationRequestHandler = self->_personalizationRequestHandler;
  if ( personalizationRequestHandler )
  {
    _Block_release(personalizationRequestHandler);
    self->_personalizationRequestHandler = 0LL;
  }
LABEL_16:
  -[EAFirmwareUpdater doneWithAsset](self, "doneWithAsset");
  -[NSNotificationCenter removeObserver:](
    +[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"),
    "removeObserver:",
    self);
  objc_sync_exit(self);
}