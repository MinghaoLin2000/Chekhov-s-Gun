-[AMParametersObserver observeValueForKeyPath:ofObject:change:context:]
void __cdecl -[AMParametersObserver observeValueForKeyPath:ofObject:change:context:](
        AMParametersObserver *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        void *a6)
{
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  if ( off_1000241A8 != a6 )
  {
    v7.receiver = self;
    v7.super_class = (Class)&OBJC_CLASS___AMParametersObserver;
    -[AMParametersObserver observeValueForKeyPath:ofObject:change:context:](
      &v7,
      "observeValueForKeyPath:ofObject:change:context:",
      a3,
      a4,
      a5);
  }
  os_unfair_lock_lock(&self->__lock);
  -[AMParametersObserver _parametersChangeObserved](self, "_parametersChangeObserved");
  os_unfair_lock_unlock(&self->__lock);
}