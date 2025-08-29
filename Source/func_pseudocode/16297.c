-[AUDeveloperSettingsDatabase removeAccessoryWithSerialNumber:]
void __cdecl -[AUDeveloperSettingsDatabase removeAccessoryWithSerialNumber:](
        AUDeveloperSettingsDatabase *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSDictionary *v5; // x21
  void *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[AUDeveloperSettingsDatabase accessoriesDictionary](self, "accessoriesDictionary"));
  v6 = -[NSDictionary mutableCopy](v5, "mutableCopy");
  objc_release(v5);
  objc_msgSend(v6, "removeObjectForKey:", v4);
  objc_release(v4);
  -[AUDeveloperSettingsDatabase setAccessoriesDictionary:](self, "setAccessoriesDictionary:", v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}