-[TSPPackageConverter initWithURL:package:fileCoordinatorDelegate:preserveExtendedAttributes:error:]
TSPPackageConverter *__cdecl -[TSPPackageConverter initWithURL:package:fileCoordinatorDelegate:preserveExtendedAttributes:error:](
        TSPPackageConverter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6,
        id *a7)
{
  _BOOL4 v8; // w25
  id v12; // x19
  id v13; // x20
  id v14; // x21
  TSPPackageConverter *v15; // x24
  NSURL *v16; // x0
  NSURL *URL; // x8
  TSUExtendedAttributeCollection *v18; // x26
  void *v19; // x25
  TSUExtendedAttributeCollection *v20; // x0
  TSUExtendedAttributeCollection *extendedAttributeCollection; // x8
  TSPPackageConverter *v22; // x25
  objc_super v24; // [xsp+0h] [xbp-60h] BYREF

  v8 = a6;
  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  v14 = objc_retain(a5);
  if ( ((unsigned int)objc_msgSend(v12, "isFileURL") & 1) != 0 )
  {
    v24.receiver = self;
    v24.super_class = (Class)&OBJC_CLASS___TSPPackageConverter;
    v15 = -[TSPPackageConverter init](&v24, "init");
    if ( !v15 )
      goto LABEL_5;
    v16 = (NSURL *)objc_msgSend(v12, "copy");
    URL = v15->_URL;
    v15->_URL = v16;
    objc_release(URL);
    objc_storeStrong((id *)&v15->_package, a4);
    objc_storeStrong((id *)&v15->_fileCoordinatorDelegate, a5);
    if ( !v8 )
      goto LABEL_5;
    v18 = objc_alloc(&OBJC_CLASS___TSUExtendedAttributeCollection);
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
    v20 = -[TSUExtendedAttributeCollection initWithPath:options:error:](
            v18,
            "initWithPath:options:error:",
            v19,
            0LL,
            a7);
    extendedAttributeCollection = v15->_extendedAttributeCollection;
    v15->_extendedAttributeCollection = v20;
    objc_release(extendedAttributeCollection);
    objc_release(v19);
    if ( !v15->_extendedAttributeCollection )
    {
      v22 = 0LL;
      self = v15;
    }
    else
    {
LABEL_5:
      self = objc_retain(v15);
      v22 = self;
    }
  }
  else
  {
    v22 = 0LL;
    if ( a7 )
      *a7 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  NSURLErrorDomain,
                  -1000LL,
                  0LL)));
  }
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(self);
  return v22;
}