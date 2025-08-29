-[UARPUpdaterDisplayControllerDelegate shouldUpdateDevice:withAsset:internal:withECID:]
// local variable allocation has failed, the output may be wrong!
bool __cdecl -[UARPUpdaterDisplayControllerDelegate shouldUpdateDevice:withAsset:internal:withECID:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        unsigned __int64 a6)
{
  _BOOL8 v7; // x23
  id v10; // x19
  id v11; // x20
  unsigned int v12; // w24
  OS_os_log *v13; // x25
  os_log_s *v14; // x25
  void *v15; // x26
  void *v16; // x27
  void *v17; // x28
  DisplayMobileAssetUpdater *mobileAssetCustomerUpdater; // x23
  void *v19; // x24
  OS_os_log *v20; // x22
  const char *v21; // x3
  bool v22; // w21
  unsigned int v24; // w23
  _BOOL4 v25; // w0
  OS_os_log *log; // x22
  OS_os_log *v27; // x22
  int v28; // [xsp+0h] [xbp-A0h] BYREF
  const char *v29; // [xsp+4h] [xbp-9Ch]
  __int16 v30; // [xsp+Ch] [xbp-94h]
  unsigned __int64 v31; // [xsp+Eh] [xbp-92h]
  __int16 v32; // [xsp+16h] [xbp-8Ah]
  void *v33; // [xsp+18h] [xbp-88h]
  __int16 v34; // [xsp+20h] [xbp-80h]
  void *v35; // [xsp+22h] [xbp-7Eh]
  __int16 v36; // [xsp+2Ah] [xbp-76h]
  void *v37; // [xsp+2Ch] [xbp-74h]
  __int16 v38; // [xsp+34h] [xbp-6Ch]
  unsigned int v39; // [xsp+36h] [xbp-6Ah]

  v7 = a5;
  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  if ( !v10 )
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_ERROR) )
      sub_10001465C(a6, log);
    goto LABEL_17;
  }
  v12 = (unsigned int)objc_msgSend(v10, "internal");
  v13 = self->_log;
  if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
  {
    v14 = objc_retain(v13);
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "version"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "build"));
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "restoreVersion"));
    v28 = 136316418;
    v29 = "-[UARPUpdaterDisplayControllerDelegate shouldUpdateDevice:withAsset:internal:withECID:]";
    v30 = 2048;
    v31 = a6;
    v32 = 2112;
    v33 = v15;
    v34 = 2112;
    v35 = v16;
    v36 = 2112;
    v37 = v17;
    v38 = 1024;
    v39 = v12;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_DEFAULT,
      "%s: Device with ecid 0x%llx is running version: %@ build: %@ restoreVersion: %@ internal: %d",
      (uint8_t *)&v28,
      0x3Au);
    objc_release(v17);
    objc_release(v16);
    objc_release(v15);
    objc_release(v14);
  }
  if ( !v11 )
  {
    v27 = self->_log;
    if ( os_log_type_enabled(v27, OS_LOG_TYPE_ERROR) )
      sub_1000146D0(v7, a6, v27);
    goto LABEL_17;
  }
  if ( v12 == v7 )
  {
    mobileAssetCustomerUpdater = self->_mobileAssetCustomerUpdater;
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "restoreVersion"));
    LOBYTE(mobileAssetCustomerUpdater) = -[DisplayMobileAssetUpdater asset:newerThanVersion:](
                                           mobileAssetCustomerUpdater,
                                           "asset:newerThanVersion:",
                                           v11,
                                           v19);
    objc_release(v19);
    if ( ((unsigned __int8)mobileAssetCustomerUpdater & 1) == 0 )
    {
      v24 = -[UARPUpdaterDisplayControllerDelegate getDefaultBool:defaultValue:](
              self,
              "getDefaultBool:defaultValue:",
              CFSTR("ForceInstallOlderOS"),
              0LL);
      v20 = self->_log;
      v25 = os_log_type_enabled(v20, OS_LOG_TYPE_DEFAULT);
      if ( v24 )
      {
        if ( !v25 )
          goto LABEL_10;
        v28 = 136315394;
        v29 = "-[UARPUpdaterDisplayControllerDelegate shouldUpdateDevice:withAsset:internal:withECID:]";
        v30 = 2048;
        v31 = a6;
        v21 = "%s: Forcing update to older OS for device with ecid 0x%llx";
        goto LABEL_9;
      }
      if ( v25 )
      {
        v28 = 136315394;
        v29 = "-[UARPUpdaterDisplayControllerDelegate shouldUpdateDevice:withAsset:internal:withECID:]";
        v30 = 2048;
        v31 = a6;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v20,
          OS_LOG_TYPE_DEFAULT,
          "%s: Update not available for device with ecid 0x%llx",
          (uint8_t *)&v28,
          0x16u);
      }
LABEL_17:
      v22 = 0;
      goto LABEL_11;
    }
  }
  v20 = self->_log;
  if ( os_log_type_enabled(v20, OS_LOG_TYPE_DEFAULT) )
  {
    v28 = 136315394;
    v29 = "-[UARPUpdaterDisplayControllerDelegate shouldUpdateDevice:withAsset:internal:withECID:]";
    v30 = 2048;
    v31 = a6;
    v21 = "%s: Update available for device with ecid 0x%llx";
LABEL_9:
    _os_log_impl((void *)&_mh_execute_header, v20, OS_LOG_TYPE_DEFAULT, v21, (uint8_t *)&v28, 0x16u);
  }
LABEL_10:
  v22 = 1;
LABEL_11:
  objc_release(v11);
  objc_release(v10);
  return v22;
}