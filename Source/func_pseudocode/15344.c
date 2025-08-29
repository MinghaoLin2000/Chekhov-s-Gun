-[restoreInfo deviceMutex]
OS_dispatch_semaphore *__cdecl -[restoreInfo deviceMutex](restoreInfo *self, SEL a2)
{
  return (OS_dispatch_semaphore *)objc_getProperty(self, a2, 32LL, 1);
}