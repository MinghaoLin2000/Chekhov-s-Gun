-[MobileAssetUpdater downloadAsset:completion:]
bool __cdecl -[MobileAssetUpdater downloadAsset:completion:](MobileAssetUpdater *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  OS_os_log *log; // x22
  os_log_s *v9; // x22
  MAAsset *v10; // x22
  void *v11; // x23
  id v12; // x22
  MAAsset *v13; // x23
  OS_os_log *v14; // x22
  MobileAssetUpdater *v15; // x0
  __int64 v16; // x2
  _QWORD v18[5]; // [xsp+0h] [xbp-80h] BYREF
  id v19; // [xsp+28h] [xbp-58h]
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  const char *v21; // [xsp+34h] [xbp-4Ch]
  __int16 v22; // [xsp+3Ch] [xbp-44h]
  void *v23; // [xsp+3Eh] [xbp-42h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  log = self->_log;
  if ( v6 )
  {
    if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = objc_retain(log);
      *(_DWORD *)buf = 136315394;
      v21 = "-[MobileAssetUpdater downloadAsset:completion:]";
      v22 = 2048;
      v23 = objc_msgSend(v6, "state");
      _os_log_impl((void *)&_mh_execute_header, v9, OS_LOG_TYPE_DEFAULT, "%s: asset.state = %lu \n", buf, 0x16u);
      objc_release(v9);
    }
    -[MobileAssetUpdater setAsset:](self, "setAsset:", v6);
    v10 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater asset](self, "asset"));
    v11 = -[MAAsset state](v10, "state");
    objc_release(v10);
    switch ( (unsigned __int64)v11 )
    {
      case 1uLL:
      case 4uLL:
        v12 = objc_alloc_init((Class)&OBJC_CLASS___MADownloadOptions);
        objc_msgSend(v12, "setDiscretionary:", 0LL);
        v13 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater asset](self, "asset"));
        v18[0] = _NSConcreteStackBlock;
        v18[1] = 3254779904LL;
        v18[2] = sub_1000055B4;
        v18[3] = &unk_100020670;
        v18[4] = self;
        v19 = objc_retain(v7);
        -[MAAsset startDownload:then:](v13, "startDownload:then:", v12, v18);
        objc_release(v13);
        objc_release(v19);
        objc_release(v12);
        break;
      case 2uLL:
        v15 = self;
        v16 = 0LL;
        goto LABEL_10;
      case 3uLL:
        -[MobileAssetUpdater setAsset:](self, "setAsset:", 0LL);
        v15 = self;
        v16 = 3LL;
LABEL_10:
        -[MobileAssetUpdater downloadComplete:completion:](v15, "downloadComplete:completion:", v16, v7);
        break;
      default:
        v14 = self->_log;
        if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
          sub_1000139B4(v14, self);
        break;
    }
  }
  else if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
  {
    sub_100013A74(log);
  }
  objc_release(v7);
  objc_release(v6);
  return v6 != 0LL;
}