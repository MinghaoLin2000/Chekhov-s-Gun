-[NSURL tsu_isInTemporaryDirectory]
bool __cdecl -[NSURL tsu_isInTemporaryDirectory](NSURL *self, SEL a2)
{
  NSFileManager *v3; // x20
  NSString *v4; // x22
  id v5; // x21
  unsigned __int8 v6; // w0
  bool v7; // w19
  __int64 v9; // [xsp+8h] [xbp-28h] BYREF

  v9 = 2LL;
  v3 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v4 = objc_retainAutoreleasedReturnValue(NSTemporaryDirectory());
  v5 = objc_retainAutoreleasedReturnValue(+[NSURL tsu_fileURLWithPath:](&OBJC_CLASS___NSURL, "tsu_fileURLWithPath:", v4));
  v6 = -[NSFileManager getRelationship:ofDirectoryAtURL:toItemAtURL:error:](
         v3,
         "getRelationship:ofDirectoryAtURL:toItemAtURL:error:",
         &v9,
         v5,
         self,
         0LL);
  if ( v9 )
    v7 = 0;
  else
    v7 = v6;
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  return v7;
}