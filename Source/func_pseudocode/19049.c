-[SiriNCAlertViewController didLockDevice:]
void __cdecl -[SiriNCAlertViewController didLockDevice:](SiriNCAlertViewController *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  _QWORD v6[5]; // [xsp+8h] [xbp-48h] BYREF
  id v7; // [xsp+30h] [xbp-20h] BYREF
  id location; // [xsp+38h] [xbp-18h] BYREF

  v4 = objc_retain(a3);
  objc_initWeak(&location, self);
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100011BE4;
  v6[3] = &unk_100020970;
  v6[4] = self;
  objc_copyWeak(&v7, &location);
  SiriUIInvokeOnMainQueue(v6, v5);
  objc_destroyWeak(&v7);
  objc_destroyWeak(&location);
  objc_release(v4);
}