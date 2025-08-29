-[DeviceSettingsPhotosViewController createDeviceSettingsNodeWithAMPPHMediaGroup:]
id __cdecl -[DeviceSettingsPhotosViewController createDeviceSettingsNodeWithAMPPHMediaGroup:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  void *v5; // x22
  DeviceSettingsNode *v6; // x20
  void *v7; // x23
  NSNumber *v8; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "name"));
  v6 = objc_retainAutoreleasedReturnValue(+[DeviceSettingsNode nodeWithName:](&OBJC_CLASS___DeviceSettingsNode, "nodeWithName:", v5));
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  objc_release(v4);
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSNumber numberWithUnsignedLongLong:](
           &OBJC_CLASS___NSNumber,
           "numberWithUnsignedLongLong:",
           -[DeviceSettingsPhotosViewController albumIDWithIdentifier:](self, "albumIDWithIdentifier:", v7)));
  -[DeviceSettingsNode setPersistentID:](v6, "setPersistentID:", v8);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}