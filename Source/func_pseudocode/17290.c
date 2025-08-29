-[AMParametersObserver _observing]
bool __cdecl -[AMParametersObserver _observing](AMParametersObserver *self, SEL a2)
{
  os_unfair_lock_assert_owner(&self->__lock);
  return self->__observing;
}