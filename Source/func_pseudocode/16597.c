-[UARPActiveFirmwareAnalyticsEvent send]
void __cdecl -[UARPActiveFirmwareAnalyticsEvent send](UARPActiveFirmwareAnalyticsEvent *self, SEL a2)
{
  _QWORD v2[5]; // [xsp+8h] [xbp-28h] BYREF

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 3254779904LL;
  v2[2] = sub_10001624C;
  v2[3] = &unk_100031A48;
  v2[4] = self;
  AnalyticsSendEventLazy(CFSTR("com.apple.aud.uarp.ActiveFirmware"), v2);
}