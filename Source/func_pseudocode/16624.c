-[FirmwareBundle getFirmwareDataInRange:error:]
id __cdecl -[FirmwareBundle getFirmwareDataInRange:error:](FirmwareBundle *self, SEL a2, _NSRange a3, id *a4)
{
  NSUInteger length; // x20
  NSUInteger location; // x22
  NSFileHandle *firmwareFilehandle; // x0
  NSFileHandle *v9; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  length = a3.length;
  location = a3.location;
  firmwareFilehandle = self->_firmwareFilehandle;
  if ( !firmwareFilehandle )
  {
    firmwareFilehandle = objc_retain(
                           +[NSFileHandle fileHandleForReadingFromURL:error:](
                             &OBJC_CLASS___NSFileHandle,
                             "fileHandleForReadingFromURL:error:",
                             self->_firmwareLocalURL,
                             a4));
    self->_firmwareFilehandle = firmwareFilehandle;
    if ( !firmwareFilehandle )
      return 0LL;
  }
  if ( !-[NSFileHandle uarpSeekToOffset:error:](firmwareFilehandle, "uarpSeekToOffset:error:", location, a4) )
    return 0LL;
  v9 = self->_firmwareFilehandle;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSFileHandle uarpReadDataUpToLength:error:](v9, "uarpReadDataUpToLength:error:", length, a4);
}