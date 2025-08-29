-[DeviceSettingsViewController supportsTurningOffSyncOntoWithManualManage]
bool __cdecl -[DeviceSettingsViewController supportsTurningOffSyncOntoWithManualManage](
        DeviceSettingsViewController *self,
        SEL a2)
{
  void *v2; // x19
  void *v3; // x0
  void *v4; // x21
  __int64 v5; // x22
  void *i; // x23
  bool v7; // w20
  __int128 v9; // [xsp+0h] [xbp-100h] BYREF
  __int128 v10; // [xsp+10h] [xbp-F0h]
  __int128 v11; // [xsp+20h] [xbp-E0h]
  __int128 v12; // [xsp+30h] [xbp-D0h]
  _BYTE v13[128]; // [xsp+48h] [xbp-B8h] BYREF

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsViewController identifier](self, "identifier"));
  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v12 = 0u;
  v3 = objc_msgSend(&off_1000BEE50, "countByEnumeratingWithState:objects:count:", &v9, v13, 16LL);
  if ( v3 )
  {
    v4 = v3;
    v5 = *(_QWORD *)v10;
    while ( 2 )
    {
      for ( i = 0LL; i != v4; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v10 != v5 )
          objc_enumerationMutation(&off_1000BEE50);
        if ( ((unsigned int)objc_msgSend(*(id *)(*((_QWORD *)&v9 + 1) + 8LL * (_QWORD)i), "isEqualToString:", v2) & 1) != 0 )
        {
          v7 = 1;
          goto LABEL_11;
        }
      }
      v4 = objc_msgSend(&off_1000BEE50, "countByEnumeratingWithState:objects:count:", &v9, v13, 16LL);
      if ( v4 )
        continue;
      break;
    }
  }
  v7 = 0;
LABEL_11:
  objc_release(v2);
  return v7;
}