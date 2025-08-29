-[SFUFileDataRepresentation isCryptoKeyIdenticalToKey:]
bool __cdecl -[SFUFileDataRepresentation isCryptoKeyIdenticalToKey:](SFUFileDataRepresentation *self, SEL a2, id a3)
{
  SFUCryptoKey *mCryptoKey; // x8
  bool result; // w0

  mCryptoKey = self->mCryptoKey;
  result = ((unsigned __int64)a3 | (unsigned __int64)mCryptoKey) == 0;
  if ( a3 )
  {
    if ( mCryptoKey )
      return (unsigned __int8)objc_msgSend(a3, "isEqual:", mCryptoKey);
  }
  return result;
}