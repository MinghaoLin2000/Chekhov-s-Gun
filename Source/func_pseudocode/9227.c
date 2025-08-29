-[TSPCryptoComponentWriteChannel dealloc]
void __cdecl -[TSPCryptoComponentWriteChannel dealloc](TSPCryptoComponentWriteChannel *self, SEL a2)
{
  _CCCryptor *cryptor; // x0
  objc_super v4; // [xsp+10h] [xbp-20h] BYREF

  -[TSPCryptoComponentWriteChannel close](self, "close");
  cryptor = self->_cryptor;
  if ( cryptor )
  {
    CCCryptorRelease(cryptor);
    self->_cryptor = 0LL;
  }
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___TSPCryptoComponentWriteChannel;
  -[TSPCryptoComponentWriteChannel dealloc](&v4, "dealloc");
}