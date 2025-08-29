-[UARPDFUUpdater sendMessageToAccessory:uarpMsg:error:]
bool __cdecl -[UARPDFUUpdater sendMessageToAccessory:uarpMsg:error:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v7; // x21
  id v8; // x0
  OS_dispatch_queue *uarpMessageQueue; // x19
  id v10; // x20
  id v11; // x21
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF
  id v14; // [xsp+30h] [xbp-30h]
  id v15; // [xsp+38h] [xbp-28h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  uarpMessageQueue = self->_uarpMessageQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100007DE4;
  block[3] = &unk_100024390;
  block[4] = self;
  v14 = v7;
  v15 = v8;
  v10 = objc_retain(v8);
  v11 = objc_retain(v7);
  dispatch_async((dispatch_queue_t)uarpMessageQueue, block);
  objc_release(v15);
  objc_release(v14);
  objc_release(v10);
  objc_release(v11);
  return 1;
}