-[EAAccessoryUpdater encodeWithCoder:]
void __cdecl -[EAAccessoryUpdater encodeWithCoder:](EAAccessoryUpdater *self, SEL a2, id a3)
{
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater encodeWithCoder:]",
    1434LL);
  objc_msgSend(a3, "encodeObject:forKey:", self->deviceClass, CFSTR("DeviceClass"));
  objc_msgSend(a3, "encodeObject:forKey:", self->mobileAssetType, self->mobileAssetType);
  if ( self->initOptions )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_msgSend(a3, "encodeObject:forKey:");
  }
}