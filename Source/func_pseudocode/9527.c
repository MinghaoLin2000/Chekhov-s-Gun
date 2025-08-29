-[TSPMutableCryptoInfoInternal initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:]
TSPMutableCryptoInfoInternal *__cdecl -[TSPMutableCryptoInfoInternal initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:](
        TSPMutableCryptoInfoInternal *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        id a5,
        unsigned __int64 a6)
{
  id v10; // x19
  id v11; // x20
  TSPMutableCryptoInfoInternal *v12; // x21
  void *v13; // x22
  objc_super v15; // [xsp+0h] [xbp-40h] BYREF

  v10 = objc_retain(a3);
  v11 = objc_retain(a5);
  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___TSPMutableCryptoInfoInternal;
  v12 = -[TSPCryptoInfoInternal initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:](
          &v15,
          "initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:",
          v10,
          a4,
          0LL,
          a6);
  if ( v12 )
  {
    v13 = objc_msgSend(v11, "mutableCopy");
    -[TSPCryptoInfoInternal setBlockInfos:](v12, "setBlockInfos:", v13);
    objc_release(v13);
  }
  objc_release(v11);
  objc_release(v10);
  return v12;
}