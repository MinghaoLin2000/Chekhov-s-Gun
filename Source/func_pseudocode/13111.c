-[SFUFileDataRepresentation isEncrypted]
bool __cdecl -[SFUFileDataRepresentation isEncrypted](SFUFileDataRepresentation *self, SEL a2)
{
  return self->mCryptoKey != 0LL;
}