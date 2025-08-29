-[SKUnmount initialPopulateComplete]
void __cdecl -[SKUnmount initialPopulateComplete](SKUnmount *self, SEL a2)
{
  dispatch_semaphore_signal((dispatch_semaphore_t)self->_populateMutex);
}