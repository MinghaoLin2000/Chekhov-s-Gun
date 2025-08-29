-[AMParametersObserver _setObservedParameters:]
void __cdecl -[AMParametersObserver _setObservedParameters:](AMParametersObserver *self, SEL a2, id a3)
{
  NSMutableArray *v5; // x20
  NSMutableArray **p_observedParameters; // x21
  NSMutableArray *observedParameters; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = (NSMutableArray *)objc_retain(a3);
  os_unfair_lock_assert_owner(&self->__lock);
  observedParameters = self->__observedParameters;
  p_observedParameters = &self->__observedParameters;
  if ( observedParameters != v5 )
    objc_storeStrong((id *)p_observedParameters, a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}