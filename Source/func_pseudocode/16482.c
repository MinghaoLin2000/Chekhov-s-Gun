_getInfoForAccessory
id __fastcall getInfoForAccessory(void *a1)
{
  id v1; // x20
  id v2; // x19
  void *v3; // x21
  void *v4; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(+[AUDeveloperSettingsDatabase sharedDatabase](&OBJC_CLASS___AUDeveloperSettingsDatabase, "sharedDatabase"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "accessoriesDictionary"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "objectForKeyedSubscript:", v1));
  objc_release(v1);
  objc_release(v3);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}