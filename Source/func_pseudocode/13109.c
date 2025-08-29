-[SFUFileDataRepresentation dataLength]
signed __int64 __cdecl -[SFUFileDataRepresentation dataLength](SFUFileDataRepresentation *self, SEL a2)
{
  if ( self->mCryptoKey )
    return self->mPlaintextDataLength;
  else
    return -[SFUFileDataRepresentation encodedLength](self, "encodedLength");
}