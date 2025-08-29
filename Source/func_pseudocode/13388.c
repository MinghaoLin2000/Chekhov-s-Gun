-[SFUFileInputStream p_configureWithPath:offset:length:]
bool __cdecl -[SFUFileInputStream p_configureWithPath:offset:length:](
        SFUFileInputStream *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        signed __int64 a5)
{
  __int64 v9; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( !a3
    || !-[NSFileManager isReadableFileAtPath:](
          +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
          "isReadableFileAtPath:",
          a3) )
  {
    return 0;
  }
  v9 = SFUOpen(a3, 0, 0);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUFileInputStream p_configureWithFileDescriptor:offset:length:](
           self,
           "p_configureWithFileDescriptor:offset:length:",
           v9,
           a4,
           a5);
}