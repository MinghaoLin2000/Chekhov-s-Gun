-[SFUZipArchiveFileDataRepresentation path]
id __cdecl -[SFUZipArchiveFileDataRepresentation path](SFUZipArchiveFileDataRepresentation *self, SEL a2)
{
  return -[SFUFileDataRepresentation path](self->mFileRepresentation, "path");
}