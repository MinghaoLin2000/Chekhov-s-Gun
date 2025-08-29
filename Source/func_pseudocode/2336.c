-[DeviceModeFinderViewController isManageStorageButtonHidden]
bool __cdecl -[DeviceModeFinderViewController isManageStorageButtonHidden](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  AMPDeviceSyncPrefs *v3; // x19
  bool v4; // w21
  AMPDeviceInfo *v5; // x20
  AMPDeviceSyncPrefs *v6; // x22

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
  if ( ((unsigned int)-[AMPDeviceSyncPrefs automaticUpdateMode](v3, "automaticUpdateMode") & 1) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceInfo](self, "deviceInfo"));
    if ( ((unsigned int)-[AMPDeviceInfo supportsFlashUIForShuffle](v5, "supportsFlashUIForShuffle") & 1) != 0 )
    {
      v4 = 1;
    }
    else
    {
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceViewController deviceSyncPrefs](self, "deviceSyncPrefs"));
      if ( ((unsigned int)-[AMPDeviceSyncPrefs needsRestoreFromBackup](v6, "needsRestoreFromBackup") & 1) != 0
        || -[DeviceModeFinderViewController isEraseInProgress](self, "isEraseInProgress") )
      {
        v4 = 1;
      }
      else
      {
        v4 = -[DeviceModeFinderViewController isRestoreFromBackupInProgress](self, "isRestoreFromBackupInProgress");
      }
      objc_release(v6);
    }
    objc_release(v5);
  }
  objc_release(v3);
  return v4;
}