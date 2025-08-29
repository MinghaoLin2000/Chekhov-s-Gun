-[DeviceSettingsViewController deviceCapabilities]
unsigned __int64 __cdecl -[DeviceSettingsViewController deviceCapabilities](DeviceSettingsViewController *self, SEL a2)
{
  AMPDeviceInfo *v2; // x19
  unsigned __int64 v3; // x20

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( (unsigned int)-[AMPDeviceInfo supportsVideo](v2, "supportsVideo") )
    v3 = 3LL;
  else
    v3 = 1LL;
  if ( (unsigned int)-[AMPDeviceInfo supportsAudiobooks](v2, "supportsAudiobooks") )
    v3 |= 4uLL;
  if ( (unsigned int)-[AMPDeviceInfo supportsPlaylistFolders](v2, "supportsPlaylistFolders") )
    v3 |= 8uLL;
  if ( (unsigned int)-[AMPDeviceInfo supportsDigitalBooklets](v2, "supportsDigitalBooklets") )
    v3 |= 0x10uLL;
  if ( (unsigned int)-[AMPDeviceInfo supportsSupplementalPDFs](v2, "supportsSupplementalPDFs") )
    v3 |= 0x20uLL;
  objc_release(v2);
  return v3;
}