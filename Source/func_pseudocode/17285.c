-[AMParametersObserver invalidate]
void __cdecl -[AMParametersObserver invalidate](AMParametersObserver *self, SEL a2)
{
  os_unfair_lock_s *p_lock; // x19
  NSMutableArray *v4; // x21
  NSMutableArray *v5; // x21
  _QWORD v6[5]; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  p_lock = &self->__lock;
  os_unfair_lock_lock(&self->__lock);
  if ( -[AMParametersObserver _observing](self, "_observing") )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _observedParameters](self, "_observedParameters"));
    v6[0] = _NSConcreteStackBlock;
    v6[1] = 3254779904LL;
    v6[2] = sub_10000F494;
    v6[3] = &unk_10001C468;
    v6[4] = self;
    -[NSMutableArray enumerateObjectsUsingBlock:](v4, "enumerateObjectsUsingBlock:", v6);
    objc_release(v4);
    v5 = objc_retainAutoreleasedReturnValue(-[AMParametersObserver _observedParameters](self, "_observedParameters"));
    -[NSMutableArray removeAllObjects](v5, "removeAllObjects");
    objc_release(v5);
    -[AMParametersObserver _setObserving:](self, "_setObserving:", 0LL);
    os_unfair_lock_unlock(p_lock);
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    os_unfair_lock_unlock(p_lock);
  }
}