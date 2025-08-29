-[InternationalCloudMediator registerKeys]
void __cdecl -[InternationalCloudMediator registerKeys](InternationalCloudMediator *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[InternationalCloudMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("IP_Locale"),
    "locale",
    "setLocale:");
  -[InternationalCloudMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("IP_LiveText"),
    "liveText",
    "setLiveText:");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[InternationalCloudMediator registerKey:getter:setter:](
    self,
    "registerKey:getter:setter:",
    CFSTR("IP_Infection"),
    "inflection",
    "setInflection:");
}