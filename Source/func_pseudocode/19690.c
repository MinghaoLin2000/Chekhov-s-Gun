-[IPPSessionTransaction writeDocumentDataBlocking:length:]
id __cdecl -[IPPSessionTransaction writeDocumentDataBlocking:length:](
        IPPSessionTransaction *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  dispatch_semaphore_t v7; // x0
  dispatch_queue_s *taskQueue; // x22
  dispatch_semaphore_s *v9; // x19
  dispatch_time_t v10; // x0
  intptr_t v11; // x0
  __int64 *v12; // x8
  NSError *v13; // x0
  void *v14; // x8
  id v15; // x20
  _QWORD block[5]; // [xsp+8h] [xbp-A8h] BYREF
  id v18; // [xsp+30h] [xbp-80h]
  __int64 *v19; // [xsp+38h] [xbp-78h]
  const char *v20; // [xsp+40h] [xbp-70h]
  unsigned __int64 v21; // [xsp+48h] [xbp-68h]
  __int64 v22; // [xsp+50h] [xbp-60h] BYREF
  __int64 *v23; // [xsp+58h] [xbp-58h]
  __int64 v24; // [xsp+60h] [xbp-50h]
  __int64 (__fastcall *v25)(); // [xsp+68h] [xbp-48h]
  __int64 (__fastcall *v26)(); // [xsp+70h] [xbp-40h]
  id v27; // [xsp+78h] [xbp-38h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v22 = 0LL;
  v23 = &v22;
  v24 = 0x3032000000LL;
  v25 = sub_100008B18;
  v26 = sub_100008B28;
  v27 = 0LL;
  v7 = dispatch_semaphore_create(0LL);
  taskQueue = (dispatch_queue_s *)self->_taskQueue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100008B30;
  block[3] = &unk_100091048;
  v19 = &v22;
  v20 = a3;
  block[4] = self;
  v21 = a4;
  v9 = objc_retain(v7);
  v18 = v9;
  dispatch_async(taskQueue, block);
  v10 = dispatch_time(0LL, 30000000000LL);
  v11 = dispatch_semaphore_wait(v9, v10);
  v12 = v23;
  if ( v11 && !v23[5] )
  {
    v13 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSURLErrorDomain,
              -1001LL,
              0LL));
    v14 = (void *)v23[5];
    v23[5] = (__int64)v13;
    objc_release(v14);
    v12 = v23;
  }
  v15 = objc_retain((id)v12[5]);
  objc_release(v18);
  objc_release(v9);
  _Block_object_dispose(&v22, 8);
  objc_release(v27);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}