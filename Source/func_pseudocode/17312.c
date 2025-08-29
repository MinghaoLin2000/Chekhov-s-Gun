-[AMRemoteActionRunner _actionDidRun:error:fromException:]
void __cdecl -[AMRemoteActionRunner _actionDidRun:error:fromException:](
        AMRemoteActionRunner *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  _BOOL4 v5; // w22
  id v9; // x19
  id v10; // x20
  AMAction *v11; // x23
  AMAction *v12; // x23
  unsigned int v13; // w22
  AMRemoteActionRunnerDelegate *v14; // x22
  char v15; // w23
  NSAssertionHandler *v16; // x22
  NSAssertionHandler *v17; // x25
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v5 = a5;
  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  if ( !v9 )
  {
    v16 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v16,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionRunner.m"),
      182LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("action"));
    goto LABEL_9;
  }
  os_unfair_lock_lock(&self->__stateLock);
  -[AMRemoteActionRunner _setError:](self, "_setError:", v10);
  if ( (void *)-[AMRemoteActionRunner _state](self, "_state") != (void *)1 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v17,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMRemoteActionRunner.m"),
      191LL,
      CFSTR("Should be running!"));
    objc_release(v17);
  }
  -[AMRemoteActionRunner _setState:](self, "_setState:", 0LL);
  os_unfair_lock_unlock(&self->__stateLock);
  v11 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
  -[AMAction setRuntimeParameters:](v11, "setRuntimeParameters:", 0LL);
  objc_release(v11);
  if ( v5 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
    v13 = (unsigned int)-[AMAction am_hasOverrideForSelector:](
                          v12,
                          "am_hasOverrideForSelector:",
                          "runAsynchronouslyWithInput:");
    objc_release(v12);
    if ( v10 )
    {
      if ( v13 )
      {
        v14 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner delegate](self, "delegate"));
        v15 = objc_opt_respondsToSelector();
        objc_release(v14);
        if ( (v15 & 1) != 0 )
        {
          v16 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner delegate](self, "delegate"));
          -[NSAssertionHandler remoteActionRunner:didReceiveExceptionError:fromAsynchronousAction:](
            v16,
            "remoteActionRunner:didReceiveExceptionError:fromAsynchronousAction:",
            self,
            v10,
            v9);
LABEL_9:
          objc_release(v16);
        }
      }
    }
  }
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}