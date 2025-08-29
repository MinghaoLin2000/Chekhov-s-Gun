-[SFUCryptoOutputStream closeLocalStream]
id __cdecl -[SFUCryptoOutputStream closeLocalStream](SFUCryptoOutputStream *self, SEL a2)
{
  SFUCryptor *mCryptor; // x0
  SFUOutputStream *mBaseStream; // x4
  unsigned int *p_mCrc32; // x6
  void *v6; // x22
  id v8; // [xsp+18h] [xbp-28h] BYREF

  if ( !self->mIsClosed )
  {
    self->mIsClosed = 1;
    v8 = 0LL;
    mBaseStream = self->mBaseStream;
    mCryptor = self->mCryptor;
    if ( self->mComputeCrc32 )
      p_mCrc32 = &self->mCrc32;
    else
      p_mCrc32 = 0LL;
    if ( !-[SFUCryptor cryptDataFromBuffer:length:toStream:finished:crc32:error:](
            mCryptor,
            "cryptDataFromBuffer:length:toStream:finished:crc32:error:",
            0LL,
            0LL,
            mBaseStream,
            1LL,
            p_mCrc32,
            &v8) )
    {
      v6 = objc_msgSend(v8, "localizedDescription");
      +[NSException raise:format:](
        &OBJC_CLASS___NSException,
        "raise:format:",
        NSGenericException,
        CFSTR("SFUCryptor failed. %@: %@"),
        v6,
        objc_msgSend(v8, "localizedFailureReason"));
    }
  }
  return self->mBaseStream;
}