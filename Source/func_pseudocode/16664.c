-[EAAccessoryUpdater personalizationResponse:response:status:]
void __cdecl -[EAAccessoryUpdater personalizationResponse:response:status:](
        EAAccessoryUpdater *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  EAFirmwareUpdater *firmwareUpdater; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater personalizationResponse:response:status:]",
    1163LL);
  firmwareUpdater = self->firmwareUpdater;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[EAFirmwareUpdater personalizationResponse:error:](firmwareUpdater, "personalizationResponse:error:", a4, a5);
}