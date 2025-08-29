-[MouseCloudSettingsMediator registerKeys]
void __cdecl -[MouseCloudSettingsMediator registerKeys](MouseCloudSettingsMediator *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[MouseCloudSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("MouseOneFingerDoubleTap"),
    "oneFingerDoubleTap",
    "setOneFingerDoubleTap:");
  -[MouseCloudSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("MouseTwoFingerSwipe"),
    "twoFingerSwipe",
    "setTwoFingerSwipe:");
  -[MouseCloudSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("MouseTwoFingerDoubleTap"),
    "twoFingerDoubleTap",
    "setTwoFingerDoubleTap:");
  -[MouseCloudSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("MouseScrollMode"),
    "scrollMode",
    "setScrollMode:");
  -[MouseCloudSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("MouseMomentumScroll"),
    "momentumScroll",
    "setMomentumScroll:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[MouseCloudSettingsMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("MouseScrollSpeedRaw"),
    "scrollSpeedRaw",
    "setScrollSpeedRaw:");
}