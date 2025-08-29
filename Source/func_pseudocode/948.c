-[DeviceSettingsAudiobooksViewController loadAudiobookModel]
void __cdecl -[DeviceSettingsAudiobooksViewController loadAudiobookModel](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  NSMutableArray *v3; // x20
  NSMutableDictionary *v4; // x21
  NSMutableDictionary *v5; // x20
  NSMutableDictionary *v6; // x21
  NSMutableDictionary *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[DeviceSettingsAudiobooksViewController loadAudiobookProperties](self, "loadAudiobookProperties");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobookNodes](self, "audiobookNodes"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodes](self, "dataNodes"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Audiobooks"));
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobookNodesLookup](self, "audiobookNodesLookup"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController dataNodesLookup](self, "dataNodesLookup"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v6, "setObject:forKeyedSubscript:", v5, CFSTR("Audiobooks"));
  objc_release(v6);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobookParts](self, "audiobookParts"));
  -[DeviceSettingsAudiobooksViewController setAudiobooksDetailsModelDict:](self, "setAudiobooksDetailsModelDict:", v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}