-[OSLogService invalidate]
void __cdecl -[OSLogService invalidate](OSLogService *self, SEL a2)
{
  OS_dispatch_queue *serial_queue; // x8
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  serial_queue = self->_serial_queue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100001AD8;
  block[3] = &unk_100004290;
  block[4] = self;
  dispatch_sync((dispatch_queue_t)serial_queue, block);
}