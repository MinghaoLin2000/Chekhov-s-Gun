-[preflightInfo preflightDeviceMutex]
OS_dispatch_semaphore *__cdecl -[preflightInfo preflightDeviceMutex](preflightInfo *self, SEL a2)
{
  return (OS_dispatch_semaphore *)objc_getProperty(self, a2, 40LL, 1);
}