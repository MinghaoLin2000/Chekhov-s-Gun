-[TSUTemporaryDirectory initForWritingToURL:error:]
id __cdecl -[TSUTemporaryDirectory initForWritingToURL:error:](TSUTemporaryDirectory *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  TSUTemporaryDirectory *v7; // x20
  NSFileManager *v8; // x22
  NSURL *v9; // x21
  NSString *v10; // x0
  NSString *path; // x8
  objc_super v13; // [xsp+0h] [xbp-30h] BYREF

  v6 = objc_retain(a3);
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___TSUTemporaryDirectory;
  v7 = -[TSUTemporaryDirectory init](&v13, "init");
  if ( v7 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v9 = objc_retainAutoreleasedReturnValue(
           -[NSFileManager URLForDirectory:inDomain:appropriateForURL:create:error:](
             v8,
             "URLForDirectory:inDomain:appropriateForURL:create:error:",
             99LL,
             1LL,
             v6,
             1LL,
             a4));
    objc_release(v8);
    v10 = objc_retainAutoreleasedReturnValue(-[NSURL path](v9, "path"));
    path = v7->_path;
    v7->_path = v10;
    objc_release(path);
    if ( !v9 )
    {
      objc_release(v7);
      v7 = 0LL;
    }
    objc_release(v9);
  }
  objc_release(v6);
  return v7;
}