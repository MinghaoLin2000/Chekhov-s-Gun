-[EAFirmwareUpdater closeSession]
void __cdecl -[EAFirmwareUpdater closeSession](EAFirmwareUpdater *self, SEL a2)
{
  NSInputStream *v3; // x0
  NSInputStream *v4; // x20
  NSOutputStream *v5; // x0
  NSOutputStream *v6; // x20

  if ( self->_session )
  {
    -[EAFirmwareUpdater log:format:](
      self,
      "log:format:",
      5LL,
      CFSTR("%s %@"),
      "-[EAFirmwareUpdater closeSession]",
      objc_autorelease(
        objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSString),
          "initWithFormat:",
          CFSTR("Closing EA Session=%@"),
          self->_session)));
    v3 = -[EASession inputStream](self->_session, "inputStream");
    if ( v3 )
    {
      v4 = v3;
      -[NSInputStream close](v3, "close");
      -[NSInputStream removeFromRunLoop:forMode:](
        v4,
        "removeFromRunLoop:forMode:",
        +[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop"),
        NSDefaultRunLoopMode);
    }
    v5 = -[EASession outputStream](self->_session, "outputStream");
    if ( v5 )
    {
      v6 = v5;
      -[NSOutputStream close](v5, "close");
      -[NSOutputStream removeFromRunLoop:forMode:](
        v6,
        "removeFromRunLoop:forMode:",
        +[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop"),
        NSDefaultRunLoopMode);
    }
    objc_release(self->_session);
    self->_session = 0LL;
  }
}