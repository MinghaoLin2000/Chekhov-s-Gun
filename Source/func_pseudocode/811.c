-[DeviceSettingsViewController switchHomeLibraryMessageTextFormat]
id __cdecl -[DeviceSettingsViewController switchHomeLibraryMessageTextFormat](
        DeviceSettingsViewController *self,
        SEL a2)
{
  AMPDevice *v3; // x20
  unsigned __int8 v4; // w21
  const __CFString *v5; // x2
  AMPDeviceInfo *v6; // x20
  unsigned int v7; // w21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v4 = (unsigned __int8)-[AMPDevice isIOSDeviceType](v3, "isIOSDeviceType");
  objc_release(v3);
  if ( (v4 & 1) != 0 )
  {
    v5 = CFSTR("SwitchIOSMusicHomeLibraryPrompt %@");
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v7 = (unsigned int)-[AMPDeviceInfo supportsVideo](v6, "supportsVideo");
    objc_release(v6);
    if ( v7 )
      v5 = CFSTR("SwitchMusicAndVideosHomeLibraryPrompt %@");
    else
      v5 = CFSTR("SwitchMusicHomeLibraryPrompt %@");
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[DeviceViewController deviceStringForStringParameterizedKey:](
           self,
           "deviceStringForStringParameterizedKey:",
           v5);
}