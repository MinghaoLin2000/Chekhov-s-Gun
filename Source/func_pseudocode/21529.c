-[LSRConnection logCoreAnalyticsEvent:withAnalytics:]
void __cdecl -[LSRConnection logCoreAnalyticsEvent:withAnalytics:](LSRConnection *self, SEL a2, id a3, id a4)
{
  id v5; // x20
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10003AED4;
  v6[3] = &unk_100059CB8;
  v7 = objc_retain(a4);
  v5 = objc_retain(v7);
  AnalyticsSendEventLazy(a3, v6);
  objc_release(v7);
  objc_release(v5);
}