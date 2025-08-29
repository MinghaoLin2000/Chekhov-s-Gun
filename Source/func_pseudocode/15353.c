-[preflightInfo init]
preflightInfo *__cdecl -[preflightInfo init](preflightInfo *self, SEL a2)
{
  preflightInfo *v2; // x0
  preflightInfo *v3; // x19
  dispatch_semaphore_t v4; // x0
  OS_dispatch_semaphore *preflightDeviceMutex; // x8
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___preflightInfo;
  v2 = -[preflightInfo init](&v7, "init");
  v3 = v2;
  if ( v2 )
  {
    v2->preflightDevice = 0LL;
    v4 = dispatch_semaphore_create(0LL);
    preflightDeviceMutex = v3->preflightDeviceMutex;
    v3->preflightDeviceMutex = (OS_dispatch_semaphore *)v4;
    objc_release(preflightDeviceMutex);
  }
  return v3;
}