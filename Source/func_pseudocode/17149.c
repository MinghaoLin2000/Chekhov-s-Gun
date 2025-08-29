-[AMLoaderServiceVariableController variableWithUUID:]
id __cdecl -[AMLoaderServiceVariableController variableWithUUID:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3)
{
  os_unfair_lock_s *p_variablesLock; // x20
  id v5; // x21
  id v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  p_variablesLock = &self->__variablesLock;
  v5 = objc_retain(a3);
  os_unfair_lock_lock(p_variablesLock);
  v6 = objc_retainAutoreleasedReturnValue(-[AMLoaderServiceVariableController _variableWithUUID:](self, "_variableWithUUID:", v5));
  objc_release(v5);
  os_unfair_lock_unlock(p_variablesLock);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}