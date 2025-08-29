-[DeviceWarrantyViewController titleText]
id __cdecl -[DeviceWarrantyViewController titleText](DeviceWarrantyViewController *self, SEL a2)
{
  void *v3; // x20
  unsigned __int64 v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = (void *)objc_opt_class(self);
  v4 = -[DeviceWarrantyViewController deviceType](self, "deviceType");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v3, "deviceStringForDeviceType:forStringParameterizedKey:", v4, CFSTR("%@ Warranty Information"));
}