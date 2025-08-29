-[PKiCloudDataController init]
PKiCloudDataController *__cdecl -[PKiCloudDataController init](PKiCloudDataController *self, SEL a2)
{
  PKiCloudDataController *v2; // x19
  NSUbiquitousKeyValueStore *v3; // x20
  NSNotificationCenter *v4; // x20
  NSUbiquitousKeyValueStore *v5; // x21
  objc_super v7; // [xsp+0h] [xbp-30h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___PKiCloudDataController;
  v2 = -[PKiCloudDataController init](&v7, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSUbiquitousKeyValueStore defaultStore](&OBJC_CLASS___NSUbiquitousKeyValueStore, "defaultStore"));
    -[PKiCloudDataController setUbiquitousKeyValueStore:](v2, "setUbiquitousKeyValueStore:", v3);
    objc_release(v3);
    v4 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
    v5 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController ubiquitousKeyValueStore](v2, "ubiquitousKeyValueStore"));
    -[NSNotificationCenter addObserver:selector:name:object:](
      v4,
      "addObserver:selector:name:object:",
      v2,
      "ubiquitousKeyValueStoreDidChange:",
      NSUbiquitousKeyValueStoreDidChangeExternallyNotification,
      v5);
    objc_release(v5);
    objc_release(v4);
    -[PKiCloudDataController synchronizeiCloudData](v2, "synchronizeiCloudData");
  }
  return v2;
}