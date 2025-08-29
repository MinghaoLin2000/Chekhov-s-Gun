-[AMRemoteActionExecution initWithRunner:runActionOperation:allOperations:runningAsynchronously:xpcCompletionHandler:overallCompletionHandler:]
AMRemoteActionExecution *__cdecl -[AMRemoteActionExecution initWithRunner:runActionOperation:allOperations:runningAsynchronously:xpcCompletionHandler:overallCompletionHandler:](
        AMRemoteActionExecution *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6,
        id a7,
        id a8)
{
  id v15; // x20
  id v16; // x21
  id v17; // x22
  id v18; // x26
  AMRemoteActionExecution *v19; // x0
  AMRemoteActionExecution *v20; // x24
  id v21; // x0
  id xpcCompletionHandler; // x8
  id v23; // x0
  id overallCompletionHandler; // x8
  id v26; // [xsp+8h] [xbp-68h]
  objc_super v27; // [xsp+10h] [xbp-60h] BYREF

  v26 = objc_retain(a3);
  v15 = objc_retain(a4);
  v16 = objc_retain(a5);
  v17 = objc_retain(a7);
  v18 = objc_retain(a8);
  v27.receiver = self;
  v27.super_class = (Class)&OBJC_CLASS___AMRemoteActionExecution;
  v19 = -[AMRemoteActionExecution init](&v27, "init");
  v20 = v19;
  if ( v19 )
  {
    objc_storeStrong((id *)&v19->_runner, a3);
    objc_storeStrong((id *)&v20->_runActionOperation, a4);
    objc_storeStrong((id *)&v20->_allOperations, a5);
    v20->_runningAysnchronously = a6;
    v21 = objc_retainBlock(v17);
    xpcCompletionHandler = v20->_xpcCompletionHandler;
    v20->_xpcCompletionHandler = v21;
    objc_release(xpcCompletionHandler);
    v23 = objc_retainBlock(v18);
    overallCompletionHandler = v20->_overallCompletionHandler;
    v20->_overallCompletionHandler = v23;
    objc_release(overallCompletionHandler);
  }
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v26);
  return v20;
}