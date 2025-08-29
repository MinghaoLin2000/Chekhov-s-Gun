-[DeviceSettingsNode ancestors]
NSArray *__cdecl -[DeviceSettingsNode ancestors](DeviceSettingsNode *self, SEL a2)
{
  void *v3; // x19
  DeviceSettingsNode *v4; // x0
  DeviceSettingsNode *v5; // x20
  DeviceSettingsNode *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode parent](self, "parent"));
  if ( v4 )
  {
    v5 = v4;
    do
    {
      objc_msgSend(v3, "addObject:", v5);
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode parent](v5, "parent"));
      objc_release(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSArray *)objc_autoreleaseReturnValue(v3);
}