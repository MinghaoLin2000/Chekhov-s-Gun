-[DeviceSettingsInfoViewController revert]
void __cdecl -[DeviceSettingsInfoViewController revert](DeviceSettingsInfoViewController *self, SEL a2)
{
  id v2; // x19
  void *v3; // x0
  void *v4; // x20
  __int64 v5; // x22
  void *i; // x23
  void *v7; // x21
  __int128 v8; // [xsp+0h] [xbp-100h] BYREF
  __int128 v9; // [xsp+10h] [xbp-F0h]
  __int128 v10; // [xsp+20h] [xbp-E0h]
  __int128 v11; // [xsp+30h] [xbp-D0h]
  _BYTE v12[128]; // [xsp+48h] [xbp-B8h] BYREF

  v8 = 0u;
  v9 = 0u;
  v10 = 0u;
  v11 = 0u;
  v2 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsInfoViewController viewControllers](self, "viewControllers", 0LL));
  v3 = objc_msgSend(v2, "countByEnumeratingWithState:objects:count:", &v8, v12, 16LL);
  if ( v3 )
  {
    v4 = v3;
    v5 = *(_QWORD *)v9;
    do
    {
      for ( i = 0LL; i != v4; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v9 != v5 )
          objc_enumerationMutation(v2);
        v7 = *(void **)(*((_QWORD *)&v8 + 1) + 8LL * (_QWORD)i);
        if ( (unsigned int)objc_msgSend(v7, "isDirty") )
          objc_msgSend(v7, "revert");
      }
      v4 = objc_msgSend(v2, "countByEnumeratingWithState:objects:count:", &v8, v12, 16LL);
    }
    while ( v4 );
  }
  objc_release(v2);
}