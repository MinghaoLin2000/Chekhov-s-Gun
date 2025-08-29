-[LocalProxyConnection cancel]
void __cdecl -[LocalProxyConnection cancel](LocalProxyConnection *self, SEL a2)
{
  dispatch_queue_s *queue; // x19
  _QWORD v4[4]; // [xsp+0h] [xbp-40h] BYREF
  id v5; // [xsp+20h] [xbp-20h] BYREF
  id location; // [xsp+28h] [xbp-18h] BYREF

  objc_initWeak(&location, self);
  queue = (dispatch_queue_s *)self->_queue;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10002A038;
  v4[3] = &unk_10009E0B8;
  objc_copyWeak(&v5, &location);
  dispatch_async(queue, v4);
  objc_destroyWeak(&v5);
  objc_destroyWeak(&location);
}