-[SFUZipArchiveMemoryDataRepresentation inputStream]
id __cdecl -[SFUZipArchiveMemoryDataRepresentation inputStream](SFUZipArchiveMemoryDataRepresentation *self, SEL a2)
{
  signed __int64 v3; // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[SFUZipArchiveMemoryDataRepresentation dataLength](self, "dataLength");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithOffset:length:](
           self,
           "bufferedInputStreamWithOffset:length:",
           0LL,
           v3);
}