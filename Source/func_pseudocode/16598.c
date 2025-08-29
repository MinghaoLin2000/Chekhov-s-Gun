-[UARPActiveFirmwareAnalyticsEvent updateWithAccessoryID:]
void __cdecl -[UARPActiveFirmwareAnalyticsEvent updateWithAccessoryID:](
        UARPActiveFirmwareAnalyticsEvent *self,
        SEL a2,
        id a3)
{
  void *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[UARPActiveFirmwareAnalyticsEvent setManufacturerName:](
    self,
    "setManufacturerName:",
    objc_msgSend(a3, "manufacturer"));
  -[UARPActiveFirmwareAnalyticsEvent setModelName:](self, "setModelName:", objc_msgSend(a3, "modelAnalytics"));
  -[UARPActiveFirmwareAnalyticsEvent setCountryCode:](self, "setCountryCode:", objc_msgSend(a3, "countryCode"));
  -[UARPActiveFirmwareAnalyticsEvent setActiveFirmwareVersion:](
    self,
    "setActiveFirmwareVersion:",
    objc_msgSend(a3, "firmwareVersion"));
  -[UARPActiveFirmwareAnalyticsEvent setTransport:](self, "setTransport:", objc_msgSend(a3, "transport"));
  v5 = objc_msgSend(a3, "shareAnalyticsEventsWithThirdParty");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[UARPActiveFirmwareAnalyticsEvent setShare3rdParty:](self, "setShare3rdParty:", v5);
}