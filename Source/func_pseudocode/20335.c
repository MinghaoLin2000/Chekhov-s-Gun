-[PKiCloudDataController synchronizeiCloudData]
void __cdecl -[PKiCloudDataController synchronizeiCloudData](PKiCloudDataController *self, SEL a2)
{
  NSUbiquitousKeyValueStore *v3; // x19
  _QWORD v4[5]; // [xsp+8h] [xbp-38h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[PKiCloudDataController ubiquitousKeyValueStore](self, "ubiquitousKeyValueStore"));
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100044CAC;
  v4[3] = &unk_10009EE78;
  v4[4] = self;
  -[NSUbiquitousKeyValueStore synchronizeWithCompletionHandler:](v3, "synchronizeWithCompletionHandler:", v4);
  objc_release(v3);
}