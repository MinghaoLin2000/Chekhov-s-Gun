-[UARPUpdaterDisplayControllerDelegate setAssetAudience:]
void __cdecl -[UARPUpdaterDisplayControllerDelegate setAssetAudience:](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2,
        bool a3)
{
  _BOOL4 v3; // w21
  __CFString *v5; // x0
  __CFString *v6; // x20
  OS_os_log *log; // x21
  bool v8; // w22
  OS_os_log *v9; // x21
  bool v10; // w23
  __int64 v11; // x0
  __int64 v12; // x21
  OS_os_log *v13; // x19
  OS_os_log *v14; // x21
  _BOOL4 customerAudienceUsed; // w8
  _BOOL4 internalAudienceUsed; // w9
  OS_os_log *v17; // x21
  int v18; // [xsp+0h] [xbp-50h] BYREF
  const char *v19; // [xsp+4h] [xbp-4Ch]
  __int16 v20; // [xsp+Ch] [xbp-44h]
  _BYTE v21[10]; // [xsp+Eh] [xbp-42h]

  v3 = a3;
  if ( !+[UARPUpdaterDisplayControllerDelegate hostIsInternal](
          &OBJC_CLASS___UARPUpdaterDisplayControllerDelegate,
          "hostIsInternal") )
  {
    *(_WORD *)&self->_customerAudienceUsed = 1;
    return;
  }
  v5 = (__CFString *)CFPreferencesCopyAppValue(
                       CFSTR("SetAssetAudience"),
                       CFSTR("com.apple.DarwinAccessoryUpdate.A2525"));
  if ( v5 )
  {
    v6 = v5;
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
    {
      v18 = 136315394;
      v19 = "-[UARPUpdaterDisplayControllerDelegate setAssetAudience:]";
      v20 = 2112;
      *(_QWORD *)v21 = v6;
      _os_log_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_DEFAULT,
        "%s: User requested audience: %@",
        (uint8_t *)&v18,
        0x16u);
    }
    v8 = 1;
  }
  else
  {
    if ( !v3 )
    {
      v6 = (__CFString *)objc_retainAutoreleasedReturnValue((id)MAGetPallasAudience(CFSTR("MobileAssetAssetAudience")));
      v17 = self->_log;
      if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEFAULT) )
      {
        v18 = 136315394;
        v19 = "-[UARPUpdaterDisplayControllerDelegate setAssetAudience:]";
        v20 = 2112;
        *(_QWORD *)v21 = v6;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v17,
          OS_LOG_TYPE_DEFAULT,
          "%s: MacOS audience requested: %@",
          (uint8_t *)&v18,
          0x16u);
      }
      v10 = 0;
      v8 = 1;
      goto LABEL_12;
    }
    v9 = self->_log;
    v6 = CFSTR("02d8e57e-dd1c-4090-aa50-b4ed2aef0062");
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
    {
      v18 = 136315394;
      v19 = "-[UARPUpdaterDisplayControllerDelegate setAssetAudience:]";
      v20 = 2112;
      *(_QWORD *)v21 = CFSTR("02d8e57e-dd1c-4090-aa50-b4ed2aef0062");
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_DEFAULT,
        "%s: Customer audience requested: %@",
        (uint8_t *)&v18,
        0x16u);
    }
    v8 = 0;
  }
  v10 = 1;
LABEL_12:
  v11 = MASetPallasAudienceForType(v6, CFSTR("com.apple.MobileAsset.DarwinAccessoryUpdate.A2525"));
  if ( v11 )
  {
    v12 = v11;
    v13 = self->_log;
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_ERROR) )
      sub_100013BF0(v6, v12, v13);
  }
  else
  {
    self->_customerAudienceUsed = v10;
    self->_internalAudienceUsed = v8;
    v14 = self->_log;
    if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
    {
      customerAudienceUsed = self->_customerAudienceUsed;
      internalAudienceUsed = self->_internalAudienceUsed;
      v18 = 136315650;
      v19 = "-[UARPUpdaterDisplayControllerDelegate setAssetAudience:]";
      v20 = 1024;
      *(_DWORD *)v21 = customerAudienceUsed;
      *(_WORD *)&v21[4] = 1024;
      *(_DWORD *)&v21[6] = internalAudienceUsed;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v14,
        OS_LOG_TYPE_DEFAULT,
        "%s: Customer audience: %d, internal audience: %d",
        (uint8_t *)&v18,
        0x18u);
    }
    -[DisplayMobileAssetUpdater syncPurgeCatalog](self->_mobileAssetCustomerUpdater, "syncPurgeCatalog");
  }
  objc_release(v6);
}