-[TSPPackage initWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:isLazyLoading:]
TSPPackage *__cdecl -[TSPPackage initWithPackageIdentifier:documentProperties:fileFormatVersion:decryptionKey:fileCoordinatorDelegate:isLazyLoading:](
        TSPPackage *self,
        SEL a2,
        unsigned __int8 a3,
        id a4,
        unsigned __int64 a5,
        id a6,
        id a7,
        bool a8)
{
  _BOOL4 v8; // w21
  id v15; // x19
  id v16; // x20
  id v17; // x22
  TSPPackage *v18; // x23
  dispatch_queue_attr_s *v19; // x28
  dispatch_queue_t v20; // x0
  OS_dispatch_queue *accessQueue; // x8
  NSHashTable *v22; // x0
  NSHashTable *packageDatas; // x8
  char v24; // w9
  objc_super v26; // [xsp+0h] [xbp-60h] BYREF

  v8 = a8;
  v15 = objc_retain(a4);
  v16 = objc_retain(a6);
  v17 = objc_retain(a7);
  v26.receiver = self;
  v26.super_class = (Class)&OBJC_CLASS___TSPPackage;
  v18 = -[TSPPackage init](&v26, "init");
  if ( v18 )
  {
    v19 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v20 = dispatch_queue_create("TSPPackage.Access", v19);
    accessQueue = v18->_accessQueue;
    v18->_accessQueue = (OS_dispatch_queue *)v20;
    objc_release(accessQueue);
    objc_release(v19);
    v18->_packageIdentifier = a3;
    objc_storeStrong((id *)&v18->_documentProperties, a4);
    v18->_fileFormatVersion = a5;
    objc_storeStrong((id *)&v18->_decryptionKey, a6);
    objc_storeWeak((id *)&v18->_fileCoordinatorDelegate, v17);
    v22 = (NSHashTable *)objc_msgSend(
                           objc_alloc((Class)&OBJC_CLASS___NSHashTable),
                           "initWithOptions:capacity:",
                           512LL,
                           0LL);
    packageDatas = v18->_packageDatas;
    v18->_packageDatas = v22;
    objc_release(packageDatas);
    if ( v8 )
      v24 = 2;
    else
      v24 = 0;
    *(_BYTE *)&v18->_flags = v24 | v8 | *(_BYTE *)&v18->_flags & 0xFC;
  }
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  return v18;
}