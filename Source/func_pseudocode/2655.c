-[DeviceAutofillPlacardViewController clickSettingsButton:]
void __cdecl -[DeviceAutofillPlacardViewController clickSettingsButton:](
        DeviceAutofillPlacardViewController *self,
        SEL a2,
        id a3)
{
  AMPDeviceAutoFillPrefs *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillPlacardViewController autoFillPrefs](self, "autoFillPrefs", a3));
  -[DeviceAutofillPlacardViewController presentSettingsDialogForAutofillPrefs:](
    self,
    "presentSettingsDialogForAutofillPrefs:",
    v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}