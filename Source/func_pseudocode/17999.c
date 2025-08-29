-[PlugInLibraryService cancel:withReply:]
void __cdecl -[PlugInLibraryService cancel:withReply:](PlugInLibraryService *self, SEL a2, id a3, id a4)
{
  void (__fastcall **v6)(id, NSError *); // x19
  void *v7; // x21
  void *v8; // x20
  int v9; // w0
  NSErrorDomain v10; // x2
  __int64 v11; // x3
  NSError *v12; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = (void (__fastcall **)(id, NSError *))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_sessionRefs, "objectForKeyedSubscript:", a3));
  v8 = objc_msgSend(v7, "pointerValue");
  objc_release(v7);
  if ( !v8 )
  {
    v10 = NSPOSIXErrorDomain;
    v11 = 2LL;
    goto LABEL_5;
  }
  v9 = netfs_Cancel(v8);
  if ( v9 )
  {
    v10 = NSPOSIXErrorDomain;
    v11 = v9;
LABEL_5:
    v12 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              v10,
              v11,
              0LL));
    goto LABEL_7;
  }
  v12 = 0LL;
LABEL_7:
  v6[2](v6, v12);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}