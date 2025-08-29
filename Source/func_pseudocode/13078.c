-[SFUZipArchiveFileDataRepresentation dataLength]
signed __int64 __cdecl -[SFUZipArchiveFileDataRepresentation dataLength](
        SFUZipArchiveFileDataRepresentation *self,
        SEL a2)
{
  return -[SFUFileDataRepresentation dataLength](self->mFileRepresentation, "dataLength");
}