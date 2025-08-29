-[TSPPackage setZipArchive:fileCoordinatorDelegate:]
void __cdecl -[TSPPackage setZipArchive:fileCoordinatorDelegate:](TSPPackage *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x0
  dispatch_queue_s *accessQueue; // x19
  id v9; // x20
  id v10; // x21
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+30h] [xbp-30h]
  id v13; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  accessQueue = (dispatch_queue_s *)self->_accessQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10002F4A8;
  block[3] = &unk_1001D30F0;
  block[4] = self;
  v12 = v6;
  v13 = v7;
  v9 = objc_retain(v7);
  v10 = objc_retain(v6);
  dispatch_async(accessQueue, block);
  objc_release(v13);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}