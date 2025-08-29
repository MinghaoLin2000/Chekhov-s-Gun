-[DeviceOptionsViewController saveToDeviceSyncPrefs:]
void __cdecl -[DeviceOptionsViewController saveToDeviceSyncPrefs:](DeviceOptionsViewController *self, SEL a2, id a3)
{
  id v4; // x19
  AMPDeviceInfo *v5; // x21
  unsigned __int8 v6; // w22
  NSButton *v7; // x21
  NSButton *v8; // x21
  NSPopUpButton *v9; // x21
  NSButton *v10; // x21
  NSButton *v11; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v6 = (unsigned __int8)-[AMPDeviceInfo disableAutomaticSync](v5, "disableAutomaticSync");
  objc_release(v5);
  if ( (v6 & 1) == 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController automaticallySyncCheckBox](self, "automaticallySyncCheckBox"));
    objc_msgSend(v4, "setDontSyncWhenConnected:", -[NSButton state](v7, "state") == 0);
    objc_release(v7);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController convertHigherBitRateSongsToCheckBox](self, "convertHigherBitRateSongsToCheckBox"));
  objc_msgSend(v4, "setTranscodeSongs:", (void *)-[NSButton state](v8, "state") == (void *)1);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(
         -[DeviceOptionsViewController convertHigherBitRateSongsToPopUpButton](
           self,
           "convertHigherBitRateSongsToPopUpButton"));
  objc_msgSend(v4, "setTranscodeBitRate:", -[NSPopUpButton selectedTag](v9, "selectedTag"));
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController manualManageCheckBox](self, "manualManageCheckBox"));
  objc_msgSend(v4, "setAutomaticUpdateMode:", -[NSButton state](v10, "state") == 0);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController syncOnlyCheckedCheckBox](self, "syncOnlyCheckedCheckBox"));
  objc_msgSend(v4, "setUpdateEnabledItemsOnly:", (void *)-[NSButton state](v11, "state") == (void *)1);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}