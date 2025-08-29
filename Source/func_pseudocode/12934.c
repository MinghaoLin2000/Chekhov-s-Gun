-[SFUZipEntry isEncrypted]
bool __cdecl -[SFUZipEntry isEncrypted](SFUZipEntry *self, SEL a2)
{
  return self->mCryptoKey != 0LL;
}