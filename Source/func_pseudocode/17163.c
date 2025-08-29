-[AMLoaderServiceVariableController _variables]
NSMutableArray *__cdecl -[AMLoaderServiceVariableController _variables](
        AMLoaderServiceVariableController *self,
        SEL a2)
{
  NSMutableArray *variables; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  os_unfair_lock_assert_owner(&self->__variablesLock);
  variables = self->__variables;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(variables);
}