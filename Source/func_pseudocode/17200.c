-[AMLoaderServiceAction remoteActionRunSynchronouslyWithInput:fromAction:runtimeParameters:currentRunUUID:completionHandler:]
void __cdecl -[AMLoaderServiceAction remoteActionRunSynchronouslyWithInput:fromAction:runtimeParameters:currentRunUUID:completionHandler:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v12; // x19
  id v13; // x20
  id v14; // x22
  id v15; // x23
  NSAssertionHandler *v16; // x25
  _QWORD v17[5]; // [xsp+8h] [xbp-A8h] BYREF
  _QWORD v18[6]; // [xsp+30h] [xbp-80h] BYREF

  v12 = objc_retain(a7);
  v13 = objc_retain(a6);
  v14 = objc_retain(a5);
  v15 = objc_retain(a3);
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v16,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      325LL,
      CFSTR("Should not be called on main thread!"));
    objc_release(v16);
  }
  v18[0] = _NSConcreteStackBlock;
  v18[1] = 3254779904LL;
  v18[2] = sub_10000B5F4;
  v18[3] = &unk_10001C6F8;
  v18[4] = self;
  v18[5] = a2;
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v18);
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 3254779904LL;
  v17[2] = sub_10000B6D0;
  v17[3] = &unk_10001C728;
  v17[4] = self;
  -[AMLoaderServiceAction _runActionWithInput:fromAction:runtimeParameters:currentRunUUID:asynchronously:xpcCompletionHandler:overallCompletionHandler:](
    self,
    "_runActionWithInput:fromAction:runtimeParameters:currentRunUUID:asynchronously:xpcCompletionHandler:overallCompletionHandler:",
    v15,
    0LL,
    v14,
    v13,
    0LL,
    v12,
    v17);
  objc_release(v12);
  objc_release(v13);
  objc_release(v14);
  objc_release(v15);
}