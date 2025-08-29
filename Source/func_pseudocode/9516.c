-[TSPCryptoInfoInternal initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:]
TSPCryptoInfoInternal *__cdecl -[TSPCryptoInfoInternal initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:](
        TSPCryptoInfoInternal *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        unsigned __int64 a6)
{
  id v11; // x19
  id v12; // x20
  TSPCryptoInfoInternal *v13; // x0
  TSPCryptoInfoInternal *v14; // x24
  NSArray *v15; // x0
  NSArray *blockInfos; // x8
  TSPCryptoInfoInternal *v17; // x21
  objc_super v19; // [xsp+0h] [xbp-50h] BYREF

  v11 = objc_retain(a3);
  v12 = objc_retain(a5);
  if ( v11 )
  {
    v19.receiver = self;
    v19.super_class = (Class)&OBJC_CLASS___TSPCryptoInfoInternal;
    v13 = -[TSPCryptoInfoInternal init](&v19, "init");
    v14 = v13;
    if ( v13 )
    {
      objc_storeStrong((id *)&v13->_cryptoKey, a3);
      v14->_preferredBlockSize = a4;
      v15 = (NSArray *)objc_msgSend(v12, "copy");
      blockInfos = v14->_blockInfos;
      v14->_blockInfos = v15;
      objc_release(blockInfos);
      v14->_decodedLength = a6;
    }
    self = objc_retain(v14);
    v17 = self;
  }
  else
  {
    v17 = 0LL;
  }
  objc_release(v12);
  objc_release(v11);
  objc_release(self);
  return v17;
}