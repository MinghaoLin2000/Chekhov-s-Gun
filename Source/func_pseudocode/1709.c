-[DeviceSettingsTabContentViewController postDidChangeNodes:]
void __cdecl -[DeviceSettingsTabContentViewController postDidChangeNodes:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  NSNotificationCenter *v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter postNotificationName:object:](
    v4,
    "postNotificationName:object:",
    CFSTR("DeviceSettingsNodesDidChange"),
    v3);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}