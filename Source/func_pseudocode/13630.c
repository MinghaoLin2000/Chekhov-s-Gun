-[SFUDataRepresentation bufferedInputStreamWithBufferSize:]
id __cdecl -[SFUDataRepresentation bufferedInputStreamWithBufferSize:](
        SFUDataRepresentation *self,
        SEL a2,
        unsigned __int64 a3)
{
  SFUBufferedInputStream *v3; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = -[SFUBufferedInputStream initWithStream:bufferSize:](
         objc_alloc(&OBJC_CLASS___SFUBufferedInputStream),
         "initWithStream:bufferSize:",
         -[SFUDataRepresentation inputStream](self, "inputStream"),
         a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v3);
}