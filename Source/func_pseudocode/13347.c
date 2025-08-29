-[TSUZipWriter addBarrier:]
void __cdecl -[TSUZipWriter addBarrier:](TSUZipWriter *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  dispatch_queue_s *writeQueue; // x21
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  id v8; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( v4 )
  {
    writeQueue = (dispatch_queue_s *)self->_writeQueue;
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_1001544E0;
    v7[3] = &unk_1001D19E0;
    v7[4] = self;
    v8 = objc_retain(v4);
    dispatch_async(writeQueue, v7);
    objc_release(v8);
  }
  objc_release(v5);
}