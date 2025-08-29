-[TBXPCService maintenanceTask:location:predictedForDuration:maxPredictedLocations:completionHandler:]
void __cdecl -[TBXPCService maintenanceTask:location:predictedForDuration:maxPredictedLocations:completionHandler:](
        TBXPCService *self,
        SEL a2,
        unsigned __int64 a3,
        id a4,
        double a5,
        unsigned __int64 a6,
        id a7)
{
  id v12; // x23
  id v13; // x19
  OS_dispatch_queue *processingQueue; // x24
  id v15; // x20
  id v16; // x19
  _QWORD block[5]; // [xsp+20h] [xbp-90h] BYREF
  id v18; // [xsp+48h] [xbp-68h]
  id v19; // [xsp+50h] [xbp-60h]
  unsigned __int64 v20; // [xsp+58h] [xbp-58h]
  double v21; // [xsp+60h] [xbp-50h]
  unsigned __int64 v22; // [xsp+68h] [xbp-48h]

  v12 = objc_retain(a4);
  v13 = objc_retain(a7);
  NSLog(
    &CFSTR("%s: sizeLimit = %ld, duration = %f, maxLocations = %lu").isa,
    "-[TBXPCService maintenanceTask:location:predictedForDuration:maxPredictedLocations:completionHandler:]",
    a3,
    *(_QWORD *)&a5,
    a6);
  self->_isCancelled = 0;
  processingQueue = self->_processingQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100002324;
  block[3] = &unk_1000040D8;
  v19 = v13;
  v20 = a3;
  block[4] = self;
  v18 = v12;
  v21 = a5;
  v22 = a6;
  v15 = objc_retain(v12);
  v16 = objc_retain(v13);
  dispatch_async((dispatch_queue_t)processingQueue, block);
  objc_release(v18);
  objc_release(v19);
  objc_release(v15);
  objc_release(v16);
}