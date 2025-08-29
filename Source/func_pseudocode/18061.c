_netfs_startUpXPCLibrary
__int64 __fastcall netfs_startUpXPCLibrary(__int64 a1, _QWORD *a2)
{
  void *v2; // x21
  __int64 v3; // x22
  void *v5; // x19
  NSString *v7; // x21
  void *v8; // x21
  NSXPCInterface *v9; // x22
  void *v10; // x0
  void *v11; // x0
  void *v12; // x0
  _QWORD v14[6]; // [xsp+8h] [xbp-128h] BYREF
  _QWORD v15[5]; // [xsp+38h] [xbp-F8h] BYREF
  __int64 v16; // [xsp+60h] [xbp-D0h] BYREF
  __int64 *v17; // [xsp+68h] [xbp-C8h]
  __int64 v18; // [xsp+70h] [xbp-C0h]
  __int64 (__fastcall *v19)(); // [xsp+78h] [xbp-B8h]
  __int64 (__fastcall *v20)(); // [xsp+80h] [xbp-B0h]
  id v21; // [xsp+88h] [xbp-A8h]
  __int64 v22; // [xsp+90h] [xbp-A0h] BYREF
  __int64 *v23; // [xsp+98h] [xbp-98h]
  __int64 v24; // [xsp+A0h] [xbp-90h]
  __int64 (__fastcall *v25)(); // [xsp+A8h] [xbp-88h]
  __int64 (__fastcall *v26)(); // [xsp+B0h] [xbp-80h]
  id v27; // [xsp+B8h] [xbp-78h]
  __int64 v28; // [xsp+C0h] [xbp-70h] BYREF
  __int64 *v29; // [xsp+C8h] [xbp-68h]
  __int64 v30; // [xsp+D0h] [xbp-60h]
  __int64 (__fastcall *v31)(); // [xsp+D8h] [xbp-58h]
  __int64 (__fastcall *v32)(); // [xsp+E0h] [xbp-50h]
  id v33; // [xsp+E8h] [xbp-48h]

  v2 = 0LL;
  v28 = 0LL;
  v29 = &v28;
  v30 = 0x3032000000LL;
  v31 = sub_10000B570;
  v32 = sub_10000B580;
  v33 = 0LL;
  v22 = 0LL;
  v23 = &v22;
  v24 = 0x3032000000LL;
  v25 = sub_10000B570;
  v26 = sub_10000B580;
  v27 = 0LL;
  v16 = 0LL;
  v17 = &v16;
  v18 = 0x3032000000LL;
  v19 = sub_10000B570;
  v20 = sub_10000B580;
  v21 = 0LL;
  v3 = 22LL;
  if ( a1 )
  {
    v5 = 0LL;
    if ( a2 )
    {
      v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
      v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%s"), a1));
      objc_msgSend(v5, "setObject:forKeyedSubscript:", v7, CFSTR("path"));
      objc_release(v7);
      pthread_mutex_lock(&stru_100018F48);
      if ( !qword_100018FF0 )
      {
        v8 = objc_msgSend(
               objc_alloc((Class)&OBJC_CLASS___NSXPCConnection),
               "initWithServiceName:",
               CFSTR("com.apple.filesystems.netfs.PlugInLibraryService"));
        v9 = objc_retainAutoreleasedReturnValue(
               +[NSXPCInterface interfaceWithProtocol:](
                 &OBJC_CLASS___NSXPCInterface,
                 "interfaceWithProtocol:",
                 &OBJC_PROTOCOL___PlugInLibraryServiceProtocol));
        objc_msgSend(v8, "setRemoteObjectInterface:", v9);
        objc_release(v9);
        objc_msgSend(v8, "resume");
        v10 = (void *)qword_100018FF0;
        qword_100018FF0 = (__int64)v8;
        objc_release(v10);
      }
      pthread_mutex_unlock(&stru_100018F48);
      v15[0] = _NSConcreteStackBlock;
      v15[1] = 3254779904LL;
      v15[2] = sub_10000B588;
      v15[3] = &unk_1000146E0;
      v15[4] = &v28;
      v2 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)qword_100018FF0, "synchronousRemoteObjectProxyWithErrorHandler:", v15));
      v14[0] = _NSConcreteStackBlock;
      v14[1] = 3254779904LL;
      v14[2] = sub_10000B5B4;
      v14[3] = &unk_100014710;
      v14[4] = &v22;
      v14[5] = &v16;
      objc_msgSend(v2, "startUp:withReply:", v5, v14);
      if ( v29[5] )
      {
        v3 = 57LL;
      }
      else
      {
        v11 = (void *)v23[5];
        if ( v11 )
        {
          v3 = (__int64)objc_msgSend(v11, "code");
        }
        else
        {
          v12 = (void *)v17[5];
          if ( v12 )
          {
            v3 = 0LL;
            *a2 = objc_retain(v12);
          }
          else
          {
            syslog_DARWIN_EXTSN(7, "supportedSchemes == nil");
            v3 = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v5 = 0LL;
  }
  _Block_object_dispose(&v16, 8);
  objc_release(v21);
  _Block_object_dispose(&v22, 8);
  objc_release(v27);
  _Block_object_dispose(&v28, 8);
  objc_release(v33);
  objc_release(v5);
  objc_release(v2);
  return v3;
}