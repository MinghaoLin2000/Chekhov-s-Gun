-[DeviceViewController postDeviceViewPhotoSyncDeferredErrorNotificationWithOSStatus:andMessage:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceViewController postDeviceViewPhotoSyncDeferredErrorNotificationWithOSStatus:andMessage:](
        DeviceViewController *self,
        SEL a2,
        int a3,
        id a4)
{
  __int64 v4; // x19
  id v6; // x22
  NSNumber *v7; // x19
  NSDictionary *v8; // x21
  NSNotificationCenter *v9; // x23
  _QWORD v10[2]; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v11[2]; // [xsp+18h] [xbp-48h] BYREF

  v4 = *(_QWORD *)&a3;
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInt:](&OBJC_CLASS___NSNumber, "numberWithInt:", v4));
  v10[0] = CFSTR("OSStatus");
  v10[1] = CFSTR("Message");
  v11[0] = v7;
  v11[1] = v6;
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           v11,
           v10,
           2LL));
  v9 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  objc_release(v6);
  -[NSNotificationCenter postNotificationName:object:userInfo:](
    v9,
    "postNotificationName:object:userInfo:",
    CFSTR("DeviceViewPhotoSyncDeferredErrorNotification"),
    self,
    v8);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}