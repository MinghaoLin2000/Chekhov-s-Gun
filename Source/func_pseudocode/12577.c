-[SFUCryptoOutputStream writeBuffer:size:]
void __cdecl -[SFUCryptoOutputStream writeBuffer:size:](
        SFUCryptoOutputStream *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  unsigned int *p_mCrc32; // x6
  void *v8; // x21
  id v9; // [xsp+18h] [xbp-28h] BYREF

  if ( self->mIsClosed )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInternalInconsistencyException,
      CFSTR("Tried to write data to a closed SFUCryptoOutputStream."));
  v9 = 0LL;
  if ( self->mComputeCrc32 )
    p_mCrc32 = &self->mCrc32;
  else
    p_mCrc32 = 0LL;
  if ( !-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:](
          self->mCryptor,
          "cryptDataFromBuffer:length:toStream:finished:crc32:error:",
          a3,
          a4,
          self->mBaseStream,
          0LL,
          p_mCrc32,
          &v9) )
  {
    v8 = objc_msgSend(v9, "localizedDescription");
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSGenericException,
      CFSTR("SFUCryptor failed. %@: %@"),
      v8,
      objc_msgSend(v9, "localizedFailureReason"));
  }
}