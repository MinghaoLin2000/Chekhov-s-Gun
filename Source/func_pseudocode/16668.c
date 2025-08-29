-[EAAccessoryUpdater shouldUpdateBeSilent:]
bool __cdecl -[EAAccessoryUpdater shouldUpdateBeSilent:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  EAFirmwareUpdater *firmwareUpdater; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater shouldUpdateBeSilent:]",
    1268LL);
  firmwareUpdater = self->firmwareUpdater;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[EAFirmwareUpdater forceSilentUpdate](firmwareUpdater, "forceSilentUpdate");
}