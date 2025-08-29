-[AMParametersObserver dealloc]
void __cdecl -[AMParametersObserver dealloc](AMParametersObserver *self, SEL a2)
{
  os_unfair_lock_s *p_lock; // x20
  NSMutableArray *observedParameters; // x0
  NSMutableArray *v5; // x0
  objc_super v6; // [xsp+8h] [xbp-48h] BYREF
  _QWORD v7[5]; // [xsp+18h] [xbp-38h] BYREF

  p_lock = &self->__lock;
  os_unfair_lock_lock(&self->__lock);
  observedParameters = self->__observedParameters;
  if ( observedParameters )
  {
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_10000F148;
    v7[3] = &unk_10001C468;
    v7[4] = self;
    -[NSMutableArray enumerateObjectsUsingBlock:](observedParameters, "enumerateObjectsUsingBlock:", v7);
    v5 = self->__observedParameters;
    self->__observedParameters = 0LL;
    objc_release(v5);
  }
  os_unfair_lock_unlock(p_lock);
  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___AMParametersObserver;
  -[AMParametersObserver dealloc](&v6, "dealloc");
}