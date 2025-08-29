-[SiriNCService _startSCDAAdvertisingWithRequestOptions:]
void __cdecl -[SiriNCService _startSCDAAdvertisingWithRequestOptions:](SiriNCService *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  _QWORD v6[4]; // [xsp+0h] [xbp-40h] BYREF
  id v7; // [xsp+20h] [xbp-20h]
  SiriNCService *v8; // [xsp+28h] [xbp-18h]

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10000A964;
  v6[3] = &unk_1000209D0;
  v7 = objc_retain(a3);
  v8 = self;
  v4 = objc_retain(v7);
  SiriUIInvokeOnMainQueue(v6, v5);
  objc_release(v7);
  objc_release(v4);
}