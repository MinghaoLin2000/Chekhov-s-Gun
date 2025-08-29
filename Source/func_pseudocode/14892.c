-[FPCKService runFPCKWithPauseHandler:completionHandler:]
void __cdecl -[FPCKService runFPCKWithPauseHandler:completionHandler:](FPCKService *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x19
  OS_dispatch_queue *runQueue; // x22
  id v9; // x20
  id v10; // x19
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+30h] [xbp-30h]
  id v13; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  runQueue = self->_runQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000053A0;
  block[3] = &unk_1000083A0;
  v12 = v6;
  v13 = v7;
  block[4] = self;
  v9 = objc_retain(v6);
  v10 = objc_retain(v7);
  dispatch_async((dispatch_queue_t)runQueue, block);
  objc_release(v12);
  objc_release(v13);
  objc_release(v9);
  objc_release(v10);
}