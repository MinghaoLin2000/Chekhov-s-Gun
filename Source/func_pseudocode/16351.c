-[EAFirmwareUpdater setSession:]
void __cdecl -[EAFirmwareUpdater setSession:](EAFirmwareUpdater *self, SEL a2, id a3)
{
  EASession *session; // x0
  NSInputStream *v6; // x0
  NSInputStream *v7; // x21
  NSOutputStream *v8; // x0
  NSOutputStream *v9; // x21
  id v10; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  session = self->_session;
  if ( session != a3 )
  {
    if ( session )
    {
      v6 = -[EASession inputStream](session, "inputStream");
      if ( v6 )
      {
        v7 = v6;
        -[NSInputStream close](v6, "close");
        -[NSInputStream removeFromRunLoop:forMode:](
          v7,
          "removeFromRunLoop:forMode:",
          +[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop"),
          NSDefaultRunLoopMode);
      }
      v8 = -[EASession outputStream](self->_session, "outputStream");
      if ( v8 )
      {
        v9 = v8;
        -[NSOutputStream close](v8, "close");
        -[NSOutputStream removeFromRunLoop:forMode:](
          v9,
          "removeFromRunLoop:forMode:",
          +[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop"),
          NSDefaultRunLoopMode);
      }
      objc_release(self->_session);
    }
    self->_session = (EASession *)a3;
    if ( a3 )
    {
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      v10 = objc_retain(a3);
    }
  }
}