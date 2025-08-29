-[TSPTemporaryFileCoordinatorDelegate initWithURL:]
TSPTemporaryFileCoordinatorDelegate *__cdecl -[TSPTemporaryFileCoordinatorDelegate initWithURL:](
        TSPTemporaryFileCoordinatorDelegate *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  TSPTemporaryFileCoordinatorDelegate *v5; // x20
  NSURL *v6; // x0
  NSURL *URL; // x8
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___TSPTemporaryFileCoordinatorDelegate;
  v5 = -[TSPTemporaryFileCoordinatorDelegate init](&v9, "init");
  if ( v5 )
  {
    v6 = (NSURL *)objc_msgSend(v4, "copy");
    URL = v5->_URL;
    v5->_URL = v6;
    objc_release(URL);
  }
  objc_release(v4);
  return v5;
}