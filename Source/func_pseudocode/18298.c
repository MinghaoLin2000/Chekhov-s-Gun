-[AudioInfoHelperService init]
AudioInfoHelperService *__cdecl -[AudioInfoHelperService init](AudioInfoHelperService *self, SEL a2)
{
  AudioInfoHelperService *v2; // x19
  os_log_t *v3; // x21
  os_log_t v4; // x0
  os_log_s *v5; // x0
  os_log_s *v6; // x20
  NSXPCInterface *v7; // x0
  NSXPCInterface *mExportedInterface; // x8
  NSMutableArray *v9; // x0
  NSMutableArray *mConnections; // x8
  NSXPCListener *v11; // x0
  NSXPCListener *mListener; // x8
  objc_super v14; // [xsp+0h] [xbp-50h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-40h] BYREF
  const char *v16; // [xsp+14h] [xbp-3Ch]
  __int16 v17; // [xsp+1Ch] [xbp-34h]
  int v18; // [xsp+1Eh] [xbp-32h]

  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___AudioInfoHelperService;
  v2 = -[AudioInfoHelperService init](&v14, "init");
  if ( v2 )
  {
    v3 = (os_log_t *)operator new(16LL, 0x1080C40FC6463CFLL);
    v3[1] = 0LL;
    v4 = os_log_create("com.apple.coreaudio", "InfoHelper");
    *v3 = v4;
    qword_100008700 = (__int64)v3;
    v5 = objc_retain(v4);
    v6 = v5;
    if ( v5 && os_log_type_enabled(v5, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 136315394;
      v16 = "InfoHelper.mm";
      v17 = 1024;
      v18 = 35;
      _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_DEFAULT, "%25s:%-5d InfoHelper starting", buf, 0x12u);
    }
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(
           +[NSXPCInterface interfaceWithProtocol:](
             &OBJC_CLASS___NSXPCInterface,
             "interfaceWithProtocol:",
             &OBJC_PROTOCOL___AudioInfoHelperProtocol));
    mExportedInterface = v2->mExportedInterface;
    v2->mExportedInterface = v7;
    objc_release(mExportedInterface);
    v9 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    mConnections = v2->mConnections;
    v2->mConnections = v9;
    objc_release(mConnections);
    v11 = objc_retainAutoreleasedReturnValue(+[NSXPCListener serviceListener](&OBJC_CLASS___NSXPCListener, "serviceListener"));
    mListener = v2->mListener;
    v2->mListener = v11;
    objc_release(mListener);
    -[NSXPCListener setDelegate:](v2->mListener, "setDelegate:", v2);
    -[NSXPCListener resume](v2->mListener, "resume");
  }
  return v2;
}