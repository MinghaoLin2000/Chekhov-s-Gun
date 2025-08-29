-[AUDeveloperSettingsDatabase updateAccessory:locationType:]
void __cdecl -[AUDeveloperSettingsDatabase updateAccessory:locationType:](
        AUDeveloperSettingsDatabase *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  id v6; // x19
  NSDictionary *v7; // x21
  id v8; // x24
  void *v9; // x22
  NSString *v10; // x24
  OS_os_log *log; // x24
  os_log_s *v12; // x24
  __int64 v13; // x23
  void *v14; // x25
  NSDictionary *v15; // x23
  int v16; // [xsp+0h] [xbp-70h] BYREF
  const char *v17; // [xsp+4h] [xbp-6Ch]
  __int16 v18; // [xsp+Ch] [xbp-64h]
  __int64 v19; // [xsp+Eh] [xbp-62h]
  __int16 v20; // [xsp+16h] [xbp-5Ah]
  void *v21; // [xsp+18h] [xbp-58h]

  v6 = objc_retain(a3);
  if ( -[AUDeveloperSettingsDatabase isValidLocationType:](self, "isValidLocationType:", a4) )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[AUDeveloperSettingsDatabase accessoriesDictionary](self, "accessoriesDictionary"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v6));
    v9 = objc_msgSend(v8, "mutableCopy");
    objc_release(v8);
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              AUDeveloperSettingsURLTypeToString(a4)));
    objc_msgSend(v9, "setObject:forKeyedSubscript:", v10, CFSTR("assetLocation"));
    objc_release(v10);
    log = self->_log;
    if ( os_log_type_enabled(log, OS_LOG_TYPE_DEFAULT) )
    {
      v12 = objc_retain(log);
      v13 = AUDeveloperSettingsURLTypeToString(a4);
      v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectForKeyedSubscript:", CFSTR("name")));
      v16 = 136315650;
      v17 = "-[AUDeveloperSettingsDatabase updateAccessory:locationType:]";
      v18 = 2080;
      v19 = v13;
      v20 = 2112;
      v21 = v14;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_DEFAULT,
        "%s: Updating location = %s for accessoryName = %@",
        (uint8_t *)&v16,
        0x20u);
      objc_release(v14);
      objc_release(v12);
    }
    v15 = objc_retainAutoreleasedReturnValue(+[NSDictionary dictionaryWithDictionary:](&OBJC_CLASS___NSDictionary, "dictionaryWithDictionary:", v9));
    -[AUDeveloperSettingsDatabase addAccessoryWithSerialNumber:info:](
      self,
      "addAccessoryWithSerialNumber:info:",
      v6,
      v15);
    objc_release(v15);
    objc_release(v9);
    objc_release(v7);
  }
  objc_release(v6);
}