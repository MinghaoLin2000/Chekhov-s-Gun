-[UARPUpdaterDisplayControllerDelegate revokeUserConsentRequest]
void __cdecl -[UARPUpdaterDisplayControllerDelegate revokeUserConsentRequest](
        UARPUpdaterDisplayControllerDelegate *self,
        SEL a2)
{
  OS_os_log *log; // x20
  id v4; // x20
  id v5; // x21
  void *v6; // x20
  id v7; // x21
  int v8; // [xsp+0h] [xbp-40h] BYREF
  const char *v9; // [xsp+4h] [xbp-3Ch]

  log = self->_log;
  if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
  {
    v8 = 136315138;
    v9 = "-[UARPUpdaterDisplayControllerDelegate revokeUserConsentRequest]";
    _os_log_impl((void *)&_mh_execute_header, log, OS_LOG_TYPE_DEFAULT, "%s", (uint8_t *)&v8, 0xCu);
  }
  v4 = objc_alloc((Class)&OBJC_CLASS___UARPConsent);
  v5 = objc_retainAutoreleasedReturnValue(
         -[UARPUpdaterDisplayControllerDelegate localizedStringForKey:](
           self,
           "localizedStringForKey:",
           CFSTR("Apple Studio Display")));
  v6 = objc_msgSend(v4, "initWithAccessoryName:assetVersion:", v5, &stru_100020E10);
  objc_release(v5);
  v7 = objc_alloc_init((Class)&OBJC_CLASS___UARPController);
  objc_msgSend(v7, "setDelegate:", self);
  objc_msgSend(v7, "revokeConsentRequest:", v6);
  objc_release(v7);
  objc_release(v6);
}