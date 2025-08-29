-[AMParametersObserver observe]
void __cdecl -[AMParametersObserver observe](AMParametersObserver *self, SEL a2)
{
  os_unfair_lock_s *p_lock; // x19
  NSMutableArray *v4; // x21
  AMAction *v5; // x21
  void *v6; // x22
  _QWORD v7[5]; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  p_lock = &self->__lock;
  os_unfair_lock_lock(&self->__lock);
  if ( -[AMParametersObserver _observing](self, "_observing") )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    os_unfair_lock_unlock(p_lock);
  }
  else
  {
    -[AMParametersObserver _setObserving:](self, "_setObserving:", 1LL);
    v4 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _observedParameters](self, "_observedParameters"));
    -[NSMutableArray removeAllObjects](v4, "removeAllObjects");
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver action](self, "action"));
    v6 = objc_retainAutoreleasedReturnValue(-[AMAction parameters](v5, "parameters"));
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_10000F308;
    v7[3] = &unk_10001CA38;
    v7[4] = self;
    objc_msgSend(v6, "enumerateKeysAndObjectsUsingBlock:", v7);
    objc_release(v6);
    objc_release(v5);
    os_unfair_lock_unlock(p_lock);
  }
}