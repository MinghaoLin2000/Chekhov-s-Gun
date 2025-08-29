-[DeviceModeFinderViewController handleDeviceSoftwareUpdatesViewLoadingCompleteNotification:]
void __cdecl -[DeviceModeFinderViewController handleDeviceSoftwareUpdatesViewLoadingCompleteNotification:](
        DeviceModeFinderViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  void *v5; // x21
  void *v6; // x22
  unsigned int v7; // w23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "userInfo"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", CFSTR("deviceIdentifier")));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKey:", CFSTR("isSoftwareUpdateRestoreInProgress")));
  v7 = (unsigned int)objc_msgSend(v6, "boolValue");
  objc_release(v6);
  if ( v7 )
    -[DeviceModeFinderViewController didStartSoftwareUpdateRestoreForDeviceWithIdentifier:](
      self,
      "didStartSoftwareUpdateRestoreForDeviceWithIdentifier:",
      v5);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}