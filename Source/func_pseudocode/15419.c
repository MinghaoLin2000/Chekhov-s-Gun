-[DisplayMobileAssetUpdater assetWithMaxVersion:]
id __cdecl -[DisplayMobileAssetUpdater assetWithMaxVersion:](DisplayMobileAssetUpdater *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x23
  void *v6; // x0
  void *v7; // x21
  __int64 v8; // x25
  void *i; // x19
  void *v10; // x27
  void *v11; // x22
  void *v12; // x23
  void *v13; // x26
  void *v14; // x23
  void *v15; // x28
  void *v16; // x24
  void *v17; // x23
  id v18; // x24
  OS_os_log *log; // x20
  char v21; // [xsp+4h] [xbp-12Ch]
  id v22; // [xsp+8h] [xbp-128h]
  __int128 v23; // [xsp+10h] [xbp-120h] BYREF
  __int128 v24; // [xsp+20h] [xbp-110h]
  __int128 v25; // [xsp+30h] [xbp-100h]
  __int128 v26; // [xsp+40h] [xbp-F0h]
  _BYTE v27[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( !v4 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_100015B08(log);
    goto LABEL_20;
  }
  v25 = 0u;
  v26 = 0u;
  v23 = 0u;
  v24 = 0u;
  v6 = objc_msgSend(v4, "countByEnumeratingWithState:objects:count:", &v23, v27, 16LL);
  if ( !v6 )
  {
LABEL_20:
    v22 = 0LL;
    goto LABEL_21;
  }
  v7 = v6;
  v21 = 0;
  v22 = 0LL;
  v8 = *(_QWORD *)v24;
  do
  {
    for ( i = 0LL; i != v7; i = (char *)i + 1 )
    {
      if ( *(_QWORD *)v24 != v8 )
        objc_enumerationMutation(v5);
      v10 = *(void **)(*((_QWORD *)&v23 + 1) + 8LL * (_QWORD)i);
      if ( -[DisplayMobileAssetUpdater validAssetOSVersionBuild:restoreVersion:](
             self,
             "validAssetOSVersionBuild:restoreVersion:",
             v10,
             0LL) )
      {
        v11 = v5;
        v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "attributes"));
        v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectForKeyedSubscript:", CFSTR("OSVersion")));
        objc_release(v12);
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "attributes"));
        v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("Build")));
        objc_release(v14);
        v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "attributes"));
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "objectForKeyedSubscript:", CFSTR("RestoreVersion")));
        objc_release(v16);
        v21 |= v17 != 0LL;
        if ( !v22
          || v17 && !-[DisplayMobileAssetUpdater asset:newerThanVersion:](self, "asset:newerThanVersion:", v22, v17)
          || (v21 & 1) == 0
          && !-[DisplayMobileAssetUpdater asset:newerThanVersion:build:](
                self,
                "asset:newerThanVersion:build:",
                v22,
                v13,
                v15) )
        {
          v18 = objc_retain(v10);
          objc_release(v22);
          v22 = v18;
        }
        objc_release(v17);
        objc_release(v15);
        objc_release(v13);
        v5 = v11;
      }
    }
    v7 = objc_msgSend(v5, "countByEnumeratingWithState:objects:count:", &v23, v27, 16LL);
  }
  while ( v7 );
LABEL_21:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v22);
}