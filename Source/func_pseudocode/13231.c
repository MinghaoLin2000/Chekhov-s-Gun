-[SFUZipArchive isEncrypted]
bool __cdecl -[SFUZipArchive isEncrypted](SFUZipArchive *self, SEL a2)
{
  return self->mPassphraseVerifier != 0LL;
}