-[TSPMemoryReadChannel readWithHandler:]
void __cdecl -[TSPMemoryReadChannel readWithHandler:](TSPMemoryReadChannel *self, SEL a2, id a3)
{
  id v4; // x0
  dispatch_queue_s *readQueue; // x20
  id v6; // x19
  _QWORD v7[5]; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  readQueue = (dispatch_queue_s *)self->_readQueue;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100011204;
  v7[3] = &unk_1001D19E0;
  v7[4] = self;
  v8 = v4;
  v6 = objc_retain(v4);
  dispatch_async(readQueue, v7);
  objc_release(v8);
  objc_release(v6);
}