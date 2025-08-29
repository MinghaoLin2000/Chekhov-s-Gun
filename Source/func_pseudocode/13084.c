-[SFUZipArchiveFileDataRepresentation bufferedInputStreamWithOffset:length:]
id __cdecl -[SFUZipArchiveFileDataRepresentation bufferedInputStreamWithOffset:length:](
        SFUZipArchiveFileDataRepresentation *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4)
{
  SFUBufferedInputStream *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = -[SFUBufferedInputStream initWithStream:dataLength:](
         objc_alloc(&OBJC_CLASS___SFUBufferedInputStream),
         "initWithStream:dataLength:",
         -[SFUZipArchiveFileDataRepresentation inputStreamWithOffset:length:](self, "inputStreamWithOffset:length:", a3),
         a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v4);
}