-[DeviceViewController postDeviceViewManualManageOptionDidChangeNotificationWithManualManage:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[DeviceViewController postDeviceViewManualManageOptionDidChangeNotificationWithManualManage:](
        DeviceViewController *self,
        SEL a2,
        bool a3)
{
  NSNumber *v4; // x20
  NSDictionary *v5; // x21
  NSNotificationCenter *v6; // x22
  const __CFString *v7; // [xsp+8h] [xbp-38h] BYREF
  NSNumber *v8; // [xsp+10h] [xbp-30h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", a3));
  v7 = CFSTR("manualManage");
  v8 = v4;
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v8,
           &v7,
           1LL));
  v6 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter postNotificationName:object:userInfo:](
    v6,
    "postNotificationName:object:userInfo:",
    CFSTR("DeviceViewManualManageOptionDidChangeNotification"),
    self,
    v5);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
}