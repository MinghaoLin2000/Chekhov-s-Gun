-[DeviceViewController postDeviceViewDirtinessChangeNotification]
void __cdecl -[DeviceViewController postDeviceViewDirtinessChangeNotification](DeviceViewController *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter postNotificationName:object:](
    v3,
    "postNotificationName:object:",
    CFSTR("DeviceViewDirtinessDidChangeNotification"),
    self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}