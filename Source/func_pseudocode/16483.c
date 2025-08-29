_configuredToDefaultAssetLocationForAccessory
bool __fastcall configuredToDefaultAssetLocationForAccessory(void *a1)
{
  id v1; // x20
  void *v2; // x19
  _BOOL4 v3; // w22
  void *v4; // x21
  __int64 v5; // x20

  v1 = objc_retain(a1);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "objectForKeyedSubscript:", CFSTR("fusing")));
  v3 = (AUDeveloperSettingsAccessoryFusingStringToType(v2) & 5) != 0;
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v1, "objectForKeyedSubscript:", CFSTR("assetLocation")));
  objc_release(v1);
  v5 = AUDeveloperSettingsURLStringToType(v4);
  objc_release(v4);
  objc_release(v2);
  return v5 == 2LL * v3;
}