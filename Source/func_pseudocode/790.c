-[DeviceSettingsViewController nibName]
id __cdecl -[DeviceSettingsViewController nibName](DeviceSettingsViewController *self, SEL a2)
{
  objc_class *v2; // x0
  NSString *v3; // x19
  NSString *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = (objc_class *)objc_opt_class(self);
  v3 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v2));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByReplacingOccurrencesOfString:withString:](
           v3,
           "stringByReplacingOccurrencesOfString:withString:",
           CFSTR("ViewController"),
           &stru_1000BA220));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}