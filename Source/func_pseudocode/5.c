-[MacOSSharingExtensionContext barrier]
OS_dispatch_group *__cdecl -[MacOSSharingExtensionContext barrier](MacOSSharingExtensionContext *self, SEL a2)
{
  return (OS_dispatch_group *)objc_getProperty(self, a2, 8LL, 1);
}