_cleanupPersonalizedUpdateAvailable
void __fastcall cleanupPersonalizedUpdateAvailable(void *a1)
{
  id v1; // x20
  id v2; // x19
  void *v3; // x22
  void *v4; // x23
  void *v5; // x21
  id v6; // x22
  NSDictionary *v7; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "accessoriesDictionary"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKey:", v1));
  v5 = objc_msgSend(v4, "mutableCopy");
  objc_release(v4);
  objc_release(v3);
  objc_msgSend(v5, "setObject:forKeyedSubscript:", 0LL, CFSTR("downloadedVersion"));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", 0LL, CFSTR("personalizationRequired"));
  v6 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSDictionary dictionaryWithDictionary:](&OBJC_CLASS___NSDictionary, "dictionaryWithDictionary:", v5));
  objc_msgSend(v6, "addAccessoryWithSerialNumber:info:", v1, v7);
  objc_release(v1);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}