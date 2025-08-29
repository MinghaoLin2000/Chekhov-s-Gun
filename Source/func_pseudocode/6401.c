+[VideoConversionTask temporaryFileURLWithNameComponent:pathExtension:]
id __cdecl +[VideoConversionTask temporaryFileURLWithNameComponent:pathExtension:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x21
  NSString *v7; // x22
  NSString *v8; // x20
  NSString *v9; // x21
  NSURL *v10; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v8 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v7, "stringByAppendingPathComponent:", v6));
  objc_release(v6);
  objc_release(v7);
  if ( v5 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathExtension:](v8, "stringByAppendingPathExtension:", v5));
    objc_release(v8);
    v8 = v9;
  }
  v10 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v8));
  objc_release(v8);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}