-[iAUPServer processIdentifyCommand:length:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[iAUPServer processIdentifyCommand:length:](iAUPServer *self, SEL a2, char *a3, unsigned int a4)
{
  __int64 v4; // x20
  const char *v7; // x8
  void *v8; // x20
  const __CFString *v9; // [xsp+18h] [xbp-38h] BYREF
  const __CFString *v10; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = *(_QWORD *)&a4;
  v7 = "valid";
  if ( !a3 )
    v7 = "nil";
  NSLog(&CFSTR("%s(): payload=%s length=%d \n").isa, a2, "-[iAUPServer processIdentifyCommand:length:]", v7, a4);
  if ( self->_serverState != 1 )
  {
    NSLog(&CFSTR("[Identify] Invalid State=%s\n").isa, -[iAUPServer serverStateString:](self, "serverStateString:"));
LABEL_12:
    -[iAUPServer setIAUPVersion:](self, "setIAUPVersion:", 2LL);
    -[iAUPServer setServerState:](self, "setServerState:", 0LL);
    v8 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSError),
           "initWithDomain:code:userInfo:",
           CFSTR("com.apple.iAUPServer.ErrorDomain"),
           -1LL,
           0LL);
    v9 = CFSTR("Event");
    v10 = CFSTR("com.apple.fud.updateFailed");
    -[iAUPServerDelegate firmwareUpdateComplete:error:](
      self->_delegate,
      "firmwareUpdateComplete:error:",
      +[NSDictionary dictionaryWithObjects:forKeys:count:](
        &OBJC_CLASS___NSDictionary,
        "dictionaryWithObjects:forKeys:count:",
        &v10,
        &v9,
        1LL),
      v8);
    objc_release(v8);
    return;
  }
  if ( (_DWORD)v4 != 1 )
  {
    NSLog(&CFSTR("[Identify] Invalid payload length=%d\n").isa, v4);
    goto LABEL_12;
  }
  if ( *a3 != 2 )
  {
    NSLog(&CFSTR("[Identify] Invalid protocol version=%d\n").isa, (unsigned __int8)*a3);
    goto LABEL_12;
  }
  -[iAUPServer setIAUPVersion:](self, "setIAUPVersion:", 2LL);
  -[iAUPServer setServerState:](self, "setServerState:", 2LL);
  -[iAUPServer sendCommand:payload:payload_length:](self, "sendCommand:payload:payload_length:", 96LL, 0LL, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[iAUPServer setServerState:](self, "setServerState:", 3LL);
}