-[DeviceOptionsViewController deviceViewSyncOnDidChangeNotification:]
void __cdecl -[DeviceOptionsViewController deviceViewSyncOnDidChangeNotification:](
        DeviceOptionsViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  void *v5; // x21
  NSButton *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "userInfo"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("syncOn")));
  if ( (unsigned int)objc_msgSend(v5, "boolValue") )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController manualManageCheckBox](self, "manualManageCheckBox"));
    -[NSButton setState:](v6, "setState:", 0LL);
    objc_release(v6);
    -[DeviceViewController postDeviceViewDirtinessChangeNotification](self, "postDeviceViewDirtinessChangeNotification");
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}