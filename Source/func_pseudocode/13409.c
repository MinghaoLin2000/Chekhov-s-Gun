-[TSUTemporaryDirectory initWithSignature:subdirectory:error:]
TSUTemporaryDirectory *__cdecl -[TSUTemporaryDirectory initWithSignature:subdirectory:error:](
        TSUTemporaryDirectory *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v8; // x19
  id v9; // x20
  TSUTemporaryDirectory *v10; // x0
  TSUTemporaryDirectory *v11; // x22
  objc_super v13; // [xsp+0h] [xbp-30h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___TSUTemporaryDirectory;
  v10 = -[TSUTemporaryDirectory init](&v13, "init");
  v11 = v10;
  if ( v10
    && !-[TSUTemporaryDirectory _createDirectoryWithSignature:subdirectory:error:](
          v10,
          "_createDirectoryWithSignature:subdirectory:error:",
          v8,
          v9,
          a5) )
  {
    objc_release(v11);
    v11 = 0LL;
  }
  objc_release(v9);
  objc_release(v8);
  return v11;
}