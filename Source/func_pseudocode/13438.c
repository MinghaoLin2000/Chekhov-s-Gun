-[SFUZipArchiveMemoryDataRepresentation inputStreamWithOffset:length:]
// attributes: thunk
id __cdecl -[SFUZipArchiveMemoryDataRepresentation inputStreamWithOffset:length:](
        SFUZipArchiveMemoryDataRepresentation *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4)
{
  return -[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithOffset:length:](
           self,
           "bufferedInputStreamWithOffset:length:",
           a3,
           a4);
}