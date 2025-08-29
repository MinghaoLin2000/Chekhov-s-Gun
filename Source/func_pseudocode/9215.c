-[TSPCryptoReadChannel dealloc]
void __cdecl -[TSPCryptoReadChannel dealloc](TSPCryptoReadChannel *self, SEL a2)
{
  _CCCryptor *cryptor; // x0
  char *iv; // x0
  objc_super v5; // [xsp+10h] [xbp-20h] BYREF

  -[TSPCryptoReadChannel close](self, "close");
  cryptor = self->_cryptor;
  if ( cryptor )
  {
    CCCryptorRelease(cryptor);
    self->_cryptor = 0LL;
  }
  iv = self->_iv;
  if ( iv )
  {
    free(iv);
    self->_iv = 0LL;
  }
  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___TSPCryptoReadChannel;
  -[TSPCryptoReadChannel dealloc](&v5, "dealloc");
}