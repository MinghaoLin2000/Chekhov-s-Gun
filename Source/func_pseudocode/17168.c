-[AMLoaderServiceVariableController set_variablesLock:]
void __cdecl -[AMLoaderServiceVariableController set_variablesLock:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        os_unfair_lock_s a3)
{
  self->__variablesLock = a3;
}