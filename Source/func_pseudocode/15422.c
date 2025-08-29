-[DisplayMobileAssetUpdater abortDownloadAsset]
void __cdecl -[DisplayMobileAssetUpdater abortDownloadAsset](DisplayMobileAssetUpdater *self, SEL a2)
{
  MAAsset *v3; // x20
  OS_os_log *log; // x20
  os_log_s *v5; // x20
  MAAsset *v6; // x21
  void *v7; // x22
  _BOOL4 internalUpdate; // w8
  MAAsset *v9; // x20
  _QWORD v10[5]; // [xsp+8h] [xbp-78h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-50h] BYREF
  const char *v12; // [xsp+34h] [xbp-4Ch]
  __int16 v13; // [xsp+3Ch] [xbp-44h]
  void *v14; // [xsp+3Eh] [xbp-42h]
  __int16 v15; // [xsp+46h] [xbp-3Ah]
  _BOOL4 v16; // [xsp+48h] [xbp-38h]

  v3 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater asset](self, "asset"));
  objc_release(v3);
  if ( v3 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
    {
      v5 = objc_retain(log);
      v6 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater asset](self, "asset"));
      v7 = objc_retainAutoreleasedReturnValue(-[MAAsset assetId](v6, "assetId"));
      internalUpdate = self->_internalUpdate;
      *(_DWORD *)buf = 136315650;
      v12 = "-[DisplayMobileAssetUpdater abortDownloadAsset]";
      v13 = 2112;
      v14 = v7;
      v15 = 1024;
      v16 = internalUpdate;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v5,
        OS_LOG_TYPE_DEFAULT,
        "%s: Aborting download of asset %@ (internal=%d)",
        buf,
        0x1Cu);
      objc_release(v6);
      objc_release(v7);
      objc_release(v5);
    }
    v9 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater asset](self, "asset"));
    v10[0] = _NSConcreteStackBlock;
    v10[1] = 3254779904LL;
    v10[2] = sub_100012B24;
    v10[3] = &unk_100020970;
    v10[4] = self;
    -[MAAsset cancelDownload:](v9, "cancelDownload:", v10);
    objc_release(v9);
  }
}