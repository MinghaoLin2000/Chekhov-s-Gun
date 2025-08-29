-[DeviceSettingsNode effectiveStateOfChildren]
signed __int64 __cdecl -[DeviceSettingsNode effectiveStateOfChildren](DeviceSettingsNode *self, SEL a2)
{
  NSMutableArray *v3; // x21
  void *v4; // x22
  signed __int64 v5; // x19
  NSMutableArray *v6; // x20
  void *v7; // x0
  void *v8; // x21
  __int64 v9; // x22
  void *i; // x23
  __int128 v12; // [xsp+0h] [xbp-100h] BYREF
  __int128 v13; // [xsp+10h] [xbp-F0h]
  __int128 v14; // [xsp+20h] [xbp-E0h]
  __int128 v15; // [xsp+30h] [xbp-D0h]
  _BYTE v16[128]; // [xsp+48h] [xbp-B8h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](self, "children"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableArray firstObject](v3, "firstObject"));
  v5 = (signed __int64)objc_msgSend(v4, "state");
  objc_release(v4);
  objc_release(v3);
  v14 = 0u;
  v15 = 0u;
  v12 = 0u;
  v13 = 0u;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](self, "children", 0LL));
  v7 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v6,
         "countByEnumeratingWithState:objects:count:",
         &v12,
         v16,
         16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_QWORD *)v13;
    while ( 2 )
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v13 != v9 )
          objc_enumerationMutation(v6);
        if ( (void *)v5 != objc_msgSend(*(id *)(*((_QWORD *)&v12 + 1) + 8LL * (_QWORD)i), "state") )
        {
          v5 = -1LL;
          goto LABEL_11;
        }
      }
      v8 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v6,
             "countByEnumeratingWithState:objects:count:",
             &v12,
             v16,
             16LL);
      if ( v8 )
        continue;
      break;
    }
  }
LABEL_11:
  objc_release(v6);
  return v5;
}