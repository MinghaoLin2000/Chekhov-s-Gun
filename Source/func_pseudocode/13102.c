-[SFUFileDataRepresentation initWithInputStream:cryptoKey:dataLength:]
SFUFileDataRepresentation *__cdecl -[SFUFileDataRepresentation initWithInputStream:cryptoKey:dataLength:](
        SFUFileDataRepresentation *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5)
{
  SFUFileDataRepresentation *v8; // x19
  SFUCryptoKey *v9; // x0

  v8 = -[SFUFileDataRepresentation init](self, "init");
  if ( v8 )
  {
    v9 = (SFUCryptoKey *)objc_retain(a4);
    v8->mCryptoKey = v9;
    if ( v9 )
      v8->mPlaintextDataLength = a5;
    v8->mInputStream = (SFUInputStream *)objc_retain(a3);
  }
  return v8;
}