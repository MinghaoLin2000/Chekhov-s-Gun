-[TSPDatabase initReadonlyWithPath:error:]
id __cdecl -[TSPDatabase initReadonlyWithPath:error:](TSPDatabase *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  void *v7; // x23
  _QWORD *v8; // x20
  void *v9; // x0
  void *v10; // x8
  objc_super v12; // [xsp+0h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByAppendingPathComponent:", CFSTR("index.db")));
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSPDatabase;
  v8 = -[TSUDatabase initReadonlyWithPath:error:](&v12, "initReadonlyWithPath:error:", v7, a4);
  objc_release(v7);
  if ( v8 )
  {
    v9 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSURL), "initFileURLWithPath:", v6);
    v10 = (void *)v8[6];
    v8[6] = v9;
    objc_release(v10);
    *((_BYTE *)v8 + 56) = 1;
  }
  else
  {
    sub_100027CD4(a4);
  }
  objc_release(v6);
  return v8;
}