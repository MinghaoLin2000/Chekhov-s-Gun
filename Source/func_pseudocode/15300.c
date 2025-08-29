-[MobileAssetUpdater findAsset:completion:]
bool __cdecl -[MobileAssetUpdater findAsset:completion:](MobileAssetUpdater *self, SEL a2, bool a3, id a4)
{
  _BOOL4 v4; // w21
  void (__fastcall **v6)(id, _QWORD); // x19
  NSString *v7; // x22
  id v8; // x22
  NSString *v9; // x23
  MAAssetQuery *v10; // x0
  MAAssetQuery *query; // x8
  id v12; // x22
  NSString *v13; // x24
  id v14; // x0
  OS_os_log *v15; // x22
  MAAssetQuery *v16; // x22
  bool v17; // w20
  OS_os_log *log; // x21
  OS_os_log *v20; // x21
  _QWORD v21[5]; // [xsp+0h] [xbp-C0h] BYREF
  id v22; // [xsp+28h] [xbp-98h]
  char v23; // [xsp+30h] [xbp-90h]
  _QWORD v24[5]; // [xsp+38h] [xbp-88h] BYREF
  id v25; // [xsp+60h] [xbp-60h]
  bool v26; // [xsp+68h] [xbp-58h]
  uint8_t buf[4]; // [xsp+70h] [xbp-50h] BYREF
  const char *v28; // [xsp+74h] [xbp-4Ch]

  v4 = a3;
  v6 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater assetType](self, "assetType"));
  objc_release(v7);
  if ( !v7 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_1000136E4(log);
    goto LABEL_16;
  }
  if ( self->_query )
    -[MobileAssetUpdater setQuery:](self, "setQuery:", 0LL);
  v8 = objc_alloc((Class)&OBJC_CLASS___MAAssetQuery);
  v9 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater assetType](self, "assetType"));
  v10 = (MAAssetQuery *)objc_msgSend(v8, "initWithType:", v9);
  query = self->_query;
  self->_query = v10;
  objc_release(query);
  objc_release(v9);
  if ( !self->_query )
  {
    v20 = self->_log;
    if ( os_log_type_enabled(v20, OS_LOG_TYPE_ERROR) )
      sub_10001375C(v20);
LABEL_16:
    v6[2](v6, 0LL);
    -[MobileAssetUpdater setQuery:](self, "setQuery:", 0LL);
    v17 = 0;
    goto LABEL_11;
  }
  if ( v4 )
  {
    v12 = objc_alloc_init((Class)&OBJC_CLASS___MADownloadOptions);
    objc_msgSend(v12, "setDiscretionary:", 0LL);
    v13 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater assetType](self, "assetType"));
    v24[0] = _NSConcreteStackBlock;
    v24[1] = 3254779904LL;
    v24[2] = sub_100004CF4;
    v24[3] = &unk_100020640;
    v24[4] = self;
    v26 = v4;
    v25 = objc_retain(v6);
    +[MAAsset startCatalogDownload:options:then:](
      &OBJC_CLASS___MAAsset,
      "startCatalogDownload:options:then:",
      v13,
      v12,
      v24);
    objc_release(v13);
    objc_release(v25);
    v14 = v12;
  }
  else
  {
    v15 = self->_log;
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 136315138;
      v28 = "-[MobileAssetUpdater findAsset:completion:]";
      _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_DEFAULT, "%s: Local catalog only", buf, 0xCu);
    }
    -[MAAssetQuery returnTypes:](self->_query, "returnTypes:", 0LL);
    v16 = self->_query;
    v21[0] = _NSConcreteStackBlock;
    v21[1] = 3254779904LL;
    v21[2] = sub_100004F68;
    v21[3] = &unk_100020640;
    v21[4] = self;
    v23 = 0;
    v22 = objc_retain(v6);
    -[MAAssetQuery queryMetaData:](v16, "queryMetaData:", v21);
    v14 = v22;
  }
  objc_release(v14);
  v17 = 1;
LABEL_11:
  objc_release(v6);
  return v17;
}