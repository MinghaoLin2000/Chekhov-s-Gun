-[TSPTemporaryObjectContextDelegateWithPackageDataForWrite initWithPackageDataForWrite:additionalDocumentPropertiesForWrite:]
TSPTemporaryObjectContextDelegateWithPackageDataForWrite *__cdecl -[TSPTemporaryObjectContextDelegateWithPackageDataForWrite initWithPackageDataForWrite:additionalDocumentPropertiesForWrite:](
        TSPTemporaryObjectContextDelegateWithPackageDataForWrite *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  TSPTemporaryObjectContextDelegateWithPackageDataForWrite *v8; // x21
  NSDictionary *v9; // x0
  NSDictionary *packageDataForWrite; // x8
  NSDictionary *v11; // x0
  NSDictionary *additionalDocumentPropertiesForWrite; // x8
  objc_super v14; // [xsp+0h] [xbp-30h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___TSPTemporaryObjectContextDelegateWithPackageDataForWrite;
  v8 = -[TSPTemporaryObjectContextDelegate init](&v14, "init");
  if ( v8 )
  {
    v9 = (NSDictionary *)objc_msgSend(v6, "copy");
    packageDataForWrite = v8->_packageDataForWrite;
    v8->_packageDataForWrite = v9;
    objc_release(packageDataForWrite);
    v11 = (NSDictionary *)objc_msgSend(v7, "copy");
    additionalDocumentPropertiesForWrite = v8->_additionalDocumentPropertiesForWrite;
    v8->_additionalDocumentPropertiesForWrite = v11;
    objc_release(additionalDocumentPropertiesForWrite);
  }
  objc_release(v7);
  objc_release(v6);
  return v8;
}