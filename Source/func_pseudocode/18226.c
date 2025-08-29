-[OSLogService setUpWithPredicate:reply:]
void __cdecl -[OSLogService setUpWithPredicate:reply:](OSLogService *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x0
  OS_dispatch_queue *serial_queue; // x19
  id v9; // x20
  id v10; // x21
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+30h] [xbp-30h]
  id v13; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  serial_queue = self->_serial_queue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100002780;
  block[3] = &unk_1000041D0;
  block[4] = self;
  v12 = v6;
  v13 = v7;
  v9 = objc_retain(v7);
  v10 = objc_retain(v6);
  dispatch_sync((dispatch_queue_t)serial_queue, block);
  objc_release(v13);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}