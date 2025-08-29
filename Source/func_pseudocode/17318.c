-[AMRemoteActionRunner _setError:]
void __cdecl -[AMRemoteActionRunner _setError:](AMRemoteActionRunner *self, SEL a2, id a3)
{
  NSError *v5; // x20
  NSError **p_error; // x21
  NSError *error; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = (NSError *)objc_retain(a3);
  os_unfair_lock_assert_owner(&self->__stateLock);
  error = self->__error;
  p_error = &self->__error;
  if ( error != v5 )
    objc_storeStrong((id *)p_error, a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}