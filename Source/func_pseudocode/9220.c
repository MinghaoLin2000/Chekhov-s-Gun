-[TSPCryptoReadChannel _resetCryptor]
void __cdecl -[TSPCryptoReadChannel _resetCryptor](TSPCryptoReadChannel *self, SEL a2)
{
  OS_dispatch_data *holdData; // x0
  _CCCryptor *cryptor; // x0

  holdData = self->_holdData;
  self->_holdData = 0LL;
  objc_release(holdData);
  self->_ivRead = 0LL;
  self->_initialBytesIgnored = 0LL;
  cryptor = self->_cryptor;
  if ( cryptor )
  {
    CCCryptorRelease(cryptor);
    self->_cryptor = 0LL;
  }
}