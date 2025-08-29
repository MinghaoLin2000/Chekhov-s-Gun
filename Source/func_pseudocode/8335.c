-[StoreUIService presentAlertRequest:withResultHandler:]
void __cdecl -[StoreUIService presentAlertRequest:withResultHandler:](StoreUIService *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  _QWORD v7[4]; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+20h] [xbp-20h]
  id v9; // [xsp+28h] [xbp-18h]

  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100009E28;
  v7[3] = &unk_100010958;
  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v5 = objc_retain(v9);
  v6 = objc_retain(v8);
  dispatch_async(&_dispatch_main_q, v7);
  objc_release(v9);
  objc_release(v8);
  objc_release(v5);
  objc_release(v6);
}