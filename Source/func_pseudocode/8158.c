-[XPCSignpostReader sigterm_source]
OS_dispatch_source *__cdecl -[XPCSignpostReader sigterm_source](XPCSignpostReader *self, SEL a2)
{
  return (OS_dispatch_source *)objc_getProperty(self, a2, 112LL, 1);
}