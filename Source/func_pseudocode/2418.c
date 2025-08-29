-[DeviceSoftwareUpdatesViewController softwareVersionButton]
NSButton *__cdecl -[DeviceSoftwareUpdatesViewController softwareVersionButton](
        DeviceSoftwareUpdatesViewController *self,
        SEL a2)
{
  id WeakRetained; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  WeakRetained = objc_loadWeakRetained((id *)&self->_softwareVersionButton);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSButton *)objc_autoreleaseReturnValue(WeakRetained);
}