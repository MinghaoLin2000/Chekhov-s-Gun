-[DeviceSettingsPhotosViewController fileEventObserver:didProcessEvent:]
void __cdecl -[DeviceSettingsPhotosViewController fileEventObserver:didProcessEvent:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[DeviceSettingsPhotosViewController setModelLoaded:forSource:](self, "setModelLoaded:forSource:", 0LL, 2LL);
  -[DeviceSettingsPhotosViewController loadTabViewForSource:](self, "loadTabViewForSource:", 2LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsPhotosViewController updateTabView](self, "updateTabView");
}