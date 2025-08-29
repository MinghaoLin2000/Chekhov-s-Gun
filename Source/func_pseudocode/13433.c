-[SFUZipArchiveMemoryDataRepresentation dataLength]
signed __int64 __cdecl -[SFUZipArchiveMemoryDataRepresentation dataLength](
        SFUZipArchiveMemoryDataRepresentation *self,
        SEL a2)
{
  return -[NSData length](self->mData, "length");
}