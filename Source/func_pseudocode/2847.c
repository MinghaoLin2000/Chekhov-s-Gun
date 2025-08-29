-[DeviceOptionsViewController isDirty]
bool __cdecl -[DeviceOptionsViewController isDirty](DeviceOptionsViewController *self, SEL a2)
{
  AMPDeviceInfo *v3; // x20
  AMPDeviceSyncPrefs *v4; // x21
  unsigned __int8 v5; // w22
  NSButton *v6; // x23
  char v7; // w22
  AMPDeviceSyncPrefs *v8; // x20
  unsigned int v9; // w21
  NSButton *v10; // x22
  int v11; // w23
  AMPDeviceSyncPrefs *v12; // x20
  void *v13; // x21
  NSPopUpButton *v14; // x22
  void *v15; // x23
  NSButton *v16; // x20
  int v17; // w22
  AMPDeviceSyncPrefs *v18; // x20
  unsigned int v19; // w21
  AMPDeviceSyncPrefs *v20; // x20
  unsigned __int8 v21; // w21
  NSButton *v22; // x19
  bool v23; // w22

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( (unsigned int)-[AMPDeviceInfo disableAutomaticSync](v3, "disableAutomaticSync") )
  {
    objc_release(v3);
  }
  else
  {
    v4 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v5 = (unsigned __int8)-[AMPDeviceSyncPrefs dontSyncWhenConnected](v4, "dontSyncWhenConnected");
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController automaticallySyncCheckBox](self, "automaticallySyncCheckBox"));
    v7 = v5 ^ (-[NSButton state](v6, "state") == 0);
    objc_release(v6);
    objc_release(v4);
    objc_release(v3);
    if ( (v7 & 1) != 0 )
      return 1;
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v9 = (unsigned int)-[AMPDeviceSyncPrefs transcodeSongs](v8, "transcodeSongs");
  v10 = objc_retainAutoreleasedReturnValue(
          -[DeviceOptionsViewController convertHigherBitRateSongsToCheckBox](
            self,
            "convertHigherBitRateSongsToCheckBox"));
  v11 = (void *)-[NSButton state](v10, "state") != (void *)1;
  objc_release(v10);
  objc_release(v8);
  if ( v9 != v11 )
  {
    v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v13 = -[AMPDeviceSyncPrefs transcodeBitRate](v12, "transcodeBitRate");
    v14 = objc_retainAutoreleasedReturnValue(
            -[DeviceOptionsViewController convertHigherBitRateSongsToPopUpButton](
              self,
              "convertHigherBitRateSongsToPopUpButton"));
    v15 = -[NSPopUpButton selectedTag](v14, "selectedTag");
    objc_release(v14);
    objc_release(v12);
    if ( v13 == v15 )
    {
      v16 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController manualManageCheckBox](self, "manualManageCheckBox"));
      v17 = -[NSButton state](v16, "state") != 0;
      objc_release(v16);
      v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      v19 = (unsigned int)-[AMPDeviceSyncPrefs automaticUpdateMode](v18, "automaticUpdateMode");
      objc_release(v18);
      if ( v17 != v19 )
      {
        v20 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
        v21 = (unsigned __int8)-[AMPDeviceSyncPrefs updateEnabledItemsOnly](v20, "updateEnabledItemsOnly");
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController syncOnlyCheckedCheckBox](self, "syncOnlyCheckedCheckBox"));
        v23 = (void *)-[NSButton state](v22, "state") == (void *)1;
        objc_release(v22);
        objc_release(v20);
        return v21 ^ v23;
      }
    }
  }
  return 1;
}