-[DeviceSettingsPhotosViewController updateSourceExplanationStringIfOptimizeStorageEnabled]
void __cdecl -[DeviceSettingsPhotosViewController updateSourceExplanationStringIfOptimizeStorageEnabled](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  _BOOL8 v3; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = -[DeviceSettingsPhotosViewController isOptimizeStorageEnabled](self, "isOptimizeStorageEnabled");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceSettingsPhotosViewController setupSourceExplanationStringWithOptionalOptimizeStorageExplanation:](
    self,
    "setupSourceExplanationStringWithOptionalOptimizeStorageExplanation:",
    v3);
}