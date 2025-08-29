-[SFUCryptoInputStream readToBuffer:size:]
unsigned __int64 __cdecl -[SFUCryptoInputStream readToBuffer:size:](
        SFUCryptoInputStream *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  void *v5; // x22
  unsigned __int64 result; // x0
  unsigned __int64 v7; // [xsp+10h] [xbp-30h] BYREF
  id v8; // [xsp+18h] [xbp-28h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( !-[SFUCryptor cryptDataFromStream:toBuffer:length:bytesRead:error:](
          self->mCryptor,
          "cryptDataFromStream:toBuffer:length:bytesRead:error:",
          self->mBaseStream,
          a3,
          a4,
          &v7,
          &v8) )
  {
    v5 = objc_msgSend(v8, "localizedDescription");
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSGenericException,
      CFSTR("SFUCryptor failed. %@: %@"),
      v5,
      objc_msgSend(v8, "localizedFailureReason"));
  }
  result = v7;
  self->mOffset += v7;
  return result;
}