-[PAMediaConversionServiceResourceURLCollection copyURL:forRole:toDirectory:error:]
bool __cdecl -[PAMediaConversionServiceResourceURLCollection copyURL:forRole:toDirectory:error:](
        PAMediaConversionServiceResourceURLCollection *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id *a6)
{
  id v8; // x19
  id v9; // x20
  NSFileManager *v10; // x22
  unsigned __int8 v11; // w23
  void *v12; // x23
  void *v13; // x24

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v10 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v11 = 0;
  if ( -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
         v10,
         "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
         v9,
         0LL,
         0LL,
         a6) )
  {
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "lastPathComponent"));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "URLByAppendingPathComponent:", v12));
    objc_release(v12);
    v11 = -[NSFileManager copyItemAtURL:toURL:error:](v10, "copyItemAtURL:toURL:error:", v8, v13, a6);
    objc_release(v13);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  return v11;
}