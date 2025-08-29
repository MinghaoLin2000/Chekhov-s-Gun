-[SFUZipEntry calculateEncodedLength]
unsigned __int64 __cdecl -[SFUZipEntry calculateEncodedLength](SFUZipEntry *self, SEL a2)
{
  unsigned __int64 mUncompressedSize; // x0

  if ( !self->mHasEncodedLength )
  {
    objc_sync_enter(self);
    if ( !self->mHasEncodedLength )
    {
      if ( self->mCryptoKey )
        mUncompressedSize = +[SFUCryptoOutputStream encodedLengthForDataLength:key:](
                              &OBJC_CLASS___SFUCryptoOutputStream,
                              "encodedLengthForDataLength:key:",
                              self->mUncompressedSize);
      else
        mUncompressedSize = self->mUncompressedSize;
      self->mEncodedLength = mUncompressedSize;
      __dmb(0xBu);
      self->mHasEncodedLength = 1;
    }
    objc_sync_exit(self);
  }
  return self->mEncodedLength;
}