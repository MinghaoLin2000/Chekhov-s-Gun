-[PlugInLibraryService mount:shareURL:mountOnPath:mountOptions:withReply:]
void __cdecl -[PlugInLibraryService mount:shareURL:mountOnPath:mountOptions:withReply:](
        PlugInLibraryService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v12; // x19
  id v13; // x20
  id v14; // x23
  id v15; // x21
  void (__fastcall **v16)(id, NSError *, void *); // x22
  id v17; // x23
  const char *v18; // x1
  NSErrorDomain v19; // x2
  __int64 v20; // x3
  NSError *v21; // x24
  void *v22; // x25
  void *v23; // x24
  int v24; // w0
  NSErrorDomain v25; // x2
  __int64 v26; // x3
  void *v27; // x25
  _BYTE v28[32]; // [xsp+8h] [xbp-68h] BYREF
  void *v29; // [xsp+28h] [xbp-48h] BYREF

  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  v14 = objc_retain(a5);
  v15 = objc_retain(a6);
  v16 = (void (__fastcall **)(id, NSError *, void *))objc_retain(a7);
  v29 = 0LL;
  v17 = objc_retainAutorelease(v14);
  if ( !objc_msgSend(v17, "UTF8String") )
  {
    v19 = NSPOSIXErrorDomain;
    v20 = 22LL;
    goto LABEL_5;
  }
  objc_msgSend_xpcConnectionAuditToken(v28, self, v18);
  if ( !(unsigned int)sandbox_check_by_audit_token(v28, "file-mount", SANDBOX_CHECK_ALLOW_APPROVAL | 1u) )
  {
    v22 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](self->_sessionRefs, "objectForKeyedSubscript:", v12));
    v23 = objc_msgSend(v22, "pointerValue");
    objc_release(v22);
    if ( v23 )
    {
      v24 = netfs_Mount(v23, v13, v17, v15, &v29);
      if ( !v24 )
      {
        v21 = 0LL;
        v27 = v29;
        goto LABEL_12;
      }
      v25 = NSPOSIXErrorDomain;
      v26 = v24;
    }
    else
    {
      v25 = NSPOSIXErrorDomain;
      v26 = 2LL;
    }
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              v25,
              v26,
              0LL));
    v27 = 0LL;
LABEL_12:
    v16[2](v16, v21, v27);
    objc_release(v27);
    goto LABEL_13;
  }
  v19 = NSPOSIXErrorDomain;
  v20 = 1LL;
LABEL_5:
  v21 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            v19,
            v20,
            0LL));
  v16[2](v16, v21, 0LL);
LABEL_13:
  objc_release(v21);
  objc_release(v16);
  objc_release(v15);
  objc_release(v17);
  objc_release(v13);
  objc_release(v12);
}