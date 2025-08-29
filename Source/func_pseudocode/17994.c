-[PlugInLibraryService createURL:withReply:]
void __cdecl -[PlugInLibraryService createURL:withReply:](PlugInLibraryService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v5)(id, NSError *, void *); // x19
  int v6; // w0
  NSError *v7; // x20
  void *v8; // x21
  void *v9; // [xsp+8h] [xbp-28h] BYREF

  v5 = (void (__fastcall **)(id, NSError *, void *))objc_retain(a4);
  v9 = 0LL;
  v6 = netfs_CreateURL(a3, &v9);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSError errorWithDomain:code:userInfo:](
             &OBJC_CLASS___NSError,
             "errorWithDomain:code:userInfo:",
             NSPOSIXErrorDomain,
             v6,
             0LL));
    v8 = 0LL;
  }
  else
  {
    v7 = 0LL;
    v8 = v9;
  }
  v5[2](v5, v7, v8);
  objc_release(v8);
  objc_release(v7);
  objc_release(v5);
}