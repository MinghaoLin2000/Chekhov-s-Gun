-[TSPDataStorageWriteResult initWithFilename:encryptionInfo:packageStorageType:encodedLength:isMissingData:changeCount:]
TSPDataStorageWriteResult *__cdecl -[TSPDataStorageWriteResult initWithFilename:encryptionInfo:packageStorageType:encodedLength:isMissingData:changeCount:](
        TSPDataStorageWriteResult *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 a5,
        unsigned __int64 a6,
        bool a7,
        unsigned __int64 a8)
{
  id v15; // x21
  id v16; // x25
  TSPDataStorageWriteResult *v17; // x0
  TSPDataStorageWriteResult *v18; // x27
  objc_super v20; // [xsp+0h] [xbp-60h] BYREF

  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___TSPDataStorageWriteResult;
  v17 = -[TSPDataStorageWriteResult init](&v20, "init");
  v18 = v17;
  if ( v17 )
  {
    objc_storeStrong((id *)&v17->_filename, a3);
    objc_storeStrong((id *)&v18->_encryptionInfo, a4);
    v18->_packageStorageType = a5;
    v18->_encodedLength = a6;
    v18->_isMissingData = a7;
    v18->_changeCount = a8;
  }
  objc_release(v16);
  objc_release(v15);
  return v18;
}