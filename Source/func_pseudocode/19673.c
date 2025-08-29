-[IPPSession workQueue]
OS_dispatch_queue *__cdecl -[IPPSession workQueue](IPPSession *self, SEL a2)
{
  return (OS_dispatch_queue *)objc_getProperty(self, a2, 32LL, 1);
}