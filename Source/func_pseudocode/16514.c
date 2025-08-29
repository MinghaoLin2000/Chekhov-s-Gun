-[iAUPServer processDownloadCompleteCommand:length:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[iAUPServer processDownloadCompleteCommand:length:](iAUPServer *self, SEL a2, char *a3, unsigned int a4)
{
  __int64 v4; // x21
  const char *v7; // x8
  int serverState; // w2
  unsigned __int8 v10; // w21
  __int64 v11; // x9
  void *v12; // x20
  const __CFString *v13; // [xsp+18h] [xbp-48h] BYREF
  const __CFString *v14; // [xsp+20h] [xbp-40h] BYREF
  const __CFString *v15; // [xsp+28h] [xbp-38h] BYREF
  const __CFString *v16; // [xsp+30h] [xbp-30h] BYREF

  v4 = *(_QWORD *)&a4;
  v7 = "valid";
  if ( !a3 )
    v7 = "nil";
  NSLog(&CFSTR("%s(): payload=%s length=%d \n").isa, a2, "-[iAUPServer processDownloadCompleteCommand:length:]", v7, a4);
  serverState = self->_serverState;
  if ( serverState != 3 && serverState != 6 )
  {
    NSLog(
      &CFSTR("[DownloadComplete] Invalid State=%s\n").isa,
      -[iAUPServer serverStateString:](self, "serverStateString:"));
LABEL_11:
    -[iAUPServer setServerState:](self, "setServerState:", 0LL);
    v12 = objc_msgSend(
            objc_alloc((Class)&OBJC_CLASS___NSError),
            "initWithDomain:code:userInfo:",
            CFSTR("com.apple.iAUPServer.ErrorDomain"),
            -1LL,
            0LL);
    v13 = CFSTR("Event");
    v14 = CFSTR("com.apple.fud.updateFailed");
    -[iAUPServerDelegate firmwareUpdateComplete:error:](
      self->_delegate,
      "firmwareUpdateComplete:error:",
      +[NSDictionary dictionaryWithObjects:forKeys:count:](
        &OBJC_CLASS___NSDictionary,
        "dictionaryWithObjects:forKeys:count:",
        &v14,
        &v13,
        1LL),
      v12);
    objc_release(v12);
    return;
  }
  if ( (_DWORD)v4 != 2 )
  {
    NSLog(&CFSTR("[DownloadComplete] Invalid payload length=%d\n").isa, v4);
    goto LABEL_11;
  }
  v10 = a3[1];
  self->_restartRequired |= v10 >> 7;
  self->_sleepWakeRequired |= (a3[1] & 0x40) != 0;
  v11 = ((unsigned __int8)a3[1] >> 5) & 1 | (unsigned int)self->_urgentUpdate;
  self->_urgentUpdate |= (a3[1] & 0x20) != 0;
  NSLog(
    &CFSTR("[DownloadComplete] downloadStatus=%d noMoreDownloads=%d urgentUpdateRequest=%d\n").isa,
    (unsigned __int8)*a3,
    v10 & 1,
    v11);
  if ( (v10 & 1) != 0 )
  {
    -[iAUPServer setServerState:](self, "setServerState:", 0LL);
    v15 = CFSTR("Event");
    v16 = CFSTR("com.apple.fud.updateCompleted");
    -[iAUPServerDelegate firmwareUpdateComplete:error:](
      self->_delegate,
      "firmwareUpdateComplete:error:",
      +[NSDictionary dictionaryWithObjects:forKeys:count:](
        &OBJC_CLASS___NSDictionary,
        "dictionaryWithObjects:forKeys:count:",
        &v16,
        &v15,
        1LL),
      0LL);
  }
  else
  {
    -[iAUPServer setServerState:](self, "setServerState:", 3LL);
    -[iAUPServer sendCommand:payload:payload_length:](self, "sendCommand:payload:payload_length:", 98LL, 0LL, 0LL);
  }
  self->_currentAsset = 4;
  objc_release(self->_firmwareBundle);
  self->_firmwareBundle = 0LL;
}