-[DeviceSettingsTabContentViewController setDisableAndCheckSelectedItems:]
void __cdecl -[DeviceSettingsTabContentViewController setDisableAndCheckSelectedItems:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_disableAndCheckSelectedItems, a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsTabContentViewController reloadData](self, "reloadData");
}