-[DeviceModeTestViewController testBackupEnterPassword:]
void __cdecl -[DeviceModeTestViewController testBackupEnterPassword:](
        DeviceModeTestViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  __int64 v5; // x22
  AMPDevicesClient *v6; // x21
  void *v7; // x20
  void *v8; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary", a3));
  objc_msgSend(
    v4,
    "setObject:forKeyedSubscript:",
    CFSTR("This iPhone requires backup files to be encrypted. Enter a password to protect your iPhone"),
    AMPDevicePromptForPasswordExplanationKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &stru_1000BA220, AMPDevicePromptForPasswordDefaultPasswordKey);
  v5 = AMPDevicePromptForPasswordVerifyPasswordKey;
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &stru_1000BA220, AMPDevicePromptForPasswordVerifyPasswordKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, AMPDevicePromptForPasswordCheckboxValueKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &__kCFBooleanFalse, AMPDevicePromptForPasswordHideUserNameKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &__kCFBooleanFalse, AMPDevicePromptForPasswordLockUserNameKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeTestViewController view](self, "view"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "window"));
  -[AMPDevicesClient promptForPasswordWithParameters:inParentWindow:withReply:](
    v6,
    "promptForPasswordWithParameters:inParentWindow:withReply:",
    v4,
    v8,
    &stru_1000B9F78);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}