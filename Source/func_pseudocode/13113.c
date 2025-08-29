-[SFUFileDataRepresentation inputStream]
id __cdecl -[SFUFileDataRepresentation inputStream](SFUFileDataRepresentation *self, SEL a2)
{
  int mSharedFd; // w0
  SFUFileInputStream *v4; // x0
  SFUFileInputStream *v5; // x20
  bool v6; // zf
  SFUFileInputStream *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  mSharedFd = self->mSharedFd;
  if ( mSharedFd == -1 || pread(mSharedFd, 0LL, 0LL, 0LL) == -1 )
    v4 = -[SFUFileInputStream initWithPath:offset:length:](
           objc_alloc(&OBJC_CLASS___SFUFileInputStream),
           "initWithPath:offset:length:",
           -[SFUFileDataRepresentation path](self, "path"),
           0LL,
           -[SFUFileDataRepresentation encodedLength](self, "encodedLength"));
  else
    v4 = -[SFUFileInputStream initWithFileDescriptor:offset:length:](
           objc_alloc(&OBJC_CLASS___SFUFileInputStream),
           "initWithFileDescriptor:offset:length:",
           SFUDup((unsigned int)self->mSharedFd),
           0LL,
           -[SFUFileDataRepresentation encodedLength](self, "encodedLength"));
  v5 = v4;
  if ( self->mCryptoKey )
    v6 = v4 == 0LL;
  else
    v6 = 1;
  if ( !v6 )
  {
    v7 = -[SFUCryptoInputStream initForDecryptionWithInputStream:key:](
           objc_alloc(&OBJC_CLASS___SFUCryptoInputStream),
           "initForDecryptionWithInputStream:key:",
           v4,
           self->mCryptoKey);
    objc_release(v5);
    v5 = v7;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v5);
}