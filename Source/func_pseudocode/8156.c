-[XPCSignpostReader sigterm_queue]
OS_dispatch_queue *__cdecl -[XPCSignpostReader sigterm_queue](XPCSignpostReader *self, SEL a2)
{
  return (OS_dispatch_queue *)objc_getProperty(self, a2, 104LL, 1);
}