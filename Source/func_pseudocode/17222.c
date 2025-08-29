-[AMLoaderServiceAction _runActionWithInput:fromAction:runtimeParameters:currentRunUUID:asynchronously:xpcCompletionHandler:overallCompletionHandler:]
void __cdecl -[AMLoaderServiceAction _runActionWithInput:fromAction:runtimeParameters:currentRunUUID:asynchronously:xpcCompletionHandler:overallCompletionHandler:](
        AMLoaderServiceAction *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        bool a7,
        id a8,
        id a9)
{
  id v15; // x20
  id v16; // x22
  id v17; // x23
  id v18; // x25
  id v19; // x26
  id v20; // x21
  id v21; // x24
  id v22; // x22
  id v23; // x23
  id v24; // x20
  NSAssertionHandler *v25; // x27
  _QWORD v26[5]; // [xsp+10h] [xbp-B0h] BYREF
  id v27; // [xsp+38h] [xbp-88h]
  id v28; // [xsp+40h] [xbp-80h]
  id v29; // [xsp+48h] [xbp-78h]
  id v30; // [xsp+50h] [xbp-70h]
  id v31; // [xsp+58h] [xbp-68h]
  SEL v32; // [xsp+60h] [xbp-60h]
  bool v33; // [xsp+68h] [xbp-58h]

  v15 = objc_retain(a3);
  v16 = objc_retain(a5);
  v17 = objc_retain(a6);
  v18 = objc_retain(a8);
  v19 = objc_retain(a9);
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v25 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v25,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      640LL,
      CFSTR("%s: Should not be run on main thread!"),
      "-[AMLoaderServiceAction _runActionWithInput:fromAction:runtimeParameters:currentRunUUID:asynchronously:xpcCompleti"
      "onHandler:overallCompletionHandler:]");
    objc_release(v25);
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
    sub_100012454(self, v17);
  v26[0] = _NSConcreteStackBlock;
  v26[1] = 3254779904LL;
  v26[2] = sub_10000D0DC;
  v26[3] = &unk_10001C8F8;
  v31 = v19;
  v32 = a2;
  v26[4] = self;
  v27 = v15;
  v28 = v17;
  v29 = v16;
  v33 = a7;
  v30 = v18;
  v20 = objc_retain(v19);
  v21 = objc_retain(v18);
  v22 = objc_retain(v16);
  v23 = objc_retain(v17);
  v24 = objc_retain(v15);
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v26);
  objc_release(v31);
  objc_release(v30);
  objc_release(v29);
  objc_release(v28);
  objc_release(v27);
  objc_release(v20);
  objc_release(v21);
  objc_release(v22);
  objc_release(v23);
  objc_release(v24);
}