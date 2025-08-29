-[SFUZipEntry isBackedByFile]
bool __cdecl -[SFUZipEntry isBackedByFile](SFUZipEntry *self, SEL a2)
{
  SFUZipArchiveDataRepresentation *mArchiveDataRepresentation; // x19
  __int64 v3; // x0

  mArchiveDataRepresentation = self->mArchiveDataRepresentation;
  v3 = objc_opt_class(&OBJC_CLASS___SFUZipArchiveFileDataRepresentation);
  return objc_opt_isKindOfClass(mArchiveDataRepresentation, v3) & 1;
}