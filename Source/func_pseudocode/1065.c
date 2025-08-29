-[AMPCapacityBarViewController setCapacityData:]
void __cdecl -[AMPCapacityBarViewController setCapacityData:](AMPCapacityBarViewController *self, SEL a2, id a3)
{
  id v4; // x20
  id v5; // x19
  _QWORD v6[5]; // [xsp+0h] [xbp-40h] BYREF
  id v7; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  objc_release(objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController view](self, "view")));
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_1000212C0;
  v6[3] = &unk_1000B9290;
  v6[4] = self;
  v7 = v4;
  v5 = objc_retain(v4);
  dispatch_async(&_dispatch_main_q, v6);
  objc_release(v7);
  objc_release(v5);
}