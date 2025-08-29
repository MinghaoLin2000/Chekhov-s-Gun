-[PlugInLibraryService getServerInfo:handle:options:withReply:]
void __cdecl -[PlugInLibraryService getServerInfo:handle:options:withReply:](
        PlugInLibraryService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  const __CFURL *v10; // x19
  id v11; // x20
  void (__fastcall **v12)(id, NSError *, _QWORD); // x21
  void *v13; // x23
  void *v14; // x22
  int ServerInfo; // w0
  NSErrorDomain v16; // x2
  __int64 v17; // x3
  NSError *v18; // x22

  v10 = (const __CFURL *)objc_retain(a3);
  v11 = objc_retain(a5);
  v12 = (void (__fastcall **)(id, NSError *, _QWORD))objc_retain(a6);
  v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_sessionRefs, "objectForKeyedSubscript:", a4));
  v14 = objc_msgSend(v13, "pointerValue");
  objc_release(v13);
  if ( v14 )
  {
    ServerInfo = netfs_GetServerInfo(v10);
    if ( !ServerInfo )
    {
      v18 = 0LL;
      goto LABEL_7;
    }
    v16 = NSPOSIXErrorDomain;
    v17 = ServerInfo;
  }
  else
  {
    v16 = NSPOSIXErrorDomain;
    v17 = 2LL;
  }
  v18 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            v16,
            v17,
            0LL));
LABEL_7:
  v12[2](v12, v18, 0LL);
  objc_release(0LL);
  objc_release(v18);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
}