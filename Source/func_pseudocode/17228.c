-[AMLoaderServiceAction _progressChanged]
void __cdecl -[AMLoaderServiceAction _progressChanged](AMLoaderServiceAction *self, SEL a2)
{
  AMAction *v3; // x20
  double v4; // d0
  AMAction *v5; // x21
  double v6; // d0
  double v7; // d8
  AMRemoteActionExecution *v8; // x21
  AMRemoteActionExecution *v9; // x21
  unsigned __int8 v10; // w22
  AMRemoteActionExecution *v11; // x21
  id v12; // x22
  AMAction *v13; // x19
  NSNumber *v14; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
  -[AMAction progressValue](v3, "progressValue");
  if ( v4 >= 0.0 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
    -[AMAction progressValue](v5, "progressValue");
    v7 = v6;
    objc_release(v5);
    objc_release(v3);
    if ( v7 > 1.0 )
      return;
    os_unfair_lock_lock(&self->__executionLock);
    v8 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
    objc_release(v8);
    if ( v8 )
    {
      v9 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
      v10 = -[AMRemoteActionExecution hasProgress](v9, "hasProgress");
      objc_release(v9);
      if ( (v10 & 1) == 0 )
      {
        v11 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _execution](self, "_execution"));
        v12 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionExecution executionAfterProgressReporting](v11, "executionAfterProgressReporting"));
        -[AMLoaderServiceAction _setExecution:](self, "_setExecution:", v12);
        objc_release(v12);
        objc_release(v11);
      }
    }
    os_unfair_lock_unlock(&self->__executionLock);
    v3 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _actionDelegate](self, "_actionDelegate"));
    v13 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceAction _amAction](self, "_amAction"));
    -[AMAction progressValue](v13, "progressValue");
    v14 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:"));
    -[AMAction remoteActionProgressDidChange:](v3, "remoteActionProgressDidChange:", v14);
    objc_release(v14);
    objc_release(v13);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}