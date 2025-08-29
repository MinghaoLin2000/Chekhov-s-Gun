-[AMRemoteActionRunner stopWithError:]
void __cdecl -[AMRemoteActionRunner stopWithError:](AMRemoteActionRunner *self, SEL a2, id a3)
{
  id v5; // x19
  AMAction *v6; // x22
  AMAction *v7; // x22
  AMAction *v8; // x22
  unsigned int v9; // w21
  AMRemoteActionRunnerDelegate *v10; // x21
  char v11; // w22
  AMRemoteActionRunnerDelegate *v12; // x21
  AMAction *v13; // x22
  NSAssertionHandler *v14; // x23

  v5 = objc_retain(a3);
  if ( -[AMRemoteActionRunner _isIncorrectRunnerForThread](self, "_isIncorrectRunnerForThread") )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100012B38(self);
  }
  else
  {
    os_unfair_lock_lock(&self->__stateLock);
    if ( (void *)-[AMRemoteActionRunner _state](self, "_state") != (void *)1 )
    {
      v14 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v14,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("AMRemoteActionRunner.m"),
        226LL,
        CFSTR("Should be running!"));
      objc_release(v14);
    }
    -[AMRemoteActionRunner _setError:](self, "_setError:", v5);
    -[AMRemoteActionRunner _setState:](self, "_setState:", 0LL);
    v6 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
    -[AMAction set_delegate:](v6, "set_delegate:", 0LL);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
    -[AMAction setRuntimeParameters:](v7, "setRuntimeParameters:", 0LL);
    objc_release(v7);
    -[AMRemoteActionRunner setStopped:](self, "setStopped:", 1LL);
    os_unfair_lock_unlock(&self->__stateLock);
    v8 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
    v9 = (unsigned int)-[AMAction am_hasOverrideForSelector:](
                         v8,
                         "am_hasOverrideForSelector:",
                         "runAsynchronouslyWithInput:");
    objc_release(v8);
    if ( !v5 )
    {
      if ( v9 )
      {
        v10 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner delegate](self, "delegate"));
        v11 = objc_opt_respondsToSelector();
        objc_release(v10);
        if ( (v11 & 1) != 0 )
        {
          v12 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner delegate](self, "delegate"));
          v13 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
          -[AMRemoteActionRunnerDelegate remoteActionRunner:didStopAsynchronousAction:](
            v12,
            "remoteActionRunner:didStopAsynchronousAction:",
            self,
            v13);
          objc_release(v13);
          objc_release(v12);
        }
      }
    }
  }
  objc_release(v5);
}