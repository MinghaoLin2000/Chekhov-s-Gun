-[DeviceSettingsNode description]
id __cdecl -[DeviceSettingsNode description](DeviceSettingsNode *self, SEL a2)
{
  NSString *v3; // x21
  NSNumber *v4; // x22
  NSString *v5; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode name](self, "name"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode persistentID](self, "persistentID"));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<DeviceSettingsNode: %p>, name = %@, persistentID = %@"),
           self,
           v3,
           v4));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}