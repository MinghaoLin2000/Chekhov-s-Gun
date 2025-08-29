-[SiriNCAlertViewController siriViewController:openURL:appBundleID:allowSiriDismissal:]
bool __cdecl -[SiriNCAlertViewController siriViewController:openURL:appBundleID:allowSiriDismissal:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6)
{
  id v10; // x19
  id v11; // x21
  id v12; // x22
  void *v13; // x24
  os_log_s *v14; // x24
  bool v15; // w20
  int v17; // [xsp+0h] [xbp-50h] BYREF
  const char *v18; // [xsp+4h] [xbp-4Ch]
  __int16 v19; // [xsp+Ch] [xbp-44h]
  const char *Name; // [xsp+Eh] [xbp-42h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = (void *)AFSiriLogContextConnection;
  if ( os_log_type_enabled(AFSiriLogContextConnection, OS_LOG_TYPE_DEFAULT) )
  {
    v14 = objc_retain(v13);
    v17 = 136315394;
    v18 = "-[SiriNCAlertViewController siriViewController:openURL:appBundleID:allowSiriDismissal:]";
    v19 = 2080;
    Name = sel_getName(a2);
    _os_log_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_DEFAULT,
      "%s %s - not fully implemented",
      (uint8_t *)&v17,
      0x16u);
    objc_release(v14);
  }
  v15 = -[SiriNCAlertViewController siriViewController:launchApplicationWithBundleIdentifier:withURL:](
          self,
          "siriViewController:launchApplicationWithBundleIdentifier:withURL:",
          v10,
          v12,
          v11);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  return v15;
}