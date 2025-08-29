-[QLSatellite doneWithMessage:reply:]
void __cdecl -[QLSatellite doneWithMessage:reply:](QLSatellite *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x0
  OS_dispatch_queue *queue; // x19
  id v9; // x20
  id v10; // x21
  _QWORD v11[4]; // [xsp+0h] [xbp-50h] BYREF
  id v12; // [xsp+20h] [xbp-30h]
  id v13; // [xsp+28h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  queue = self->_queue;
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100003874;
  v11[3] = &unk_100008450;
  v12 = v6;
  v13 = v7;
  v9 = objc_retain(v7);
  v10 = objc_retain(v6);
  ql_dispatch_async(queue, v11);
  objc_release(v13);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}