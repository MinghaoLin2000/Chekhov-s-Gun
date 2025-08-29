-[PlugInLibraryService closeSession:withReply:]
void __cdecl -[PlugInLibraryService closeSession:withReply:](PlugInLibraryService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  NSMutableDictionary *sessionRefs; // x22
  void (__fastcall **v8)(id, NSError *); // x20
  void *v9; // x23
  void *v10; // x22
  int v11; // w0
  NSErrorDomain v12; // x2
  __int64 v13; // x3
  NSError *v14; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6 = objc_retain(a3);
  sessionRefs = self->_sessionRefs;
  v8 = (void (__fastcall **)(id, NSError *))objc_retain(a4);
  v9 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](sessionRefs, "objectForKeyedSubscript:", v6));
  v10 = objc_msgSend(v9, "pointerValue");
  objc_release(v9);
  if ( !v10 )
  {
    v12 = NSPOSIXErrorDomain;
    v13 = 2LL;
    goto LABEL_5;
  }
  v11 = netfs_CloseSession(v10);
  if ( v11 )
  {
    v12 = NSPOSIXErrorDomain;
    v13 = v11;
LABEL_5:
    v14 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              v12,
              v13,
              0LL));
    goto LABEL_7;
  }
  -[NSMutableDictionary removeObjectForKey:](self->_sessionRefs, "removeObjectForKey:", v6);
  v14 = 0LL;
LABEL_7:
  v8[2](v8, v14);
  objc_release(v8);
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}