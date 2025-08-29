-[SFUZipArchiveFileDataRepresentation inputStream]
id __cdecl -[SFUZipArchiveFileDataRepresentation inputStream](SFUZipArchiveFileDataRepresentation *self, SEL a2)
{
  return -[SFUFileDataRepresentation inputStream](self->mFileRepresentation, "inputStream");
}