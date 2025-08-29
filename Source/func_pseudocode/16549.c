-[UARPUpdateFirmwareAnalyticsEvent send]
void __cdecl -[UARPUpdateFirmwareAnalyticsEvent send](UARPUpdateFirmwareAnalyticsEvent *self, SEL a2)
{
  _QWORD v2[5]; // [xsp+8h] [xbp-28h] BYREF

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 3254779904LL;
  v2[2] = sub_1000155AC;
  v2[3] = &unk_100031A48;
  v2[4] = self;
  AnalyticsSendEventLazy(CFSTR("com.apple.aud.uarp.UpdateFirmware"), v2);
}