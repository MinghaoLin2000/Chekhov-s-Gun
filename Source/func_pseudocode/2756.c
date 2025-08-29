-[DeviceSettingsNode setState:setChildren:setAncestors:]
void __cdecl -[DeviceSettingsNode setState:setChildren:setAncestors:](
        DeviceSettingsNode *self,
        SEL a2,
        signed __int64 a3,
        bool a4,
        bool a5)
{
  _BOOL4 v5; // w20
  _BOOL4 v6; // w22
  NSMutableArray *v9; // x22
  void *v10; // x0
  void *v11; // x23
  __int64 v12; // x24
  void *v13; // x25
  __int128 v14; // [xsp+0h] [xbp-110h] BYREF
  __int128 v15; // [xsp+10h] [xbp-100h]
  __int128 v16; // [xsp+20h] [xbp-F0h]
  __int128 v17; // [xsp+30h] [xbp-E0h]
  _BYTE v18[128]; // [xsp+48h] [xbp-C8h] BYREF

  v5 = a5;
  v6 = a4;
  -[DeviceSettingsNode setState:](self, "setState:");
  if ( v6 )
  {
    v16 = 0u;
    v17 = 0u;
    v14 = 0u;
    v15 = 0u;
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](self, "children", 0LL));
    v10 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
            v9,
            "countByEnumeratingWithState:objects:count:",
            &v14,
            v18,
            16LL);
    if ( v10 )
    {
      v11 = v10;
      v12 = *(_QWORD *)v15;
      do
      {
        v13 = 0LL;
        do
        {
          if ( *(_QWORD *)v15 != v12 )
            objc_enumerationMutation(v9);
          objc_msgSend(
            *(id *)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)v13),
            "setState:setChildren:setAncestors:",
            a3,
            1LL,
            0LL);
          v13 = (char *)v13 + 1;
        }
        while ( v11 != v13 );
        v11 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
                v9,
                "countByEnumeratingWithState:objects:count:",
                &v14,
                v18,
                16LL);
      }
      while ( v11 );
    }
    objc_release(v9);
  }
  if ( v5 )
    -[DeviceSettingsNode adjustAncestorsState](self, "adjustAncestorsState");
}