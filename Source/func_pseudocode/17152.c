-[AMLoaderServiceVariableController variableNames]
NSArray *__cdecl -[AMLoaderServiceVariableController variableNames](AMLoaderServiceVariableController *self, SEL a2)
{
  os_unfair_lock_s *p_variablesLock; // x20
  NSMutableArray *v4; // x19
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  p_variablesLock = &self->__variablesLock;
  os_unfair_lock_lock(&self->__variablesLock);
  v4 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variables](self, "_variables"));
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSMutableArray am_makeObjectsPerformSelectorReturningID:](
           v4,
           "am_makeObjectsPerformSelectorReturningID:",
           "name"));
  objc_release(v4);
  os_unfair_lock_unlock(p_variablesLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSArray *)objc_autoreleaseReturnValue(v5);
}