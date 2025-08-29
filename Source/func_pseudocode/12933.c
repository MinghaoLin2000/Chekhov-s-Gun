-[SFUZipEntry isCompressed]
bool __cdecl -[SFUZipEntry isCompressed](SFUZipEntry *self, SEL a2)
{
  return self->mCompressionMethod != 0;
}