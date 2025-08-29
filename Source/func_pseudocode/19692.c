-[IPPSessionTransaction finishedWriting]
void __cdecl -[IPPSessionTransaction finishedWriting](IPPSessionTransaction *self, SEL a2)
{
  dispatch_queue_s *taskQueue; // x8
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  taskQueue = (dispatch_queue_s *)self->_taskQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100008D94;
  block[3] = &unk_100091078;
  block[4] = self;
  dispatch_async(taskQueue, block);
}