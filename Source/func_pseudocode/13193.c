-[SFUCryptor dealloc]
void __cdecl -[SFUCryptor dealloc](SFUCryptor *self, SEL a2)
{
  _CCCryptor *mCryptor; // x0
  char *mDecryptionInputBuffer; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  mCryptor = self->mCryptor;
  if ( mCryptor )
  {
    CCCryptorRelease(mCryptor);
    self->mCryptor = 0LL;
  }
  free(self->mOutputBuffer);
  mDecryptionInputBuffer = self->mDecryptionInputBuffer;
  if ( mDecryptionInputBuffer )
    free(mDecryptionInputBuffer);
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___SFUCryptor;
  -[SFUCryptor dealloc](&v5, "dealloc");
}