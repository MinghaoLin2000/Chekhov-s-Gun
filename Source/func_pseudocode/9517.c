-[TSPCryptoInfoInternal initWithCryptoInfo:]
TSPCryptoInfoInternal *__cdecl -[TSPCryptoInfoInternal initWithCryptoInfo:](TSPCryptoInfoInternal *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  void *v6; // x23
  void *v7; // x22
  TSPCryptoInfoInternal *v8; // x23

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "cryptoKey"));
  v6 = objc_msgSend(v4, "preferredBlockSize");
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "blockInfos"));
  v8 = -[TSPCryptoInfoInternal initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:](
         self,
         "initWithCryptoKey:preferredBlockSize:blockInfos:decodedLength:",
         v5,
         v6,
         v7,
         objc_msgSend(v4, "decodedLength"));
  objc_release(v7);
  objc_release(v5);
  objc_release(v4);
  return v8;
}