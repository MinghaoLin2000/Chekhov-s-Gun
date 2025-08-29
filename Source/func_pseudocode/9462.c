-[TSPCryptoTranscodeReadChannel initWithReadChannel:decryptionInfo:encryptionInfo:]
TSPCryptoTranscodeReadChannel *__cdecl -[TSPCryptoTranscodeReadChannel initWithReadChannel:decryptionInfo:encryptionInfo:](
        TSPCryptoTranscodeReadChannel *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  TSPCryptoTranscodeReadChannel *v11; // x22
  TSPCryptoReadChannel *v12; // x26
  TSUStreamReadChannel *v13; // x24
  void *v14; // x25
  TSPCryptoReadChannel *v15; // x0
  TSUStreamReadChannel *readChannel; // x8
  TSUStreamReadChannel *v17; // x0
  objc_super v19; // [xsp+0h] [xbp-50h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v19.receiver = self;
  v19.super_class = (Class)&OBJC_CLASS___TSPCryptoTranscodeReadChannel;
  v11 = -[TSPCryptoTranscodeReadChannel init](&v19, "init");
  if ( v11 )
  {
    if ( v9 )
    {
      v12 = objc_alloc(&OBJC_CLASS___TSPCryptoReadChannel);
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "cryptoKey"));
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "blockInfos"));
      v15 = -[TSPCryptoReadChannel initWithReadChannel:decryptionKey:blockInfos:](
              v12,
              "initWithReadChannel:decryptionKey:blockInfos:",
              v8,
              v13,
              v14);
      readChannel = v11->_readChannel;
      v11->_readChannel = (TSUStreamReadChannel *)v15;
      objc_release(readChannel);
      objc_release(v14);
    }
    else
    {
      v17 = (TSUStreamReadChannel *)objc_retain(v8);
      v13 = v11->_readChannel;
      v11->_readChannel = v17;
    }
    objc_release(v13);
    objc_storeStrong((id *)&v11->_encryptionInfo, a5);
    if ( !v11->_readChannel )
    {
      objc_release(v11);
      v11 = 0LL;
    }
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  return v11;
}