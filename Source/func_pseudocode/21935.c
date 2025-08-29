-[PAXPCDispatch _uniqueTemporaryFolderWithError:]
id __cdecl -[PAXPCDispatch _uniqueTemporaryFolderWithError:](PAXPCDispatch *self, SEL a2, id *a3)
{
  NSString *v4; // x21
  NSUUID *v5; // x22
  NSString *v6; // x23
  NSString *v7; // x20
  NSURL *v8; // x21
  NSFileManager *v9; // x22
  NSFileManager *v10; // x22
  char v12; // [xsp+Fh] [xbp-31h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v5 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v5, "UUIDString"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v4, "stringByAppendingPathComponent:", v6));
  objc_release(v4);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:isDirectory:](&OBJC_CLASS___NSURL, "fileURLWithPath:isDirectory:", v7, 1LL));
  v12 = 0;
  v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  LOBYTE(v6) = -[NSFileManager fileExistsAtPath:isDirectory:](v9, "fileExistsAtPath:isDirectory:", v7, &v12);
  objc_release(v9);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
      v10,
      "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
      v8,
      1LL,
      0LL,
      a3);
    objc_release(v10);
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}