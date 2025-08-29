-[DeviceSettingsBooksViewController loadBookAndPDFCheckedItemsModel]
void __cdecl -[DeviceSettingsBooksViewController loadBookAndPDFCheckedItemsModel](
        DeviceSettingsBooksViewController *self,
        SEL a2)
{
  void *v3; // x20
  NSMutableDictionary *v4; // x21
  NSMutableDictionary *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v4, "setObject:forKeyedSubscript:", v3, CFSTR("Books"));
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController checkedItems](self, "checkedItems"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v5, "setObject:forKeyedSubscript:", v3, CFSTR("PDFs"));
  objc_release(v5);
  -[DeviceSettingsBooksViewController revertBookAndPDFCheckedItemsModel](self, "revertBookAndPDFCheckedItemsModel");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}