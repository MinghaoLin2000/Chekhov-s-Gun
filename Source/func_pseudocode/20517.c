-[BrowseService stopBrowsing]
void __cdecl -[BrowseService stopBrowsing](BrowseService *self, SEL a2)
{
  BrowseService *v2; // x0
  dispatch_queue_s *queue; // x19
  BrowseService *v4; // x20
  _QWORD v5[5]; // [xsp+0h] [xbp-40h] BYREF
  id v6; // [xsp+28h] [xbp-18h]

  v2 = objc_retain(self);
  queue = (dispatch_queue_s *)v2->_queue;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_100063198;
  v5[3] = &unk_100091520;
  v5[4] = v2;
  v6 = v2;
  v4 = objc_retain(v2);
  dispatch_async(queue, v5);
  objc_release(v6);
  objc_release(v4);
}