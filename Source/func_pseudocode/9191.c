-[TSPDataCopyProviderConcrete initWithDocumentURL:error:]
TSPDataCopyProviderConcrete *__cdecl -[TSPDataCopyProviderConcrete initWithDocumentURL:error:](
        TSPDataCopyProviderConcrete *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x19
  TSPDataCopyProviderConcrete *v7; // x20
  NSFileManager *v8; // x0
  NSFileManager *v9; // x25
  NSURL *v10; // x23
  id v11; // x22
  NSURL *directory; // x21
  NSURL *v13; // x23
  NSURL *v14; // x22
  id v15; // x24
  NSUUID *v16; // x25
  NSString *v17; // x26
  NSFileManager *v18; // x25
  unsigned __int8 v19; // w26
  id v21; // [xsp+8h] [xbp-78h] BYREF
  id v22; // [xsp+10h] [xbp-70h] BYREF
  id v23; // [xsp+18h] [xbp-68h] BYREF
  objc_super v24; // [xsp+20h] [xbp-60h] BYREF

  v6 = objc_retain(a3);
  v24.receiver = self;
  v24.super_class = (Class)&OBJC_CLASS___TSPDataCopyProviderConcrete;
  v7 = -[TSPDataCopyProviderConcrete init](&v24, "init");
  if ( !v7 )
  {
    v11 = 0LL;
    goto LABEL_14;
  }
  v8 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v9 = v8;
  if ( v6 )
  {
    v23 = 0LL;
    v10 = objc_retainAutoreleasedReturnValue(
            -[NSFileManager URLForDirectory:inDomain:appropriateForURL:create:error:](
              v8,
              "URLForDirectory:inDomain:appropriateForURL:create:error:",
              99LL,
              1LL,
              v6,
              1LL,
              &v23));
    v11 = objc_retain(v23);
    objc_release(v9);
    if ( v10 )
    {
LABEL_4:
      directory = v7->_directory;
      v7->_directory = v10;
      v13 = objc_retain(v10);
      objc_release(directory);
      objc_release(v13);
      goto LABEL_14;
    }
  }
  else
  {
    v22 = 0LL;
    v14 = objc_retainAutoreleasedReturnValue(
            -[NSFileManager URLForDirectory:inDomain:appropriateForURL:create:error:](
              v8,
              "URLForDirectory:inDomain:appropriateForURL:create:error:",
              13LL,
              1LL,
              0LL,
              1LL,
              &v22));
    v15 = objc_retain(v22);
    objc_release(v9);
    if ( v14
      && (v16 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID")),
          v17 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v16, "UUIDString")),
          v10 = objc_retainAutoreleasedReturnValue(-[NSURL URLByAppendingPathComponent:](v14, "URLByAppendingPathComponent:", v17)),
          objc_release(v14),
          objc_release(v17),
          objc_release(v16),
          v10) )
    {
      v18 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v21 = v15;
      v19 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
              v18,
              "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
              v10,
              1LL,
              0LL,
              &v21);
      v11 = objc_retain(v21);
      objc_release(v15);
      objc_release(v18);
      if ( (v19 & 1) != 0 )
        goto LABEL_4;
      objc_release(v10);
    }
    else
    {
      v11 = v15;
    }
  }
  objc_release(v7);
  if ( a4 )
  {
    v11 = objc_retainAutorelease(v11);
    v7 = 0LL;
    *a4 = v11;
  }
  else
  {
    v7 = 0LL;
  }
LABEL_14:
  objc_release(v11);
  objc_release(v6);
  return v7;
}