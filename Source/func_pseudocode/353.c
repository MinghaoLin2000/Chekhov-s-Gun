-[DeviceSettingsRentalsTabContentViewController clickTrailingMoveButton:]
void __cdecl -[DeviceSettingsRentalsTabContentViewController clickTrailingMoveButton:](
        DeviceSettingsRentalsTabContentViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x20
  DeviceSettingsNode *v5; // x21
  DeviceSettingsNode *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "node"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingModel](self, "trailingModel"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  -[DeviceSettingsRentalsTabContentViewController moveNode:fromModel:toModel:](
    self,
    "moveNode:fromModel:toModel:",
    v4,
    v5,
    v6);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}