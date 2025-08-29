-[TSPDatabase initWithPath:error:]
TSPDatabase *__cdecl -[TSPDatabase initWithPath:error:](TSPDatabase *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  void *v7; // x23
  TSPDatabase *v8; // x20
  NSURL *v9; // x0
  NSURL *packageURL; // x8
  objc_super v12; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", CFSTR("index.db")));
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSPDatabase;
  v8 = -[TSUDatabase initWithPath:error:](&v12, "initWithPath:error:", v7, a4);
  objc_release(v7);
  if ( v8 )
  {
    v9 = (NSURL *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSURL), "initFileURLWithPath:", v6);
    packageURL = v8->_packageURL;
    v8->_packageURL = v9;
    objc_release(packageURL);
    v8->_incrementalVacuum = 1;
  }
  else
  {
    sub_100027CD4(a4);
  }
  objc_release(v6);
  return v8;
}