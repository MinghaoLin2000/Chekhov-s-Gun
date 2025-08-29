-[AMLoaderServiceVariableController invalidate]
void __cdecl -[AMLoaderServiceVariableController invalidate](AMLoaderServiceVariableController *self, SEL a2)
{
  os_unfair_lock_s *p_variablesLock; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  p_variablesLock = &self->__variablesLock;
  os_unfair_lock_lock(&self->__variablesLock);
  -[AMLoaderServiceVariableController set_xpcVariableDelegate:](self, "set_xpcVariableDelegate:", 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  os_unfair_lock_unlock(p_variablesLock);
}