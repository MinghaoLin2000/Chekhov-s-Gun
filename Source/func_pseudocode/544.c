-[DeviceSettingsDetailsTabContentViewController setSourceNodesState:]
void __cdecl -[DeviceSettingsDetailsTabContentViewController setSourceNodesState:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        signed __int64 a3)
{
  DeviceSettingsNode *v5; // x21
  NSMutableArray *v6; // x22
  NSMutableArray *v7; // x21
  void *v8; // x0
  void *v9; // x22
  __int64 v10; // x25
  void *i; // x26
  void *v12; // x23
  NSMutableSet *v13; // x24
  __int128 v14; // [xsp+0h] [xbp-120h] BYREF
  __int128 v15; // [xsp+10h] [xbp-110h]
  __int128 v16; // [xsp+20h] [xbp-100h]
  __int128 v17; // [xsp+30h] [xbp-F0h]
  _BYTE v18[128]; // [xsp+48h] [xbp-D8h] BYREF

  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v5, "children"));
  objc_release(v5);
  v16 = 0u;
  v17 = 0u;
  v14 = 0u;
  v15 = 0u;
  v7 = objc_retain(v6);
  v8 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
         v7,
         "countByEnumeratingWithState:objects:count:",
         &v14,
         v18,
         16LL);
  if ( v8 )
  {
    v9 = v8;
    v10 = *(_QWORD *)v15;
    do
    {
      for ( i = 0LL; i != v9; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v15 != v10 )
          objc_enumerationMutation(v7);
        v12 = *(void **)(*((_QWORD *)&v14 + 1) + 8LL * (_QWORD)i);
        objc_msgSend(v12, "setState:setChildren:setAncestors:", a3, 1LL, 1LL, (_QWORD)v14);
        v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController checkedItems](self, "checkedItems"));
        -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
          self,
          "updateCheckedItems:withNode:updateChildren:updateAncestors:",
          v13,
          v12,
          1LL,
          1LL);
        objc_release(v13);
      }
      v9 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
             v7,
             "countByEnumeratingWithState:objects:count:",
             &v14,
             v18,
             16LL);
    }
    while ( v9 );
  }
  objc_release(v7);
  objc_release(v7);
}