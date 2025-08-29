-[EAAccessoryUpdater updateAccessoryInfoInDatabaseIfNeeded:]
void __cdecl -[EAAccessoryUpdater updateAccessoryInfoInDatabaseIfNeeded:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  NSString *v5; // x24
  NSString *v6; // x23
  NSString *v7; // x22
  void *v8; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5 = -[EAAccessory name](-[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"), "name");
  v6 = -[EAAccessory firmwareRevision](
         -[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"),
         "firmwareRevision");
  v7 = -[EAAccessory modelNumber](-[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"), "modelNumber");
  v8 = objc_msgSend(a3, "mutableCopy");
  if ( ((unsigned int)objc_msgSend(objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("name")), "isEqualToString:", v5) & 1) == 0 )
    objc_msgSend(v8, "setObject:forKeyedSubscript:", v5, CFSTR("name"));
  if ( ((unsigned int)objc_msgSend(
                        objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("activeVersion")),
                        "isEqualToString:",
                        v6) & 1) == 0 )
    objc_msgSend(v8, "setObject:forKeyedSubscript:", v6, CFSTR("activeVersion"));
  if ( ((unsigned int)objc_msgSend(
                        objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("modelNumber")),
                        "isEqualToString:",
                        v7) & 1) == 0 )
    objc_msgSend(v8, "setObject:forKeyedSubscript:", v7, CFSTR("modelNumber"));
  if ( ((unsigned int)objc_msgSend(
                        objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("fusing")),
                        "isEqualToString:",
                        self->_accessoryFusingType) & 1) == 0 )
    objc_msgSend(v8, "setObject:forKeyedSubscript:", self->_accessoryFusingType, CFSTR("fusing"));
  objc_msgSend(
    +[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"),
    "addAccessoryWithSerialNumber:info:",
    -[EAAccessory serialNumber](-[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory"), "serialNumber"),
    +[NSDictionary dictionaryWithDictionary:](&OBJC_CLASS___NSDictionary, "dictionaryWithDictionary:", v8));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}