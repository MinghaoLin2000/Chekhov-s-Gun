-[SFUZipEntry isReadable]
bool __cdecl -[SFUZipEntry isReadable](SFUZipEntry *self, SEL a2)
{
  unsigned int v3; // w0

  v3 = (unsigned int)-[SFUZipArchiveDataRepresentation isReadable](self->mArchiveDataRepresentation, "isReadable");
  if ( v3 )
    LOBYTE(v3) = -[SFUZipEntry dataOffset](self, "dataOffset") != 0;
  return v3;
}