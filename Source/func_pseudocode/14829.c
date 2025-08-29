-[TBXPCService forceFetch3BarsNetworkMatchingBSSID:completionHandler:]
void __cdecl -[TBXPCService forceFetch3BarsNetworkMatchingBSSID:completionHandler:](
        TBXPCService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  OS_dispatch_queue *processingQueue; // x20
  id v9; // x19
  id v10; // x21
  _QWORD block[4]; // [xsp+10h] [xbp-50h] BYREF
  id v12; // [xsp+30h] [xbp-30h]
  id v13; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  NSLog(&CFSTR("%s:").isa, "-[TBXPCService forceFetch3BarsNetworkMatchingBSSID:completionHandler:]");
  processingQueue = self->_processingQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100002BB0;
  block[3] = &unk_100004178;
  v12 = v6;
  v13 = v7;
  v9 = objc_retain(v7);
  v10 = objc_retain(v6);
  dispatch_async((dispatch_queue_t)processingQueue, block);
  objc_release(v13);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}