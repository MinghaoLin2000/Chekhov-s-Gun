-[SKUnmount waitForPopulateComplete]
bool __cdecl -[SKUnmount waitForPopulateComplete](SKUnmount *self, SEL a2)
{
  void *v3; // x20
  OS_dispatch_semaphore *populateMutex; // x19
  dispatch_time_t v5; // x0

  v3 = objc_retainAutoreleasedReturnValue(+[SKManager sharedManager](&OBJC_CLASS___SKManager, "sharedManager"));
  objc_msgSend(v3, "addListener:", self);
  populateMutex = self->_populateMutex;
  v5 = dispatch_time(0LL, 120000000000LL);
  LOBYTE(populateMutex) = dispatch_semaphore_wait((dispatch_semaphore_t)populateMutex, v5) == 0;
  objc_release(v3);
  return (char)populateMutex;
}