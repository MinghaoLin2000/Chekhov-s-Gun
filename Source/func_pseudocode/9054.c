-[TSPPackageWriter setError:]
void __cdecl -[TSPPackageWriter setError:](TSPPackageWriter *self, SEL a2, id a3)
{
  id v4; // x0
  void *v5; // x19
  dispatch_queue_s *errorQueue; // x21
  _QWORD v7[5]; // [xsp+0h] [xbp-50h] BYREF
  id v8; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = v4;
  if ( v4 )
  {
    errorQueue = (dispatch_queue_s *)self->_errorQueue;
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_100007494;
    v7[3] = &unk_1001D1228;
    v7[4] = self;
    v8 = objc_retain(v4);
    dispatch_async(errorQueue, v7);
    objc_release(v8);
  }
  objc_release(v5);
}