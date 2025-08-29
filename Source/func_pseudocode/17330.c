-[AMRemoteActionRunner pause]
void __cdecl -[AMRemoteActionRunner pause](AMRemoteActionRunner *self, SEL a2)
{
  AMAction *v3; // x20
  char v4; // w21
  AMAction *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( -[AMRemoteActionRunner _isIncorrectRunnerForThread](self, "_isIncorrectRunnerForThread") )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100012BD8(self);
  }
  else
  {
    os_unfair_lock_lock(&self->__stateLock);
    if ( (void *)-[AMRemoteActionRunner _state](self, "_state") == (void *)1 )
    {
      -[AMRemoteActionRunner _setState:](self, "_setState:", 2LL);
      os_unfair_lock_unlock(&self->__stateLock);
      v3 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
      v4 = objc_opt_respondsToSelector();
      objc_release(v3);
      if ( (v4 & 1) != 0 )
      {
        v5 = objc_retainAutoreleasedReturnValue(-[AMRemoteActionRunner _action](self, "_action"));
        -[AMAction pause](v5, "pause");
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        objc_release(v5);
      }
    }
    else
    {
      os_unfair_lock_unlock(&self->__stateLock);
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
        sub_100012C78(self);
    }
  }
}