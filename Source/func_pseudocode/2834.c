-[DeviceOptionsViewController loadUIFromPrefs]
void __cdecl -[DeviceOptionsViewController loadUIFromPrefs](DeviceOptionsViewController *self, SEL a2)
{
  AMPDeviceInfo *v3; // x20
  unsigned __int8 v4; // w21
  NSButton *v5; // x20
  NSButton *v6; // x0
  NSButton *v7; // x20
  __int64 v8; // x2
  AMPDeviceSyncPrefs *v9; // x20
  __int64 v10; // x21
  NSButton *v11; // x22
  AMPDeviceSyncPrefs *v12; // x20
  __int64 v13; // x21
  NSButton *v14; // x22
  AMPDeviceSyncPrefs *v15; // x20
  NSPopUpButton *v16; // x0
  NSPopUpButton *v17; // x20
  AMPDeviceSyncPrefs *v18; // x21
  AMPDeviceSyncPrefs *v19; // x20
  __int64 v20; // x21
  NSButton *v21; // x22
  AMPDeviceInfo *v22; // x20
  void *v23; // x21
  NSButton *v24; // x22
  AMPDeviceInfo *v25; // x20
  unsigned __int8 v26; // w21
  __int64 v27; // x23
  NSButton *v28; // x24
  AMPDeviceSyncPrefs *v29; // x20
  __int64 v30; // x21
  NSButton *v31; // x22
  AMPDeviceInfo *v32; // x20
  AMPDeviceInfo *v33; // x21
  AMPDeviceInfo *v34; // x22
  unsigned int v35; // w23
  NSBundle *v36; // x0
  NSBundle *v37; // x20
  const __CFString *v38; // x2
  AMPDeviceInfo *v39; // x20
  AMPDeviceInfo *v40; // x21
  unsigned __int8 v41; // w22
  NSString *v42; // x21
  NSButton *v43; // x22
  AMPDeviceInfo *v44; // x20
  NSButton *v45; // x0
  NSButton *v46; // x20
  AMPDevicesClient *v47; // x20
  AMPDevice *v48; // x21
  _QWORD v49[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( !(unsigned int)-[DeviceOptionsViewController isViewLoaded](self, "isViewLoaded") )
    return;
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v4 = (unsigned __int8)-[AMPDeviceInfo disableAutomaticSync](v3, "disableAutomaticSync");
  objc_release(v3);
  if ( (v4 & 1) != 0 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController automaticallySyncCheckBox](self, "automaticallySyncCheckBox"));
    -[NSButton setState:](v5, "setState:", 0LL);
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController automaticallySyncCheckBox](self, "automaticallySyncCheckBox"));
    v7 = v6;
    v8 = 0LL;
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    v10 = (unsigned int)-[AMPDeviceSyncPrefs dontSyncWhenConnected](v9, "dontSyncWhenConnected") ^ 1;
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController automaticallySyncCheckBox](self, "automaticallySyncCheckBox"));
    -[NSButton setState:](v11, "setState:", v10);
    objc_release(v11);
    objc_release(v9);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController automaticallySyncCheckBox](self, "automaticallySyncCheckBox"));
    v7 = v6;
    v8 = 1LL;
  }
  -[NSButton setEnabled:](v6, "setEnabled:", v8);
  objc_release(v7);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v13 = (unsigned int)-[AMPDeviceSyncPrefs transcodeSongs](v12, "transcodeSongs");
  v14 = objc_retainAutoreleasedReturnValue(
          -[DeviceOptionsViewController convertHigherBitRateSongsToCheckBox](
            self,
            "convertHigherBitRateSongsToCheckBox"));
  -[NSButton setState:](v14, "setState:", v13);
  objc_release(v14);
  objc_release(v12);
  v15 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  LOBYTE(v13) = (unsigned __int8)-[AMPDeviceSyncPrefs transcodeSongs](v15, "transcodeSongs");
  objc_release(v15);
  v16 = objc_retainAutoreleasedReturnValue(
          -[DeviceOptionsViewController convertHigherBitRateSongsToPopUpButton](
            self,
            "convertHigherBitRateSongsToPopUpButton"));
  v17 = v16;
  if ( (v13 & 1) != 0 )
  {
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
    -[NSPopUpButton selectItemWithTag:](
      v17,
      "selectItemWithTag:",
      -[AMPDeviceSyncPrefs transcodeBitRate](v18, "transcodeBitRate"));
    objc_release(v18);
  }
  else
  {
    -[NSPopUpButton selectItemAtIndex:](v16, "selectItemAtIndex:", 0LL);
    objc_release(v17);
    v17 = objc_retainAutoreleasedReturnValue(
            -[DeviceOptionsViewController convertHigherBitRateSongsToPopUpButton](
              self,
              "convertHigherBitRateSongsToPopUpButton"));
    -[NSPopUpButton setEnabled:](v17, "setEnabled:", 0LL);
  }
  objc_release(v17);
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v20 = (unsigned int)-[AMPDeviceSyncPrefs automaticUpdateMode](v19, "automaticUpdateMode") ^ 1;
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController manualManageCheckBox](self, "manualManageCheckBox"));
  -[NSButton setState:](v21, "setState:", v20);
  objc_release(v21);
  objc_release(v19);
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v23 = -[AMPDeviceInfo supportsFlashUIForShuffle](v22, "supportsFlashUIForShuffle");
  v24 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController manualManageCheckBox](self, "manualManageCheckBox"));
  -[NSButton setHidden:](v24, "setHidden:", v23);
  objc_release(v24);
  objc_release(v22);
  v25 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v26 = (unsigned __int8)-[AMPDeviceInfo supportsCheckedSongs](v25, "supportsCheckedSongs");
  if ( (v26 & 1) != 0 )
  {
    v27 = 0LL;
  }
  else
  {
    v24 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v27 = (unsigned int)-[NSButton supportsCheckedVideos](v24, "supportsCheckedVideos") ^ 1;
  }
  v28 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController syncOnlyCheckedCheckBox](self, "syncOnlyCheckedCheckBox"));
  -[NSButton setHidden:](v28, "setHidden:", v27);
  objc_release(v28);
  if ( (v26 & 1) == 0 )
    objc_release(v24);
  objc_release(v25);
  v29 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  v30 = (unsigned int)-[AMPDeviceSyncPrefs updateEnabledItemsOnly](v29, "updateEnabledItemsOnly");
  v31 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController syncOnlyCheckedCheckBox](self, "syncOnlyCheckedCheckBox"));
  -[NSButton setState:](v31, "setState:", v30);
  objc_release(v31);
  objc_release(v29);
  v32 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( !(unsigned int)-[AMPDeviceInfo supportsVideo](v32, "supportsVideo") )
    goto LABEL_18;
  v33 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( ((unsigned int)-[AMPDeviceInfo supportsCheckedSongs](v33, "supportsCheckedSongs") & 1) == 0 )
  {
    objc_release(v33);
LABEL_18:
    objc_release(v32);
    goto LABEL_19;
  }
  v34 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  v35 = (unsigned int)-[AMPDeviceInfo supportsCheckedVideos](v34, "supportsCheckedVideos");
  objc_release(v34);
  objc_release(v33);
  objc_release(v32);
  if ( v35 )
  {
    v36 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v37 = v36;
    v38 = CFSTR("Sync only checked songs and videos");
    goto LABEL_24;
  }
LABEL_19:
  v39 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  if ( ((unsigned int)-[AMPDeviceInfo supportsVideo](v39, "supportsVideo") & 1) != 0 )
  {
    v40 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    v41 = (unsigned __int8)-[AMPDeviceInfo supportsCheckedSongs](v40, "supportsCheckedSongs");
    objc_release(v40);
    objc_release(v39);
    if ( (v41 & 1) == 0 )
    {
      v36 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
      v37 = v36;
      v38 = CFSTR("Sync only checked videos");
      goto LABEL_24;
    }
  }
  else
  {
    objc_release(v39);
  }
  v36 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v37 = v36;
  v38 = CFSTR("Sync only checked songs");
LABEL_24:
  v42 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v36,
            "localizedStringForKey:value:table:",
            v38,
            &stru_1000BA220,
            0LL));
  v43 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController syncOnlyCheckedCheckBox](self, "syncOnlyCheckedCheckBox"));
  -[NSButton setTitle:](v43, "setTitle:", v42);
  objc_release(v43);
  objc_release(v42);
  objc_release(v37);
  v44 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
  LOBYTE(v42) = (unsigned __int8)-[AMPDeviceInfo supportsAccessibility](v44, "supportsAccessibility");
  objc_release(v44);
  v45 = objc_retainAutoreleasedReturnValue(-[DeviceOptionsViewController configureAccesibilityButton](self, "configureAccesibilityButton"));
  v46 = v45;
  if ( ((unsigned __int8)v42 & 1) != 0 )
  {
    -[NSButton setEnabled:](v45, "setEnabled:", 0LL);
    objc_release(v46);
    v47 = objc_retainAutoreleasedReturnValue(-[DeviceViewController devicesClient](self, "devicesClient"));
    v48 = objc_retainAutoreleasedReturnValue(-[DeviceViewController device](self, "device"));
    v49[0] = _NSConcreteStackBlock;
    v49[1] = 3254779904LL;
    v49[2] = sub_100067118;
    v49[3] = &unk_1000B9FB8;
    v49[4] = self;
    -[AMPDevicesClient fetchAccessibilityPrefsForDevice:withReply:](
      v47,
      "fetchAccessibilityPrefsForDevice:withReply:",
      v48,
      v49);
    objc_release(v48);
    objc_release(v47);
  }
  else
  {
    -[NSButton setHidden:](v45, "setHidden:", 1LL);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v46);
  }
}