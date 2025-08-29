-[DeviceModeFinderViewController loadRestoreFromBackupProgressViewController]
void __cdecl -[DeviceModeFinderViewController loadRestoreFromBackupProgressViewController](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  NSBundle *v3; // x21
  NSString *v4; // x22
  AMPDevice *v5; // x23
  void *v6; // x24
  NSString *v7; // x20
  id v8; // x21
  AMPDevice *v9; // x22
  void *v10; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v3,
           "localizedStringForKey:value:table:",
           CFSTR("Restoring “%@” from backup…"),
           &stru_1000BA220,
           0LL));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v6 = objc_retainAutoreleasedReturnValue(-[AMPDevice deviceName](v5, "deviceName"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v4, v6));
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController devicesClient](self, "devicesClient"));
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "registerForRestoreProgressForDevice:withReply:", v9, &stru_1000B99B0));
  objc_release(v9);
  objc_release(v8);
  -[DeviceModeFinderViewController loadProgressViewController:progress:](
    self,
    "loadProgressViewController:progress:",
    v7,
    v10);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}