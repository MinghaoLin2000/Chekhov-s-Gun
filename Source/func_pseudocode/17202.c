-[AMLoaderServiceAction remoteActionWillFinishRunning]
void __cdecl -[AMLoaderServiceAction remoteActionWillFinishRunning](AMLoaderServiceAction *self, SEL a2)
{
  NSAssertionHandler *v4; // x21
  _QWORD v5[5]; // [xsp+8h] [xbp-48h] BYREF

  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v4,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceAction.m"),
      350LL,
      CFSTR("Should not be called on main thread!"));
    objc_release(v4);
  }
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10000BAAC;
  v5[3] = &unk_10001C758;
  v5[4] = self;
  -[AMLoaderServiceAction _executeSynchronouslyWithLoadedActionOnMainThread:](
    self,
    "_executeSynchronouslyWithLoadedActionOnMainThread:",
    v5);
}