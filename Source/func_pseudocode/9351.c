-[TSPDirectoryPackageWriter writeData:toRelativePath:allowEncryption:error:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[TSPDirectoryPackageWriter writeData:toRelativePath:allowEncryption:error:](
        TSPDirectoryPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id *a6)
{
  _BOOL8 v7; // x22
  id v10; // x19
  id v11; // x20
  SFUCryptoKey *v12; // x24
  unsigned __int8 v13; // w0
  bool v14; // w21
  objc_super v16; // [xsp+0h] [xbp-40h] BYREF

  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  if ( v7
    && (v12 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter encryptionKey](self, "encryptionKey")),
        objc_release(v12),
        v12) )
  {
    v16.receiver = self;
    v16.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackageWriter;
    v13 = -[TSPPackageWriter writeData:toRelativePath:allowEncryption:error:](
            &v16,
            "writeData:toRelativePath:allowEncryption:error:",
            v10,
            v11,
            1LL,
            a6);
  }
  else
  {
    v13 = -[TSPDirectoryPackageDataWriter writeData:toRelativePath:allowEncryption:error:](
            self->_dataWriter,
            "writeData:toRelativePath:allowEncryption:error:",
            v10,
            v11,
            v7,
            a6);
  }
  v14 = v13;
  objc_release(v11);
  objc_release(v10);
  return v14;
}