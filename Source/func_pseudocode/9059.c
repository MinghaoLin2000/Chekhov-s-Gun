-[TSPPackageWriter newComponentWriteChannelWithPackageLocator:compressionAlgorithm:storeOutsideObjectArchive:]
// local variable allocation has failed, the output may be wrong!
id __cdecl -[TSPPackageWriter newComponentWriteChannelWithPackageLocator:compressionAlgorithm:storeOutsideObjectArchive:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        bool a5)
{
  _BOOL8 v5; // x22
  id v8; // x19
  TSPCryptoComponentWriteChannel *v9; // x22
  TSPCryptoComponentWriteChannel *v10; // x23
  TSPComponentWriteChannel *v11; // x21
  TSPComponentWriteChannel *componentWriteChannel; // x22
  TSPComponentWriteChannel *v13; // x21
  TSPComponentWriteChannel *v14; // x20

  v5 = a5;
  v8 = objc_retain(a3);
  -[TSPPackageWriter closeCurrentChannel](self, "closeCurrentChannel");
  v9 = -[TSPPackageWriter newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:](
         self,
         "newRawComponentWriteChannelWithPackageLocator:storeOutsideObjectArchive:",
         v8,
         v5);
  if ( v9
    && (!self->_encryptionKey
     || (v10 = -[TSPCryptoComponentWriteChannel initWithWriteChannel:encryptionInfo:](
                 objc_alloc(&OBJC_CLASS___TSPCryptoComponentWriteChannel),
                 "initWithWriteChannel:encryptionInfo:",
                 v9,
                 self->_encryptionKey),
         objc_release(v9),
         (v9 = v10) != 0LL)) )
  {
    v11 = -[TSPPackageWriter newCompressionComponentWriteChannelWithComponentWriteChannel:compressionAlgorithm:](
            self,
            "newCompressionComponentWriteChannelWithComponentWriteChannel:compressionAlgorithm:",
            v9,
            a4);
    objc_release(v9);
  }
  else
  {
    v11 = 0LL;
  }
  componentWriteChannel = self->_componentWriteChannel;
  self->_componentWriteChannel = v11;
  v13 = objc_retain(v11);
  objc_release(componentWriteChannel);
  v14 = objc_retain(self->_componentWriteChannel);
  objc_release(v13);
  objc_release(v8);
  return v14;
}