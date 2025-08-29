+[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryFilesDirectoryURLForConversionTaskIdentifier:error:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryFilesDirectoryURLForConversionTaskIdentifier:error:](
        id a1,
        SEL a2,
        id a3,
        id *a4)
{
  id v5; // x21
  NSString *v6; // x22
  void *v7; // x23
  NSString *v8; // x19
  NSString *v9; // x22
  NSString *v10; // x21
  NSURL *v11; // x22
  NSFileManager *v12; // x23
  unsigned int v13; // w0
  NSURL *v14; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v7 = objc_retainAutoreleasedReturnValue(
         +[PFMediaUtilities protectedTemporaryItemsSubdirectoryName](
           &OBJC_CLASS___PFMediaUtilities,
           "protectedTemporaryItemsSubdirectoryName"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v6, "stringByAppendingPathComponent:", v7));
  objc_release(v7);
  objc_release(v6);
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("com.apple.photos.mediaconversion-%d-%@"),
           getpid(),
           v5));
  objc_release(v5);
  v10 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v8, "stringByAppendingPathComponent:", v9));
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:isDirectory:](&OBJC_CLASS___NSURL, "fileURLWithPath:isDirectory:", v10, 1LL));
  v12 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v13 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
          v12,
          "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
          v11,
          1LL,
          0LL,
          a4);
  v14 = 0LL;
  if ( v13 )
    v14 = objc_retain(v11);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v14);
}