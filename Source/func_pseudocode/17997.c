-[PlugInLibraryService createSessionRef:withReply:]
void __cdecl -[PlugInLibraryService createSessionRef:withReply:](PlugInLibraryService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v6)(id, NSError *, void *); // x19
  __int64 PluginByScheme; // x0
  int v8; // w0
  NSErrorDomain v9; // x2
  __int64 v10; // x3
  NSUUID *v11; // x22
  NSString *v12; // x21
  NSValue *v13; // x22
  NSError *v14; // x20
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  v15 = 0LL;
  v6 = (void (__fastcall **)(id, NSError *, void *))objc_retain(a4);
  PluginByScheme = FindPluginByScheme(a3);
  if ( !PluginByScheme )
  {
    v9 = NSPOSIXErrorDomain;
    v10 = 2LL;
    goto LABEL_8;
  }
  v8 = netfs_CreateSessionRefForEntry(PluginByScheme, &v15);
  if ( v8 )
  {
    v9 = NSPOSIXErrorDomain;
    v10 = v8;
LABEL_8:
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              v9,
              v10,
              0LL));
    v12 = 0LL;
    v13 = 0LL;
    goto LABEL_9;
  }
  if ( !v15 )
  {
    v9 = NSPOSIXErrorDomain;
    v10 = 22LL;
    goto LABEL_8;
  }
  v11 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  v12 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v11, "UUIDString"));
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(+[NSValue valueWithPointer:](&OBJC_CLASS___NSValue, "valueWithPointer:", v15));
  -[NSMutableDictionary setObject:forKeyedSubscript:](self->_sessionRefs, "setObject:forKeyedSubscript:", v13, v12);
  v14 = 0LL;
LABEL_9:
  v6[2](v6, v14, v12);
  objc_release(v6);
  objc_release(v13);
  objc_release(v12);
  objc_release(v14);
}