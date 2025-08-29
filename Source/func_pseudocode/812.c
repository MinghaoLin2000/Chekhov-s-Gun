-[DeviceSettingsViewController switchHomeLibraryInformativeTextFormat]
id __cdecl -[DeviceSettingsViewController switchHomeLibraryInformativeTextFormat](
        DeviceSettingsViewController *self,
        SEL a2)
{
  AMPDevice *v3; // x20
  unsigned __int8 v4; // w21
  const __CFString *v5; // x19
  AMPDeviceInfo *v6; // x19
  unsigned int v7; // w20
  NSBundle *v8; // x20
  NSString *v9; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v4 = (unsigned __int8)-[AMPDevice isIOSDeviceType](v3, "isIOSDeviceType");
  objc_release(v3);
  if ( (v4 & 1) != 0 )
  {
    v5 = CFSTR("SwitchIOSMusicHomeLibraryExplanation");
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v7 = (unsigned int)-[AMPDeviceInfo supportsVideo](v6, "supportsVideo");
    objc_release(v6);
    if ( v7 )
      v5 = CFSTR("SwitchMusicAndVideosHomeLibraryExplanation");
    else
      v5 = CFSTR("SwitchMusicHomeLibraryExplanation");
  }
  v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v8,
           "localizedStringForKey:value:table:",
           v5,
           &stru_1000BA220,
           0LL));
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}