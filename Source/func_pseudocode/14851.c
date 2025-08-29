-[MapRenderingService listener:shouldAcceptNewConnection:]
bool __cdecl -[MapRenderingService listener:shouldAcceptNewConnection:](
        MapRenderingService *self,
        SEL a2,
        id a3,
        id a4)
{
  dispatch_queue_s *mapRenderingWorker; // x21
  id v6; // x19
  _QWORD *v7; // x21
  NSXPCInterface *v8; // x20
  _QWORD v10[5]; // [xsp+0h] [xbp-80h] BYREF
  _QWORD block[5]; // [xsp+28h] [xbp-58h] BYREF

  mapRenderingWorker = (dispatch_queue_s *)self->_mapRenderingWorker;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000026CC;
  block[3] = &unk_100004120;
  block[4] = self;
  v6 = objc_retain(a4);
  dispatch_async(mapRenderingWorker, block);
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_1000026F0;
  v10[3] = &unk_100004120;
  v10[4] = self;
  v7 = objc_retainBlock(v10);
  objc_msgSend(v6, "setInvalidationHandler:", v7);
  objc_msgSend(v6, "setInterruptionHandler:", v7);
  objc_msgSend(v6, "setExportedObject:", self);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSXPCInterface interfaceWithProtocol:](
           &OBJC_CLASS___NSXPCInterface,
           "interfaceWithProtocol:",
           &OBJC_PROTOCOL___MapRenderingServiceProtocol));
  objc_msgSend(v6, "setExportedInterface:", v8);
  objc_release(v8);
  objc_msgSend(v6, "resume");
  objc_release(v6);
  objc_release(v7);
  return 1;
}