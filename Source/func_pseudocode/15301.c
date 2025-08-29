-[MobileAssetUpdater queryComplete:remote:status:completion:]
void __cdecl -[MobileAssetUpdater queryComplete:remote:status:completion:](
        MobileAssetUpdater *self,
        SEL a2,
        id a3,
        bool a4,
        signed __int64 a5,
        id a6)
{
  _BOOL4 v8; // w23
  id v10; // x19
  void (__fastcall **v11)(id, void *); // x21
  OS_os_log *log; // x22
  const char *v13; // x8
  OS_os_log *v14; // x22
  id v15; // x23
  void *v16; // x22
  OS_os_log *v17; // x23
  id v18; // x0
  void *v19; // x23
  id v20; // x0
  OS_os_log *v21; // x22
  OS_os_log *v22; // x23
  OS_os_log *v23; // x24
  _BYTE v24[22]; // [xsp+0h] [xbp-60h] BYREF
  __int16 v25; // [xsp+16h] [xbp-4Ah]
  id v26; // [xsp+18h] [xbp-48h]

  v8 = a4;
  v10 = objc_retain(a3);
  v11 = (void (__fastcall **)(id, void *))objc_retain(a6);
  -[NSLock lock](self->_lock, "lock");
  log = self->_log;
  if ( a5 )
  {
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_10001393C(log);
  }
  else
  {
    if ( os_log_type_enabled(log, OS_LOG_TYPE_INFO) )
    {
      v13 = "Local";
      *(_QWORD *)&v24[4] = "-[MobileAssetUpdater queryComplete:remote:status:completion:]";
      *(_DWORD *)v24 = 136315650;
      if ( v8 )
        v13 = "Remote";
      *(_WORD *)&v24[12] = 2080;
      *(_QWORD *)&v24[14] = v13;
      v25 = 2112;
      v26 = v10;
      _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_INFO, "%s: (%s) - Query Results: %@", v24, 0x20u);
    }
    v14 = self->_log;
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)v24 = 136315394;
      *(_QWORD *)&v24[4] = "-[MobileAssetUpdater queryComplete:remote:status:completion:]";
      *(_WORD *)&v24[12] = 2048;
      *(_QWORD *)&v24[14] = 0LL;
      _os_log_impl((void *)&_mh_execute_header, v14, OS_LOG_TYPE_DEFAULT, "%s: Status: %ld", v24, 0x16u);
    }
    if ( v10 && objc_msgSend(v10, "count") )
    {
      v15 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater queryPredicate](self, "queryPredicate"));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "filteredArrayUsingPredicate:", v15));
      objc_release(v15);
      if ( v16 )
      {
        if ( objc_msgSend(v16, "count") )
        {
          v17 = self->_log;
          if ( os_log_type_enabled(v17, OS_LOG_TYPE_INFO) )
          {
            *(_DWORD *)v24 = 136315394;
            *(_QWORD *)&v24[4] = "-[MobileAssetUpdater queryComplete:remote:status:completion:]";
            *(_WORD *)&v24[12] = 2112;
            *(_QWORD *)&v24[14] = v16;
            _os_log_impl((void *)&_mh_execute_header, v17, OS_LOG_TYPE_INFO, "%s: filteredResults: %@\n", v24, 0x16u);
          }
          v18 = objc_retainAutoreleasedReturnValue(-[MobileAssetUpdater assetWithMaxVersion:](self, "assetWithMaxVersion:", v16, *(_OWORD *)v24));
          v19 = v18;
          if ( v18 )
          {
            v20 = objc_retain(v18);
          }
          else
          {
            v23 = self->_log;
            if ( os_log_type_enabled(v23, OS_LOG_TYPE_ERROR) )
              sub_1000138C4(v23);
          }
          objc_release(v19);
LABEL_27:
          objc_release(v16);
          if ( !v11 )
            goto LABEL_21;
          goto LABEL_20;
        }
      }
      else
      {
        v22 = self->_log;
        if ( os_log_type_enabled(v22, OS_LOG_TYPE_DEFAULT) )
        {
          *(_DWORD *)v24 = 136315138;
          *(_QWORD *)&v24[4] = "-[MobileAssetUpdater queryComplete:remote:status:completion:]";
          _os_log_impl(
            (void *)&_mh_execute_header,
            v22,
            OS_LOG_TYPE_DEFAULT,
            "%s: No asset matching query predicate found",
            v24,
            0xCu);
        }
      }
      v19 = 0LL;
      goto LABEL_27;
    }
    v21 = self->_log;
    if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
      sub_10001384C(v21);
  }
  v19 = 0LL;
  if ( v11 )
LABEL_20:
    v11[2](v11, v19);
LABEL_21:
  -[NSLock unlock](self->_lock, "unlock", *(_QWORD *)v24, *(_QWORD *)&v24[8]);
  objc_release(v19);
  objc_release(v11);
  objc_release(v10);
}