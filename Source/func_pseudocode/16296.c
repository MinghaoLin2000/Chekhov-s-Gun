-[AUDeveloperSettingsDatabase addAccessoryWithSerialNumber:info:]
void __cdecl -[AUDeveloperSettingsDatabase addAccessoryWithSerialNumber:info:](
        AUDeveloperSettingsDatabase *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  NSDictionary *v8; // x22
  void *v9; // x23
  OS_os_log *log; // x21
  int v11; // [xsp+0h] [xbp-50h] BYREF
  const char *v12; // [xsp+4h] [xbp-4Ch]
  __int16 v13; // [xsp+Ch] [xbp-44h]
  id v14; // [xsp+Eh] [xbp-42h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( objc_msgSend(v6, "length") )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[AUDeveloperSettingsDatabase accessoriesDictionary](self, "accessoriesDictionary"));
    v9 = -[NSDictionary mutableCopy](v8, "mutableCopy");
    objc_release(v8);
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v7, v6);
    -[AUDeveloperSettingsDatabase setAccessoriesDictionary:](self, "setAccessoriesDictionary:", v9);
    objc_release(v9);
  }
  else
  {
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
    {
      v11 = 136315394;
      v12 = "-[AUDeveloperSettingsDatabase addAccessoryWithSerialNumber:info:]";
      v13 = 2112;
      v14 = v7;
      _os_log_impl(
        (void *)&_mh_execute_header,
        log,
        OS_LOG_TYPE_DEFAULT,
        "%s: Not adding empty serial number with info = %@",
        (uint8_t *)&v11,
        0x16u);
    }
  }
  objc_release(v7);
  objc_release(v6);
}