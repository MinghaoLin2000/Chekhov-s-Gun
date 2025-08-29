-[EAFirmwareUpdater openSession]
id __cdecl -[EAFirmwareUpdater openSession](EAFirmwareUpdater *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x20
  NSInputStream *v5; // x0
  NSInputStream *v6; // x21
  NSOutputStream *v7; // x0
  NSOutputStream *v8; // x21
  const __CFString *v10; // x2
  __int64 v11; // x1
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( -[EAFirmwareUpdater accessory](self, "accessory") )
  {
    if ( -[EAFirmwareUpdater protocolString](self, "protocolString") )
    {
      NSLog(&CFSTR("accessory = %@\n").isa, -[EAFirmwareUpdater accessory](self, "accessory"));
      NSLog(&CFSTR("protocolString = %@\n").isa, -[EAFirmwareUpdater protocolString](self, "protocolString"));
      v3 = objc_msgSend(
             objc_alloc((Class)&OBJC_CLASS___EASession),
             "initWithAccessory:forProtocol:",
             -[EAFirmwareUpdater accessory](self, "accessory"),
             -[EAFirmwareUpdater protocolString](self, "protocolString"));
      if ( v3 )
      {
        v4 = v3;
        -[EAFirmwareUpdater setSession:](self, "setSession:", v3);
        objc_release(v4);
        v5 = -[EASession inputStream](self->_session, "inputStream");
        if ( v5 )
        {
          v6 = v5;
          -[NSInputStream setDelegate:](v5, "setDelegate:", self);
          -[NSInputStream scheduleInRunLoop:forMode:](
            v6,
            "scheduleInRunLoop:forMode:",
            +[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop"),
            NSDefaultRunLoopMode);
          -[NSInputStream open](v6, "open");
          v7 = -[EASession outputStream](self->_session, "outputStream");
          if ( v7 )
          {
            v8 = v7;
            -[NSOutputStream setDelegate:](v7, "setDelegate:", self);
            -[NSOutputStream scheduleInRunLoop:forMode:](
              v8,
              "scheduleInRunLoop:forMode:",
              +[NSRunLoop mainRunLoop](&OBJC_CLASS___NSRunLoop, "mainRunLoop"),
              NSDefaultRunLoopMode);
            -[NSOutputStream open](v8, "open");
            return 0LL;
          }
          v10 = CFSTR("EASession has no output stream");
        }
        else
        {
          v10 = CFSTR("EASession has no input stream");
        }
        v11 = 15LL;
      }
      else
      {
        v10 = CFSTR("Unable to allocate new session");
        v11 = 14LL;
      }
    }
    else
    {
      v10 = CFSTR("No protocol string");
      v11 = 13LL;
    }
  }
  else
  {
    v10 = CFSTR("No accessory");
    v11 = 12LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (id)sub_100009A6C(0LL, v11, v10);
}