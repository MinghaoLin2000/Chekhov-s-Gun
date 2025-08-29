-[DeviceBackUpSettingsViewController didCompleteEraseForDeviceWithIdentifier:withError:]
void __cdecl -[DeviceBackUpSettingsViewController didCompleteEraseForDeviceWithIdentifier:withError:](
        DeviceBackUpSettingsViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  AMPDevice *v6; // x21
  void *v7; // x22
  unsigned int v8; // w23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v7 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceIdentifier](v6, "deviceIdentifier"));
  v8 = (unsigned int)objc_msgSend(v5, "isEqualToString:", v7);
  objc_release(v5);
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[DeviceBackUpSettingsViewController updateButtonStates](self, "updateButtonStates");
  }
}