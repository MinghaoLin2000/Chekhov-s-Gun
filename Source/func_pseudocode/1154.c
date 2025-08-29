-[DeviceSettingsPhotosViewController loadPeopleGroup:]
void __cdecl -[DeviceSettingsPhotosViewController loadPeopleGroup:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x22
  void *v5; // x19
  id v6; // x20
  NSMutableDictionary *v7; // x23
  NSMutableDictionary *v8; // x23
  AMPPhotoSyncPrefs *v9; // x23
  void *v10; // x24
  id v11; // x25
  NSMutableDictionary *v12; // x26
  NSMutableDictionary *v13; // x23
  void *v14; // x24
  void *v15; // x25
  NSMutableDictionary *v16; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v6 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsPhotosViewController deviceSettingsNodesWithPeopleGroup:loadingNodesLookup:](
           self,
           "deviceSettingsNodesWithPeopleGroup:loadingNodesLookup:",
           v4,
           v5));
  objc_release(v4);
  if ( objc_msgSend(v6, "count") )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v7, "setObject:forKeyedSubscript:", v6, CFSTR("People"));
    objc_release(v7);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v8, "setObject:forKeyedSubscript:", v5, CFSTR("People"));
    objc_release(v8);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController photoSyncPrefs](self, "photoSyncPrefs"));
    v10 = objc_retainAutoreleasedReturnValue(-[AMPPhotoSyncPrefs photosAppSelectedAlbums](v9, "photosAppSelectedAlbums"));
    v11 = objc_retainAutoreleasedReturnValue(
            -[DeviceSettingsPhotosViewController createCheckedItemsSetWithNodesLookup:photosAppSelectedAlbums:](
              self,
              "createCheckedItemsSetWithNodesLookup:photosAppSelectedAlbums:",
              v5,
              v10));
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v12, "setObject:forKeyedSubscript:", v11, CFSTR("People"));
    objc_release(v12);
    objc_release(v11);
    objc_release(v10);
    objc_release(v9);
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
    v14 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v13, "objectForKeyedSubscript:", CFSTR("People")));
    v15 = objc_msgSend(v14, "mutableCopy");
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController originalCheckedItems](self, "originalCheckedItems"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](v16, "setObject:forKeyedSubscript:", v15, CFSTR("People"));
    objc_release(v16);
    objc_release(v15);
    objc_release(v14);
    objc_release(v13);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}