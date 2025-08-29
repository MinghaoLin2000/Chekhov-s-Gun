-[SFUCryptoKey dealloc]
void __cdecl -[SFUCryptoKey dealloc](SFUCryptoKey *self, SEL a2)
{
  char *mKey; // x0
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  mKey = self->mKey;
  if ( mKey )
  {
    free(mKey);
    self->mKey = 0LL;
  }
  objc_release(self->_passphrase);
  objc_release(self->mSaltData);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___SFUCryptoKey;
  -[SFUCryptoKey dealloc](&v4, "dealloc");
}