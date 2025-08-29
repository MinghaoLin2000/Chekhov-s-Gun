-[UARPUpdateFirmwareAnalyticsEvent updateWithFrameworkParams:]
void __cdecl -[UARPUpdateFirmwareAnalyticsEvent updateWithFrameworkParams:](
        UARPUpdateFirmwareAnalyticsEvent *self,
        SEL a2,
        id a3)
{
  void *v5; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[UARPUpdateFirmwareAnalyticsEvent setStagingUserInitiated:](
    self,
    "setStagingUserInitiated:",
    objc_msgSend(a3, "stagingUserInitiated"));
  -[UARPUpdateFirmwareAnalyticsEvent setStagingDuration:](
    self,
    "setStagingDuration:",
    objc_msgSend(a3, "stagingDuration"));
  -[UARPUpdateFirmwareAnalyticsEvent setStagingIterations:](
    self,
    "setStagingIterations:",
    objc_msgSend(a3, "stagingIterations"));
  -[UARPUpdateFirmwareAnalyticsEvent setStagingStatus:](
    self,
    "setStagingStatus:",
    objc_msgSend(objc_msgSend(a3, "stagingStatus"), "integerValue"));
  -[UARPUpdateFirmwareAnalyticsEvent setStagingVendorError:](
    self,
    "setStagingVendorError:",
    objc_msgSend(a3, "stagingVendorError"));
  -[UARPUpdateFirmwareAnalyticsEvent setApplyUserInitiated:](
    self,
    "setApplyUserInitiated:",
    objc_msgSend(a3, "applyUserInitiated"));
  -[UARPUpdateFirmwareAnalyticsEvent setApplyDuration:](self, "setApplyDuration:", objc_msgSend(a3, "applyDuration"));
  -[UARPUpdateFirmwareAnalyticsEvent setApplyStatus:](
    self,
    "setApplyStatus:",
    objc_msgSend(objc_msgSend(a3, "applyStatus"), "integerValue"));
  v5 = objc_msgSend(a3, "applyVendorError");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[UARPUpdateFirmwareAnalyticsEvent setApplyVendorError:](self, "setApplyVendorError:", v5);
}