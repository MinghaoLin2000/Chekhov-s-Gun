-[DeviceSettingsInfoViewController isDirty]
bool __cdecl -[DeviceSettingsInfoViewController isDirty](DeviceSettingsInfoViewController *self, SEL a2)
{
  id v2; // x19
  void *v3; // x20
  __int64 v4; // x21
  void *i; // x22
  __int128 v7; // [xsp+0h] [xbp-100h] BYREF
  __int128 v8; // [xsp+10h] [xbp-F0h]
  __int128 v9; // [xsp+20h] [xbp-E0h]
  __int128 v10; // [xsp+30h] [xbp-D0h]
  _BYTE v11[128]; // [xsp+48h] [xbp-B8h] BYREF

  v7 = 0u;
  v8 = 0u;
  v9 = 0u;
  v10 = 0u;
  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController viewControllers](self, "viewControllers", 0LL));
  v3 = objc_msgSend(v2, "countByEnumeratingWithState:objects:count:", &v7, v11, 16LL);
  if ( v3 )
  {
    v4 = *(_QWORD *)v8;
    while ( 2 )
    {
      for ( i = 0LL; i != v3; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v8 != v4 )
          objc_enumerationMutation(v2);
        if ( ((unsigned int)objc_msgSend(*(id *)(*((_QWORD *)&v7 + 1) + 8LL * (_QWORD)i), "isDirty") & 1) != 0 )
        {
          LOBYTE(v3) = 1;
          goto LABEL_11;
        }
      }
      v3 = objc_msgSend(v2, "countByEnumeratingWithState:objects:count:", &v7, v11, 16LL);
      if ( v3 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v2);
  return (char)v3;
}