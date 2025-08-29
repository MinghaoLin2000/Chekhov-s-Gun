-[DeviceSettingsViewController setupTabViewItem:]
void __cdecl -[DeviceSettingsViewController setupTabViewItem:](DeviceSettingsViewController *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x22
  NSMutableDictionary *v7; // x24
  void *v8; // x25
  DeviceSettingsNode *v9; // x23
  NSMutableDictionary *v10; // x23
  void *v11; // x24
  NSMutableDictionary *v12; // x23
  void *v13; // x24
  NSImage *v14; // x23
  NSImage *v15; // x23
  NSImage *v16; // x23
  NSImage *v17; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  if ( (unsigned int)objc_msgSend(v6, "isEqualToString:", CFSTR("Playlists")) )
    objc_msgSend(v5, "setShouldPresentExtraImage:", 1LL);
  -[DeviceSettingsViewController setupCheckBoxesForTabViewItem:](self, "setupCheckBoxesForTabViewItem:", v4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  v8 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v7, "objectForKeyedSubscript:", v6));
  v9 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode nodeWithChildren:](&OBJC_CLASS___DeviceSettingsNode, "nodeWithChildren:", v8));
  objc_msgSend(v5, "setModel:", v9);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  v11 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v10, "objectForKeyedSubscript:", v6));
  objc_msgSend(v5, "setCheckedItems:", v11);
  objc_release(v11);
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  v13 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v12, "objectForKeyedSubscript:", v6));
  objc_msgSend(v5, "setIdentifyingObjectToNodeMap:", v13);
  objc_release(v13);
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController playlistImage](self, "playlistImage"));
  objc_msgSend(v5, "setPlaylistImage:", v14);
  objc_release(v14);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController smartPlaylistImage](self, "smartPlaylistImage"));
  objc_msgSend(v5, "setSmartPlaylistImage:", v15);
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController geniusPlaylistImage](self, "geniusPlaylistImage"));
  objc_msgSend(v5, "setGeniusPlaylistImage:", v16);
  objc_release(v16);
  v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController folderImage](self, "folderImage"));
  objc_msgSend(v5, "setFolderImage:", v17);
  objc_release(v17);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}