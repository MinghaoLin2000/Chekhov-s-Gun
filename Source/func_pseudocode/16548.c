-[UARPUpdateFirmwareAnalyticsEvent dealloc]
void __cdecl -[UARPUpdateFirmwareAnalyticsEvent dealloc](UARPUpdateFirmwareAnalyticsEvent *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->_manufacturerName);
  objc_release(self->_modelName);
  objc_release(self->_activeFirmwareVersion);
  objc_release(self->_countryCode);
  objc_release(self->_postedFirmwareVersion);
  objc_release(self->_downloadURL);
  objc_release(self->_downloadConsentDuration);
  objc_release(self->_downloadUserInitiated);
  objc_release(self->_stagingUserInitiated);
  objc_release(self->_stagingDuration);
  objc_release(self->_stagingIterations);
  objc_release(self->_stagingVendorError);
  objc_release(self->_applyUserInitiated);
  objc_release(self->_applyDuration);
  objc_release(self->_applyVendorError);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___UARPUpdateFirmwareAnalyticsEvent;
  -[UARPUpdateFirmwareAnalyticsEvent dealloc](&v3, "dealloc");
}