-[TSPCompressionComponentWriteChannel close]
void __cdecl -[TSPCompressionComponentWriteChannel close](TSPCompressionComponentWriteChannel *self, SEL a2)
{
  dispatch_queue_s *writeQueue; // x8
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF

  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100057780;
  block[3] = &unk_1001D1A40;
  block[4] = self;
  dispatch_sync(writeQueue, block);
}