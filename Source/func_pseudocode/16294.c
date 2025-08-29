-[AUDeveloperSettingsDatabase urlLocationTypeForAccessory:]
unsigned __int64 __cdecl -[AUDeveloperSettingsDatabase urlLocationTypeForAccessory:](
        AUDeveloperSettingsDatabase *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSDictionary *v5; // x19
  id v6; // x21
  void *v7; // x20
  unsigned __int64 v8; // x22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[AUDeveloperSettingsDatabase accessoriesDictionary](self, "accessoriesDictionary"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", v4));
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectForKeyedSubscript:", CFSTR("assetLocation")));
  v8 = AUDeveloperSettingsURLStringToType();
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  return v8;
}