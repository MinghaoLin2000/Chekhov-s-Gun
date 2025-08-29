-[EAAccessoryUpdater getAssetLocation:]
id __cdecl -[EAAccessoryUpdater getAssetLocation:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  __int64 v5; // x0
  void *v6; // x21
  void *v7; // x3
  __int64 v8; // x21
  void *v9; // x3
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = AUDeveloperSettingsURLStringToType(objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("assetLocation")));
  if ( v5 == 5 )
  {
    v6 = objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("basejumperTrain"));
    v7 = objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("basejumperBuild"));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return -[EAAccessoryUpdater assetLocationForCustomBasejumperTrain:build:](
             self,
             "assetLocationForCustomBasejumperTrain:build:",
             v6,
             v7);
  }
  else
  {
    v8 = v5;
    if ( objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("basejumperBuild")) )
      v9 = 0LL;
    else
      v9 = objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("basejumperTrain"));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return -[EAAccessoryUpdater assetLocationForType:withTrain:](self, "assetLocationForType:withTrain:", v8, v9);
  }
}