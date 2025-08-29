-[LegacyAudioAccessory personalizationDone:response:error:]
void __cdecl -[LegacyAudioAccessory personalizationDone:response:error:](
        LegacyAudioAccessory *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  OS_os_log *log; // x23
  id v12; // x3
  id v13; // x4
  int v14; // [xsp+0h] [xbp-50h] BYREF
  const char *v15; // [xsp+4h] [xbp-4Ch]
  __int16 v16; // [xsp+Ch] [xbp-44h]
  id v17; // [xsp+Eh] [xbp-42h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v14 = 136315394;
    v15 = "-[LegacyAudioAccessory personalizationDone:response:error:]";
    v16 = 2112;
    v17 = v10;
    _os_log_impl(
      (void *)&_mh_execute_header,
      log,
      OS_LOG_TYPE_DEFAULT,
      "%s: Error during personalization %@.",
      (uint8_t *)&v14,
      0x16u);
  }
  if ( v10 )
  {
    v12 = 0LL;
    v13 = v10;
  }
  else
  {
    v12 = v9;
    v13 = 0LL;
  }
  -[EAAccessoryUpdater personalizationResponse:response:status:](
    self->_updater,
    "personalizationResponse:response:status:",
    v8,
    v12,
    v13);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}