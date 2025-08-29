-[TSULogCatThreadSafeMutableSet addObject:]
void __cdecl -[TSULogCatThreadSafeMutableSet addObject:](TSULogCatThreadSafeMutableSet *self, SEL a2, id a3)
{
  id v4; // x0
  dispatch_queue_s *logCatQueue; // x20
  id v6; // x19
  _QWORD v7[5]; // [xsp+0h] [xbp-40h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  logCatQueue = (dispatch_queue_s *)self->_logCatQueue;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100139158;
  v7[3] = &unk_1001D53C8;
  v7[4] = self;
  v8 = v4;
  v6 = objc_retain(v4);
  dispatch_async(logCatQueue, v7);
  objc_release(v8);
  objc_release(v6);
}