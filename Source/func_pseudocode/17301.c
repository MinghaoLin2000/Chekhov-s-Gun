-[AMParametersObserver set_lock:]
void __cdecl -[AMParametersObserver set_lock:](AMParametersObserver *self, SEL a2, os_unfair_lock_s a3)
{
  self->__lock = a3;
}