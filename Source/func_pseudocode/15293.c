-[SKUnmount init]
SKUnmount *__cdecl -[SKUnmount init](SKUnmount *self, SEL a2)
{
  SKUnmount *v2; // x19
  dispatch_semaphore_t v3; // x0
  OS_dispatch_semaphore *populateMutex; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___SKUnmount;
  v2 = -[SKUnmount init](&v6, "init");
  if ( v2 )
  {
    v3 = dispatch_semaphore_create(0LL);
    populateMutex = v2->_populateMutex;
    v2->_populateMutex = (OS_dispatch_semaphore *)v3;
    objc_release(populateMutex);
  }
  return v2;
}