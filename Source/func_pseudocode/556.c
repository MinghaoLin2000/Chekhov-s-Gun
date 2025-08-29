-[DeviceSettingsDetailsTabContentViewController trailingOutlineView]
DeviceSettingsTabContentOutlineView *__cdecl -[DeviceSettingsDetailsTabContentViewController trailingOutlineView](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2)
{
  id WeakRetained; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  WeakRetained = objc_loadWeakRetained((id *)&self->_trailingOutlineView);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (DeviceSettingsTabContentOutlineView *)objc_autoreleaseReturnValue(WeakRetained);
}