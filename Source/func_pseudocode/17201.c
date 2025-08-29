-[AMLoaderServiceAction remoteActionRunAsynchronouslyWithInput:runtimeParameters:currentRunUUID:]
void __cdecl -[AMLoaderServiceAction remoteActionRunAsynchronouslyWithInput:runtimeParameters:currentRunUUID:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x22
  id v9; // x19
  id v10; // x20
  _QWORD v11[5]; // [xsp+8h] [xbp-88h] BYREF
  _QWORD v12[6]; // [xsp+30h] [xbp-60h] BYREF

  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_10000B840;
  v12[3] = &unk_10001C6F8;
  v12[4] = self;
  v12[5] = a2;
  v8 = objc_retain(a5);
  v9 = objc_retain(a4);
  v10 = objc_retain(a3);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v12);
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10000B8E0;
  v11[3] = &unk_10001C728;
  v11[4] = self;
  -[AMLoaderServiceAction _runActionWithInput:fromAction:runtimeParameters:currentRunUUID:asynchronously:xpcCompletionHandler:overallCompletionHandler:](
    self,
    "_runActionWithInput:fromAction:runtimeParameters:currentRunUUID:asynchronously:xpcCompletionHandler:overallCompletionHandler:",
    v10,
    0LL,
    v9,
    v8,
    1LL,
    0LL,
    v11);
  objc_release(v8);
  objc_release(v9);
  objc_release(v10);
}