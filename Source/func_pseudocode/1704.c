-[DeviceSettingsTabContentViewController clickAllCheckBox:]
void __cdecl -[DeviceSettingsTabContentViewController clickAllCheckBox:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsTabContentViewController setAllCheckBoxChecked:](
    self,
    "setAllCheckBoxChecked:",
    objc_msgSend(a3, "state") == (void *)1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsTabContentViewController postDidChangeAllState](self, "postDidChangeAllState");
}