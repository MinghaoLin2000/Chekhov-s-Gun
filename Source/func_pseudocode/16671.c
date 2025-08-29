-[EAAccessoryUpdater allowConditionalDownloadOnCellular]
void __cdecl -[EAAccessoryUpdater allowConditionalDownloadOnCellular](EAAccessoryUpdater *self, SEL a2)
{
  NSDictionary *deviceOptions; // x0
  __int64 v4; // x1
  EAFirmwareUpdater *firmwareUpdater; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  deviceOptions = self->deviceOptions;
  if ( deviceOptions
    && (unsigned int)objc_msgSend(
                       -[NSDictionary objectForKey:](deviceOptions, "objectForKey:", CFSTR("NeedsMADownloadOnCellular")),
                       "boolValue")
    && ((MGGetBoolAnswer(CFSTR("InternalBuild"), v4) & 1) != 0
     || !-[EAAccessoryUpdater isRoamingEnabled](self, "isRoamingEnabled")) )
  {
    -[FudPluginDelegate log:format:](
      self->delegate,
      "log:format:",
      7LL,
      CFSTR("%s: MA Download On cellular allowed for %@"),
      "-[EAAccessoryUpdater allowConditionalDownloadOnCellular]",
      self->deviceClass);
    firmwareUpdater = self->firmwareUpdater;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[EAFirmwareUpdater setDownloadOnCellularAllowed:](firmwareUpdater, "setDownloadOnCellularAllowed:", 1LL);
  }
}