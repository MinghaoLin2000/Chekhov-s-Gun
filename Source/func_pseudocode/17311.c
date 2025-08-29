-[AMRemoteActionRunner runAction:]
void __cdecl -[AMRemoteActionRunner runAction:](AMRemoteActionRunner *self, SEL a2, id a3)
{
  id v5; // x19
  NSThread *v6; // x21
  NSMutableDictionary *v7; // x23
  os_unfair_lock_s *p_stateLock; // x21
  AMAction *v9; // x22
  id v10; // x23
  AMAction *v11; // x22
  unsigned __int8 v12; // w23
  AMAction *v13; // x22
  AMAction *v14; // x20
  NSThread *v15; // x20
  NSMutableDictionary *v16; // x21
  NSAssertionHandler *v17; // x21
  NSAssertionHandler *v18; // x21
  NSAssertionHandler *v19; // x23

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v17,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionRunner.m"),
      129LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("action"));
    objc_release(v17);
  }
  if ( +[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v18 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v18,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionRunner.m"),
      130LL,
      CFSTR("Should not be run on main thread!"));
    objc_release(v18);
    if ( !v5 )
      goto LABEL_13;
  }
  else if ( !v5 )
  {
    goto LABEL_13;
  }
  v6 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSThread threadDictionary](v6, "threadDictionary"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](
    v7,
    "setObject:forKeyedSubscript:",
    self,
    CFSTR("remoteActionRunner"));
  objc_release(v7);
  objc_release(v6);
  p_stateLock = &self->__stateLock;
  os_unfair_lock_lock(&self->__stateLock);
  if ( (void *)-[AMRemoteActionRunner _state](self, "_state") != (void *)1 )
  {
    v19 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v19,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionRunner.m"),
      141LL,
      CFSTR("Should be idle before run!"));
    objc_release(v19);
  }
  os_unfair_lock_unlock(&self->__stateLock);
  v9 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
  v10 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _input](self, "_input"));
  -[AMAction runWithInput:loopParent:](v9, "runWithInput:loopParent:", v10, 0LL);
  objc_release(v10);
  objc_release(v9);
  if ( -[AMRemoteActionRunner _isIncorrectRunnerForThread](self, "_isIncorrectRunnerForThread") )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100012964(self);
  }
  else
  {
    os_unfair_lock_lock(&self->__stateLock);
    v11 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
    v12 = (unsigned __int8)-[AMAction am_hasOverrideForSelector:](
                             v11,
                             "am_hasOverrideForSelector:",
                             "runAsynchronouslyWithInput:");
    objc_release(v11);
    if ( (v12 & 1) == 0 )
    {
      -[AMRemoteActionRunner _setState:](self, "_setState:", 0LL);
      v13 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
      -[AMAction set_delegate:](v13, "set_delegate:", 0LL);
      objc_release(v13);
      v14 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
      -[AMAction setRuntimeParameters:](v14, "setRuntimeParameters:", 0LL);
      objc_release(v14);
    }
    os_unfair_lock_unlock(p_stateLock);
    v15 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
    v16 = objc_retainAutoreleasedReturnValue(-[NSThread threadDictionary](v15, "threadDictionary"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v16,
      "setObject:forKeyedSubscript:",
      0LL,
      CFSTR("remoteActionRunner"));
    objc_release(v16);
    objc_release(v15);
  }
LABEL_13:
  objc_release(v5);
}