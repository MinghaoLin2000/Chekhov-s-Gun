-[LocalSocketProxy withPort:]
void __cdecl -[LocalSocketProxy withPort:](LocalSocketProxy *self, SEL a2, id a3)
{
  id v4; // x20
  dispatch_queue_s *queue; // x19
  id v6; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v8; // [xsp+28h] [xbp-38h]
  id v9; // [xsp+30h] [xbp-30h] BYREF
  id location; // [xsp+38h] [xbp-28h] BYREF

  v4 = objc_retain(a3);
  objc_initWeak(&location, self);
  queue = (dispatch_queue_s *)self->_queue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100028C34;
  block[3] = &unk_10009E088;
  objc_copyWeak(&v9, &location);
  v8 = v4;
  v6 = objc_retain(v4);
  dispatch_async(queue, block);
  objc_release(v8);
  objc_release(v6);
  objc_destroyWeak(&v9);
  objc_destroyWeak(&location);
}