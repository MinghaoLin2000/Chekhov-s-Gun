-[restoreInfo init]
restoreInfo *__cdecl -[restoreInfo init](restoreInfo *self, SEL a2)
{
  restoreInfo *v2; // x0
  restoreInfo *v3; // x19
  MAAsset *asset; // x0
  dispatch_semaphore_t v5; // x0
  OS_dispatch_semaphore *deviceMutex; // x8
  dispatch_semaphore_t v7; // x0
  OS_dispatch_semaphore *restoreMutex; // x8
  objc_super v10; // [xsp+0h] [xbp-20h] BYREF

  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___restoreInfo;
  v2 = -[restoreInfo init](&v10, "init");
  v3 = v2;
  if ( v2 )
  {
    asset = v2->asset;
    v3->asset = 0LL;
    objc_release(asset);
    v3->restoreDevice = 0LL;
    v5 = dispatch_semaphore_create(0LL);
    deviceMutex = v3->deviceMutex;
    v3->deviceMutex = (OS_dispatch_semaphore *)v5;
    objc_release(deviceMutex);
    v7 = dispatch_semaphore_create(0LL);
    restoreMutex = v3->restoreMutex;
    v3->restoreMutex = (OS_dispatch_semaphore *)v7;
    objc_release(restoreMutex);
    v3->restoreWasSuccessful = 0;
  }
  return v3;
}