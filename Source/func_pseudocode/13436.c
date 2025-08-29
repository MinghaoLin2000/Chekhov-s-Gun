-[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithBufferSize:]
id __cdecl -[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithBufferSize:](
        SFUZipArchiveMemoryDataRepresentation *self,
        SEL a2,
        unsigned __int64 a3)
{
  signed __int64 v4; // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = -[SFUZipArchiveMemoryDataRepresentation dataLength](self, "dataLength", a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithOffset:length:](
           self,
           "bufferedInputStreamWithOffset:length:",
           0LL,
           v4);
}