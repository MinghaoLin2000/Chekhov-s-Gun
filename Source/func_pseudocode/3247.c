-[DeviceAutofillSettingsViewController saveToAutofillPrefs:]
void __cdecl -[DeviceAutofillSettingsViewController saveToAutofillPrefs:](
        DeviceAutofillSettingsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSButton *v5; // x21
  NSButton *v6; // x21
  NSButton *v7; // x21
  NSSlider *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController replaceAllItemsCheckBox](self, "replaceAllItemsCheckBox"));
  objc_msgSend(v4, "setAutoFillReplaceSongs:", (void *)-[NSButton state](v5, "state") == (void *)1);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController chooseRandomlyCheckBox](self, "chooseRandomlyCheckBox"));
  objc_msgSend(v4, "setAutoFillRandomSongs:", (void *)-[NSButton state](v6, "state") == (void *)1);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController chooseHigherRatedCheckBox](self, "chooseHigherRatedCheckBox"));
  objc_msgSend(v4, "setAutoFillHigherRatedSongs:", (void *)-[NSButton state](v7, "state") == (void *)1);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController diskSpaceSlider](self, "diskSpaceSlider"));
  objc_msgSend(v4, "setAutoFillReserveFreeBytes:", -[NSSlider integerValue](v8, "integerValue"));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}