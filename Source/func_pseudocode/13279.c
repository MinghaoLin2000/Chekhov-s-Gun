-[TSUContainedZipArchive initWithEntry:zipArchive:options:]
TSUContainedZipArchive *__cdecl -[TSUContainedZipArchive initWithEntry:zipArchive:options:](
        TSUContainedZipArchive *self,
        SEL a2,
        id a3,
        id a4,
        unsigned __int64 a5)
{
  id v9; // x19
  id v10; // x0
  void *v11; // x20
  TSUContainedZipArchive *v12; // x25
  TSUContainedZipArchive *v13; // x0
  id *p_isa; // x23
  objc_super v16; // [xsp+0h] [xbp-50h] BYREF

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  v11 = v10;
  v12 = 0LL;
  if ( v9 && v10 )
  {
    v16.receiver = self;
    v16.super_class = (Class)&OBJC_CLASS___TSUContainedZipArchive;
    v13 = -[TSUZipArchive initWithOptions:](&v16, "initWithOptions:", a5);
    p_isa = (id *)&v13->super.super.isa;
    if ( v13 )
    {
      objc_storeStrong((id *)&v13->_zipArchive, a4);
      objc_storeStrong(p_isa + 6, a3);
    }
    self = objc_retain(p_isa);
    v12 = self;
  }
  objc_release(v11);
  objc_release(v9);
  objc_release(self);
  return v12;
}