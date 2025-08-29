-[TSUZipWriter setEntryInsertionOffset:]
void __cdecl -[TSUZipWriter setEntryInsertionOffset:](TSUZipWriter *self, SEL a2, signed __int64 a3)
{
  dispatch_queue_s *writeQueue; // x8
  _QWORD v4[6]; // [xsp+0h] [xbp-30h] BYREF

  writeQueue = (dispatch_queue_s *)self->_writeQueue;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100154414;
  v4[3] = &unk_1001DD780;
  v4[4] = self;
  v4[5] = a3;
  dispatch_sync(writeQueue, v4);
}