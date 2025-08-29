-[SPCloudStorageHelper init]
SPCloudStorageHelper *__cdecl -[SPCloudStorageHelper init](SPCloudStorageHelper *self, SEL a2)
{
  SPCloudStorageHelper *v2; // x19
  ACAccountStore *v3; // x0
  ACAccountStore *acStore; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___SPCloudStorageHelper;
  v2 = -[SPCloudStorageHelper init](&v6, "init");
  if ( v2 )
  {
    v3 = (ACAccountStore *)objc_alloc_init((Class)&OBJC_CLASS___ACAccountStore);
    acStore = v2->_acStore;
    v2->_acStore = v3;
    objc_release(acStore);
  }
  return v2;
}