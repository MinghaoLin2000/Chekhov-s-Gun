-[TSPPackageWriterCopyDataResult initWithFilename:encryptionInfo:encodedLength:]
TSPPackageWriterCopyDataResult *__cdecl -[TSPPackageWriterCopyDataResult initWithFilename:encryptionInfo:encodedLength:](
        TSPPackageWriterCopyDataResult *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5)
{
  id v9; // x19
  id v10; // x22
  TSPPackageWriterCopyDataResult *v11; // x0
  TSPPackageWriterCopyDataResult *v12; // x24
  objc_super v14; // [xsp+0h] [xbp-40h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___TSPPackageWriterCopyDataResult;
  v11 = -[TSPPackageWriterCopyDataResult init](&v14, "init");
  v12 = v11;
  if ( v11 )
  {
    objc_storeStrong((id *)&v11->_filename, a3);
    objc_storeStrong((id *)&v12->_encryptionInfo, a4);
    v12->_encodedLength = a5;
  }
  objc_release(v10);
  objc_release(v9);
  return v12;
}