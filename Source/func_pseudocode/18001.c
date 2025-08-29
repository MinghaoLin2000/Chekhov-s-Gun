-[PlugInLibraryService enumarateShares:options:withReply:]
void __cdecl -[PlugInLibraryService enumarateShares:options:withReply:](
        PlugInLibraryService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  void (__fastcall **v9)(id, NSError *, void *); // x20
  void *v10; // x22
  void *v11; // x21
  int v12; // w0
  NSErrorDomain v13; // x2
  __int64 v14; // x3
  NSError *v15; // x21
  void *v16; // x22
  void *v17; // [xsp+8h] [xbp-28h] BYREF

  v8 = objc_retain(a4);
  v9 = (void (__fastcall **)(id, NSError *, void *))objc_retain(a5);
  v17 = 0LL;
  v10 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_sessionRefs, "objectForKeyedSubscript:", a3));
  v11 = objc_msgSend(v10, "pointerValue");
  objc_release(v10);
  if ( v11 )
  {
    v12 = netfs_EnumerateShares(v11, v8, &v17);
    if ( !v12 )
    {
      v15 = 0LL;
      v16 = v17;
      goto LABEL_7;
    }
    v13 = NSPOSIXErrorDomain;
    v14 = v12;
  }
  else
  {
    v13 = NSPOSIXErrorDomain;
    v14 = 2LL;
  }
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            v13,
            v14,
            0LL));
  v16 = 0LL;
LABEL_7:
  v9[2](v9, v15, v16);
  objc_release(v16);
  objc_release(v15);
  objc_release(v9);
  objc_release(v8);
}