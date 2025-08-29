-[DeviceSettingsPhotosViewController loadTabViewItemWithIdentifier:]
void __cdecl -[DeviceSettingsPhotosViewController loadTabViewItemWithIdentifier:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSDictionary *v5; // x21
  id v6; // x22
  NSTabView *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsPhotosViewController savedTabViewItemsLookupDictionary](
           self,
           "savedTabViewItemsLookupDictionary"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v5, "objectForKeyedSubscript:", v4));
  objc_release(v4);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
  -[NSTabView addTabViewItem:](v7, "addTabViewItem:", v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}