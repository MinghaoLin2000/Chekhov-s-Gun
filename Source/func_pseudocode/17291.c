-[AMParametersObserver _setObserving:]
void __cdecl -[AMParametersObserver _setObserving:](AMParametersObserver *self, SEL a2, bool a3)
{
  _BOOL4 v3; // w19

  v3 = a3;
  os_unfair_lock_assert_owner(&self->__lock);
  if ( self->__observing != v3 )
    self->__observing = v3;
}