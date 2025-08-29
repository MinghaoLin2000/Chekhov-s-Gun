-[DeviceAutofillSettingsViewController clickSlider:]
void __cdecl -[DeviceAutofillSettingsViewController clickSlider:](
        DeviceAutofillSettingsViewController *self,
        SEL a2,
        id a3)
{
  NSSlider *v4; // x20
  void *v5; // x21
  NSNumber *v6; // x21
  id v7; // x20
  NSTextField *v8; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController diskSpaceSlider](self, "diskSpaceSlider", a3));
  v5 = -[NSSlider integerValue](v4, "integerValue");
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", v5));
  v7 = objc_retainAutoreleasedReturnValue(+[NSString storageSizeStringForFileSize:](&OBJC_CLASS___NSString, "storageSizeStringForFileSize:", v6));
  v8 = objc_retainAutoreleasedReturnValue(
         -[DeviceAutofillSettingsViewController reserveSpaceForDiskUseValueTextField](
           self,
           "reserveSpaceForDiskUseValueTextField"));
  -[NSTextField setStringValue:](v8, "setStringValue:", v7);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}