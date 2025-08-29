-[iAUPServer processNotifyAccessoryErrorCommand:length:]
void __cdecl -[iAUPServer processNotifyAccessoryErrorCommand:length:](
        iAUPServer *self,
        SEL a2,
        char *a3,
        unsigned int a4)
{
  const char *v6; // x8
  void *v7; // x20
  const __CFString *v8; // [xsp+18h] [xbp-28h] BYREF
  const __CFString *v9; // [xsp+20h] [xbp-20h] BYREF

  v6 = "valid";
  if ( !a3 )
    v6 = "nil";
  NSLog(
    &CFSTR("%s(): payload=%s length=%d \n").isa,
    a2,
    "-[iAUPServer processNotifyAccessoryErrorCommand:length:]",
    v6,
    a4);
  NSLog(&CFSTR("[NotifyAccessoryError] Accessory notified error reason=%d\n").isa, (unsigned __int8)*a3);
  -[iAUPServer setServerState:](self, "setServerState:", 0LL);
  v7 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSError),
         "initWithDomain:code:userInfo:",
         CFSTR("com.apple.iAUPServer.ErrorDomain"),
         -1LL,
         0LL);
  v8 = CFSTR("Event");
  v9 = CFSTR("com.apple.fud.updateFailed");
  -[iAUPServerDelegate firmwareUpdateComplete:error:](
    self->_delegate,
    "firmwareUpdateComplete:error:",
    +[NSDictionary dictionaryWithObjects:forKeys:count:](
      &OBJC_CLASS___NSDictionary,
      "dictionaryWithObjects:forKeys:count:",
      &v9,
      &v8,
      1LL),
    v7);
  objc_release(v7);
  objc_release(self->_firmwareBundle);
  self->_firmwareBundle = 0LL;
}