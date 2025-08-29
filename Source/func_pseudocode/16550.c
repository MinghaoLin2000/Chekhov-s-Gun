-[UARPUpdateFirmwareAnalyticsEvent updateWithAccessoryID:assetID:]
void __cdecl -[UARPUpdateFirmwareAnalyticsEvent updateWithAccessoryID:assetID:](
        UARPUpdateFirmwareAnalyticsEvent *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v7; // x2
  __int64 vars8; // [xsp+28h] [xbp+8h]

  -[UARPUpdateFirmwareAnalyticsEvent setManufacturerName:](
    self,
    "setManufacturerName:",
    objc_msgSend(a3, "manufacturer"));
  -[UARPUpdateFirmwareAnalyticsEvent setModelName:](self, "setModelName:", objc_msgSend(a3, "modelAnalytics"));
  -[UARPUpdateFirmwareAnalyticsEvent setActiveFirmwareVersion:](
    self,
    "setActiveFirmwareVersion:",
    objc_msgSend(a3, "firmwareVersion"));
  -[UARPUpdateFirmwareAnalyticsEvent setTransport:](self, "setTransport:", objc_msgSend(a3, "transport"));
  -[UARPUpdateFirmwareAnalyticsEvent setCountryCode:](self, "setCountryCode:", objc_msgSend(a3, "countryCode"));
  -[UARPUpdateFirmwareAnalyticsEvent setPostedFirmwareVersion:](
    self,
    "setPostedFirmwareVersion:",
    objc_msgSend(a4, "assetVersion"));
  -[UARPUpdateFirmwareAnalyticsEvent setDownloadURL:](
    self,
    "setDownloadURL:",
    objc_msgSend(objc_msgSend(a4, "remoteURL"), "path"));
  v7 = objc_msgSend(a3, "shareAnalyticsEventsWithThirdParty");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[UARPUpdateFirmwareAnalyticsEvent setShare3rdParty:](self, "setShare3rdParty:", v7);
}