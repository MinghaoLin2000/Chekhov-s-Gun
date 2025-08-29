-[DeviceSettingsAudiobooksViewController loadAudiobookCheckedItemsModel]
void __cdecl -[DeviceSettingsAudiobooksViewController loadAudiobookCheckedItemsModel](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  void *v3; // x20
  NSMutableDictionary *v4; // x21
  void *v5; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Audiobooks"));
  objc_release(v4);
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  -[DeviceSettingsAudiobooksViewController setAudiobooksDetailsCheckedItems:](
    self,
    "setAudiobooksDetailsCheckedItems:",
    v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsAudiobooksViewController revertAudiobookCheckedItemsModel](self, "revertAudiobookCheckedItemsModel");
}