-[MediaConversionQueue scheduleQueueProcessing]
void __cdecl -[MediaConversionQueue scheduleQueueProcessing](MediaConversionQueue *self, SEL a2)
{
  OS_dispatch_queue *requestProcessingQueue; // x8
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  requestProcessingQueue = self->_requestProcessingQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100010264;
  block[3] = &unk_100041570;
  block[4] = self;
  dispatch_async((dispatch_queue_t)requestProcessingQueue, block);
}