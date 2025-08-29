-[AMRemoteActionRunner initWithAction:input:workflowID:currentRunUUID:]
AMRemoteActionRunner *__cdecl -[AMRemoteActionRunner initWithAction:input:workflowID:currentRunUUID:](
        AMRemoteActionRunner *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v12; // x19
  id v13; // x20
  id v14; // x21
  id v15; // x22
  AMRemoteActionRunner *v16; // x26
  NSString *v17; // x0
  NSString *workflowID; // x8
  NSString *v19; // x0
  NSString *currentRunUUID; // x8
  AMRemoteActionRunner *v21; // x23
  NSAssertionHandler *v23; // x23
  NSAssertionHandler *v24; // x27
  objc_super v25; // [xsp+10h] [xbp-60h] BYREF

  v12 = objc_retain(a3);
  v13 = objc_retain(a4);
  v14 = objc_retain(a5);
  v15 = objc_retain(a6);
  if ( v12 )
  {
    v25.receiver = self;
    v25.super_class = (Class)&OBJC_CLASS___AMRemoteActionRunner;
    v16 = -[AMRemoteActionRunner init](&v25, "init");
    if ( v16 )
    {
      if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
      {
        v24 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
        -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
          v24,
          "handleFailureInMethod:object:file:lineNumber:description:",
          a2,
          v16,
          CFSTR("AMRemoteActionRunner.m"),
          60LL,
          CFSTR("Invalid parameter not satisfying: %@"),
          CFSTR("NSThread.isMainThread"));
        objc_release(v24);
      }
      objc_storeStrong((id *)&v16->__action, a3);
      v16->__state = 0LL;
      objc_storeStrong(&v16->__input, a4);
      v17 = (NSString *)objc_msgSend(v14, "copy");
      workflowID = v16->__workflowID;
      v16->__workflowID = v17;
      objc_release(workflowID);
      v19 = (NSString *)objc_msgSend(v15, "copy");
      currentRunUUID = v16->__currentRunUUID;
      v16->__currentRunUUID = v19;
      objc_release(currentRunUUID);
      v16->__stateLock._os_unfair_lock_opaque = 0;
    }
    self = objc_retain(v16);
    v21 = self;
  }
  else
  {
    v23 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v23,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionRunner.m"),
      52LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("action"));
    objc_release(v23);
    v21 = 0LL;
  }
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v12);
  objc_release(self);
  return v21;
}