-[EAAccessoryUpdater overrideUpdaterOptions]
void __cdecl -[EAAccessoryUpdater overrideUpdaterOptions](EAAccessoryUpdater *self, SEL a2)
{
  void *v3; // x0
  void *v4; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater overrideUpdaterOptions]",
    1314LL);
  v3 = copyPlistDeviceEntryFromDeviceClass(self->deviceClass);
  v4 = v3;
  if ( v3 )
  {
    if ( objc_msgSend(v3, "objectForKey:", CFSTR("closeEASession")) )
      -[EAFirmwareUpdater setCloseEASession:](
        self->firmwareUpdater,
        "setCloseEASession:",
        objc_msgSend(objc_msgSend(v4, "objectForKey:", CFSTR("closeEASession")), "boolValue"));
    if ( objc_msgSend(v4, "objectForKey:", CFSTR("dropboxPath")) )
      self->localFilePath = (NSString *)objc_retain(objc_msgSend(v4, "objectForKey:", CFSTR("dropboxPath")));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}