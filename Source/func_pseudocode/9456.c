-[TSPPackageEntryInfo initWithEncodedLength:lastModificationDate:CRC:]
TSPPackageEntryInfo *__cdecl -[TSPPackageEntryInfo initWithEncodedLength:lastModificationDate:CRC:](
        TSPPackageEntryInfo *self,
        SEL a2,
        unsigned __int64 a3,
        id a4,
        unsigned int a5)
{
  id v8; // x19
  TSPPackageEntryInfo *v9; // x0
  TSPPackageEntryInfo *v10; // x21
  NSDate *v11; // x0
  NSDate *lastModificationDate; // x8
  objc_super v14; // [xsp+0h] [xbp-40h] BYREF

  v8 = objc_retain(a4);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___TSPPackageEntryInfo;
  v9 = -[TSPPackageEntryInfo init](&v14, "init");
  v10 = v9;
  if ( v9 )
  {
    v9->_encodedLength = a3;
    v11 = (NSDate *)objc_msgSend(v8, "copy");
    lastModificationDate = v10->_lastModificationDate;
    v10->_lastModificationDate = v11;
    objc_release(lastModificationDate);
    v10->_CRC = a5;
  }
  objc_release(v8);
  return v10;
}