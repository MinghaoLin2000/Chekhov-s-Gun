-[DeviceSettingsViewController deviceViewManualManageOptionDidChangeNotification:]
void __cdecl -[DeviceSettingsViewController deviceViewManualManageOptionDidChangeNotification:](
        DeviceSettingsViewController *self,
        SEL a2,
        id a3)
{
  void *v4; // x19
  void *v5; // x21
  NSButton *v6; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "userInfo"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", CFSTR("manualManage")));
  if ( (unsigned int)objc_msgSend(v5, "boolValue")
    && -[DeviceSettingsViewController supportsTurningOffSyncOntoWithManualManage](
         self,
         "supportsTurningOffSyncOntoWithManualManage") )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController syncOntoCheckBox](self, "syncOntoCheckBox"));
    -[NSButton setState:](v6, "setState:", 0LL);
    objc_release(v6);
    -[DeviceSettingsViewController updatePanelUIState](self, "updatePanelUIState");
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}