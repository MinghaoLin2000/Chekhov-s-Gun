-[AMLoaderServiceAction _tearDownExecutionWithError:]
bool __cdecl -[AMLoaderServiceAction _tearDownExecutionWithError:](AMLoaderServiceAction *self, SEL a2, id a3)
{
  id v4; // x28
  AMRemoteActionExecution *v5; // x20
  AMRemoteActionExecution *v6; // x22
  NSArray *v7; // x24
  AMRemoteActionExecution *v8; // x23
  void (__fastcall **v9)(void *, _QWORD, void *, void *); // x22
  AMRemoteActionExecution *v10; // x23
  AMRemoteActionExecution *v11; // x23
  unsigned int v12; // w28
  AMRemoteActionExecution *v13; // x27
  AMRemoteActionRunner *v14; // x23
  AMRemoteActionExecution *v15; // x25
  AMRemoteActionRunner *v16; // x19
  _BOOL8 v17; // x27
  AMAction *v18; // x19
  NSString *v19; // x25
  AMRemoteActionDelegateXPCProtocol *v20; // x19
  AMRemoteActionDelegateXPCProtocol *v21; // x19
  void *v22; // x25
  NSArray *v23; // x24
  AMAction *v24; // x19
  AMRemoteActionRunner *v25; // x25
  AMActionLoaderServiceInstance *v26; // x19
  void *v28; // [xsp+8h] [xbp-88h]
  unsigned int v29; // [xsp+14h] [xbp-7Ch]
  _QWORD block[4]; // [xsp+18h] [xbp-78h] BYREF
  id v31; // [xsp+38h] [xbp-58h]

  v4 = objc_retain(a3);
  os_unfair_lock_lock(&self->__executionLock);
  v5 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
  objc_release(v5);
  if ( v5 )
  {
    v28 = v4;
    v6 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
    v7 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution allOperations](v6, "allOperations"));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
    v9 = (void (__fastcall **)(void *, _QWORD, void *, void *))objc_retainAutoreleasedReturnValue(
                                                                 -[AMRemoteActionExecution xpcCompletionHandler](
                                                                   v8,
                                                                   "xpcCompletionHandler"));
    objc_release(v8);
    v10 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
    v29 = -[AMRemoteActionExecution runningAysnchronously](v10, "runningAysnchronously");
    objc_release(v10);
    v11 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
    v12 = -[AMRemoteActionExecution hasProgress](v11, "hasProgress");
    objc_release(v11);
    v13 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
    v14 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution runner](v13, "runner"));
    objc_release(v13);
    v15 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
    v16 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution runner](v15, "runner"));
    v17 = -[AMRemoteActionRunner stopped](v16, "stopped");
    objc_release(v16);
    objc_release(v15);
    -[AMLoaderServiceAction _setExecution:](self, "_setExecution:", 0LL);
    os_unfair_lock_unlock(&self->__executionLock);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100011ED0(self, v29);
    v18 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
    v19 = objc_retainAutoreleasedReturnValue(NSStringFromSelector("progressValue"));
    -[AMAction removeObserver:forKeyPath:context:](v18, "removeObserver:forKeyPath:context:", self, v19, off_100024020);
    objc_release(v19);
    objc_release(v18);
    if ( v12 )
    {
      v20 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _actionDelegate](self, "_actionDelegate"));
      -[AMRemoteActionDelegateXPCProtocol remoteActionProgressDidChange:](v20, "remoteActionProgressDidChange:", 0LL);
      objc_release(v20);
    }
    v4 = v28;
    if ( v9 )
      v9[2](v9, 0LL, (void *)v17, v28);
    if ( v29 )
    {
      v21 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _actionDelegate](self, "_actionDelegate"));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v28, "_am_convertForSendingOverXPCWithWorkflow:", 0LL));
      -[AMRemoteActionDelegateXPCProtocol remoteActionFinishedRunningAsynchronouslyWithOutput:stopped:error:](
        v21,
        "remoteActionFinishedRunningAsynchronouslyWithOutput:stopped:error:",
        0LL,
        v17,
        v22);
      objc_release(v22);
      objc_release(v21);
    }
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10000B388;
    block[3] = &unk_10001C338;
    v31 = v7;
    v23 = objc_retain(v7);
    dispatch_sync(&_dispatch_main_q, block);
    if ( v14 )
    {
      v24 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
      v25 = objc_retainAutoreleasedReturnValue(-[AMAction runner](v24, "runner"));
      objc_release(v25);
      objc_release(v24);
      if ( v25 == v14 )
        -[AMRemoteActionRunner invalidate](v14, "invalidate");
    }
    v26 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _service](self, "_service"));
    -[AMActionLoaderServiceInstance didRunLoaderServiceAction:](v26, "didRunLoaderServiceAction:", self);
    objc_release(v26);
    objc_release(v31);
    objc_release(v9);
    objc_release(v14);
    objc_release(v23);
  }
  else
  {
    os_unfair_lock_unlock(&self->__executionLock);
  }
  objc_release(v4);
  return v5 != 0LL;
}