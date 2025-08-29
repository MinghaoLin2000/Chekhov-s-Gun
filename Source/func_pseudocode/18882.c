-[SiriNCService presentAlertWithLaunchOptions:]
void __cdecl -[SiriNCService presentAlertWithLaunchOptions:](SiriNCService *self, SEL a2, id a3)
{
  id v5; // x21
  id v6; // x19
  __int64 v7; // x1
  _QWORD v8[5]; // [xsp+8h] [xbp-58h] BYREF
  id v9; // [xsp+30h] [xbp-30h]
  SEL v10; // [xsp+38h] [xbp-28h]

  v5 = objc_retain(a3);
  -[SiriNCService _updateAndSignpostAlertStateChange:](self, "_updateAndSignpostAlertStateChange:", 1LL);
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_10000765C;
  v8[3] = &unk_100020880;
  v9 = v5;
  v10 = a2;
  v8[4] = self;
  v6 = objc_retain(v5);
  SiriUIInvokeOnMainQueue(v8, v7);
  objc_release(v9);
  objc_release(v6);
}