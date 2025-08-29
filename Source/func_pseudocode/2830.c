-[DeviceModeTestViewController testAskUser:]
void __cdecl -[DeviceModeTestViewController testAskUser:](DeviceModeTestViewController *self, SEL a2, id a3)
{
  void *v4; // x19
  AMPDevicesClient *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary", a3));
  objc_msgSend(
    v4,
    "setObject:forKeyedSubscript:",
    CFSTR("Do you want backups of “Chas iPhone” to be encrypted?"),
    AMPDeviceAskUserMessageKey);
  objc_msgSend(
    v4,
    "setObject:forKeyedSubscript:",
    CFSTR("If you proceed without encryption, the backups will not include sensitive data.  Restoring a device from a backup will result in loss of your saved passwords, Health HomeKit data."),
    AMPDeviceAskUserExplanationKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("Encrypt Backups"), AMPDeviceAskUserOKButtonTitleKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("Don’t Encrypt"), AMPDeviceAskUserCancelButtonTitleKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", CFSTR("Learn More"), AMPDeviceAskUserOtherButtonTitleKey);
  objc_msgSend(v4, "setObject:forKeyedSubscript:", &__kCFBooleanFalse, AMPDeviceAskUserOtherButtonShouldDismissKey);
  objc_msgSend(
    v4,
    "setObject:forKeyedSubscript:",
    CFSTR("https://support.apple.com/en-us/HT205220?&cid=acs::fm-itunes_HT205220"),
    AMPDeviceAskUserOtherButtonURLKey);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
  -[AMPDevicesClient askUserWithParameters:withReply:](v5, "askUserWithParameters:withReply:", v4, &stru_1000B9F38);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}