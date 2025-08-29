-[QLSatellite handleMessage:]
void __cdecl -[QLSatellite handleMessage:](QLSatellite *self, SEL a2, id a3)
{
  id v4; // x0
  OS_dispatch_queue *queue; // x20
  id v6; // x19
  _QWORD v7[4]; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+20h] [xbp-20h]
  QLSatellite *v9; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  queue = self->_queue;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100005660;
  v7[3] = &unk_100008450;
  v8 = v4;
  v9 = self;
  v6 = objc_retain(v4);
  ql_dispatch_async(queue, v7);
  objc_release(v8);
  objc_release(v6);
}