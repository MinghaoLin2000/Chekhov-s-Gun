-[DeviceSettingsViewController viewWillDisappear]
void __cdecl -[DeviceSettingsViewController viewWillDisappear](DeviceSettingsViewController *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter removeObserver:name:object:](
    v3,
    "removeObserver:name:object:",
    self,
    CFSTR("DeviceSettingsNodeDidChange"),
    0LL);
  -[NSNotificationCenter removeObserver:name:object:](
    v3,
    "removeObserver:name:object:",
    self,
    CFSTR("DeviceSettingsNodesDidChange"),
    0LL);
  -[NSNotificationCenter removeObserver:name:object:](
    v3,
    "removeObserver:name:object:",
    self,
    CFSTR("DeviceSettingsAllStateDidChangeNotification"),
    0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}