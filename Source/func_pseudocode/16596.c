-[UARPActiveFirmwareAnalyticsEvent dealloc]
void __cdecl -[UARPActiveFirmwareAnalyticsEvent dealloc](UARPActiveFirmwareAnalyticsEvent *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->_manufacturerName);
  objc_release(self->_modelName);
  objc_release(self->_countryCode);
  objc_release(self->_downloadURL);
  objc_release(self->_activeFirmwareVersion);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___UARPActiveFirmwareAnalyticsEvent;
  -[UARPActiveFirmwareAnalyticsEvent dealloc](&v3, "dealloc");
}