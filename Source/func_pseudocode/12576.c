-[SFUCryptoOutputStream dealloc]
void __cdecl -[SFUCryptoOutputStream dealloc](SFUCryptoOutputStream *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  if ( !self->mIsClosed )
    -[SFUCryptoOutputStream closeLocalStream](self, "closeLocalStream");
  objc_release(self->mBaseStream);
  objc_release(self->mCryptor);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___SFUCryptoOutputStream;
  -[SFUCryptoOutputStream dealloc](&v3, "dealloc");
}