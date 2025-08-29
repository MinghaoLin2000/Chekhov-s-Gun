-[TBXPCService fetch3BarsNetworksForLocation:]
void __cdecl -[TBXPCService fetch3BarsNetworksForLocation:](TBXPCService *self, SEL a2, id a3)
{
  id v4; // x20
  OS_dispatch_queue *processingQueue; // x19
  id v6; // x20
  _QWORD block[4]; // [xsp+8h] [xbp-38h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  NSLog(&CFSTR("%s:").isa, "-[TBXPCService fetch3BarsNetworksForLocation:]");
  processingQueue = self->_processingQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000293C;
  block[3] = &unk_100004128;
  v8 = v4;
  v6 = objc_retain(v4);
  dispatch_async((dispatch_queue_t)processingQueue, block);
  objc_release(v8);
  objc_release(v6);
}