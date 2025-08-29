-[SFUZipArchiveFileDataRepresentation isReadable]
bool __cdecl -[SFUZipArchiveFileDataRepresentation isReadable](SFUZipArchiveFileDataRepresentation *self, SEL a2)
{
  return -[SFUFileDataRepresentation isReadable](self->mFileRepresentation, "isReadable");
}