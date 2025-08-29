-[DeviceAutofillSettingsViewController loadUIFromPrefs]
void __cdecl -[DeviceAutofillSettingsViewController loadUIFromPrefs](
        DeviceAutofillSettingsViewController *self,
        SEL a2)
{
  AMPDeviceAutoFillPrefs *v3; // x20
  __int64 v4; // x21
  NSButton *v5; // x22
  AMPDeviceAutoFillPrefs *v6; // x20
  __int64 v7; // x21
  NSButton *v8; // x22
  AMPDeviceAutoFillPrefs *v9; // x20
  __int64 v10; // x21
  NSButton *v11; // x22
  NSBundle *v12; // x20
  NSString *v13; // x21
  NSTextField *v14; // x22
  AMPDeviceAutoFillPrefs *v15; // x22
  NSNumber *v16; // x21
  id v17; // x20
  NSTextField *v18; // x23
  AMPDeviceAutoFillPrefs *v19; // x22
  NSNumber *v20; // x21
  id v21; // x20
  NSTextField *v22; // x23
  NSSlider *v23; // x20
  AMPDeviceAutoFillPrefs *v24; // x20
  double v25; // d8
  NSSlider *v26; // x21
  AMPDeviceAutoFillPrefs *v27; // x20
  void *v28; // x21
  NSSlider *v29; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  if ( (unsigned int)-[DeviceAutofillSettingsViewController isViewLoaded](self, "isViewLoaded") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController autofillPrefs](self, "autofillPrefs"));
    v4 = (unsigned int)-[AMPDeviceAutoFillPrefs autoFillReplaceSongs](v3, "autoFillReplaceSongs");
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController replaceAllItemsCheckBox](self, "replaceAllItemsCheckBox"));
    -[NSButton setState:](v5, "setState:", v4);
    objc_release(v5);
    objc_release(v3);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController autofillPrefs](self, "autofillPrefs"));
    v7 = (unsigned int)-[AMPDeviceAutoFillPrefs autoFillRandomSongs](v6, "autoFillRandomSongs");
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController chooseRandomlyCheckBox](self, "chooseRandomlyCheckBox"));
    -[NSButton setState:](v8, "setState:", v7);
    objc_release(v8);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController autofillPrefs](self, "autofillPrefs"));
    v10 = (unsigned int)-[AMPDeviceAutoFillPrefs autoFillHigherRatedSongs](v9, "autoFillHigherRatedSongs");
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController chooseHigherRatedCheckBox](self, "chooseHigherRatedCheckBox"));
    -[NSButton setState:](v11, "setState:", v10);
    objc_release(v11);
    objc_release(v9);
    v12 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v13 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v12,
              "localizedStringForKey:value:table:",
              CFSTR("0 MB"),
              &stru_1000BA220,
              0LL));
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController diskSpaceMinimumTextField](self, "diskSpaceMinimumTextField"));
    -[NSTextField setStringValue:](v14, "setStringValue:", v13);
    objc_release(v14);
    objc_release(v13);
    objc_release(v12);
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController autofillPrefs](self, "autofillPrefs"));
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithUnsignedLongLong:](
              &OBJC_CLASS___NSNumber,
              "numberWithUnsignedLongLong:",
              -[AMPDeviceAutoFillPrefs autoFillTotalDiskBytes](v15, "autoFillTotalDiskBytes")));
    v17 = objc_retainAutoreleasedReturnValue(+[NSString storageSizeStringForFileSize:](&OBJC_CLASS___NSString, "storageSizeStringForFileSize:", v16));
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController diskSpaceMaximumTextField](self, "diskSpaceMaximumTextField"));
    -[NSTextField setStringValue:](v18, "setStringValue:", v17);
    objc_release(v18);
    objc_release(v17);
    objc_release(v16);
    objc_release(v15);
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController autofillPrefs](self, "autofillPrefs"));
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSNumber numberWithUnsignedLongLong:](
              &OBJC_CLASS___NSNumber,
              "numberWithUnsignedLongLong:",
              -[AMPDeviceAutoFillPrefs autoFillReserveFreeBytes](v19, "autoFillReserveFreeBytes")));
    v21 = objc_retainAutoreleasedReturnValue(+[NSString storageSizeStringForFileSize:](&OBJC_CLASS___NSString, "storageSizeStringForFileSize:", v20));
    v22 = objc_retainAutoreleasedReturnValue(
            -[DeviceAutofillSettingsViewController reserveSpaceForDiskUseValueTextField](
              self,
              "reserveSpaceForDiskUseValueTextField"));
    -[NSTextField setStringValue:](v22, "setStringValue:", v21);
    objc_release(v22);
    objc_release(v21);
    objc_release(v20);
    objc_release(v19);
    v23 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController diskSpaceSlider](self, "diskSpaceSlider"));
    -[NSSlider setMinValue:](v23, "setMinValue:", 0.0);
    objc_release(v23);
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController autofillPrefs](self, "autofillPrefs"));
    v25 = (double)(unsigned __int64)-[AMPDeviceAutoFillPrefs autoFillTotalDiskBytes](v24, "autoFillTotalDiskBytes");
    v26 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController diskSpaceSlider](self, "diskSpaceSlider"));
    -[NSSlider setMaxValue:](v26, "setMaxValue:", v25);
    objc_release(v26);
    objc_release(v24);
    v27 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController autofillPrefs](self, "autofillPrefs"));
    v28 = -[AMPDeviceAutoFillPrefs autoFillReserveFreeBytes](v27, "autoFillReserveFreeBytes");
    v29 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController diskSpaceSlider](self, "diskSpaceSlider"));
    -[NSSlider setIntegerValue:](v29, "setIntegerValue:", v28);
    objc_release(v29);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v27);
  }
}