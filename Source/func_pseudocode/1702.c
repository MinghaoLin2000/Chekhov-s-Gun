-[DeviceSettingsTabContentViewController clickCheckBox:]
void __cdecl -[DeviceSettingsTabContentViewController clickCheckBox:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  __int64 v5; // x22
  void *v6; // x21
  DeviceSettingsNode *v7; // x23
  NSMutableArray *v8; // x24
  NSMutableArray *v9; // x23
  void *v10; // x0
  void *v11; // x24
  __int64 v12; // x27
  void *i; // x28
  void *v14; // x25
  NSMutableSet *v15; // x26
  DeviceSettingsTabContentOutlineView *v16; // x22
  NSMutableSet *v17; // x22
  DeviceSettingsTabContentOutlineView *v18; // x22
  DeviceSettingsTabContentOutlineView *v19; // x22
  __int128 v20; // [xsp+0h] [xbp-120h] BYREF
  __int128 v21; // [xsp+10h] [xbp-110h]
  __int128 v22; // [xsp+20h] [xbp-100h]
  __int128 v23; // [xsp+30h] [xbp-F0h]
  _BYTE v24[128]; // [xsp+40h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v5 = (__int64)objc_msgSend(v4, "state");
  if ( v5 == -1 )
  {
    v5 = 1LL;
    objc_msgSend(v4, "setState:", 1LL);
  }
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "currentEvent"));
  if ( ((unsigned __int64)objc_msgSend(v6, "modifierFlags") & 0xFFFF0000) == 0x100000 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v7, "children"));
    objc_release(v7);
    v22 = 0u;
    v23 = 0u;
    v20 = 0u;
    v21 = 0u;
    v9 = objc_retain(v8);
    v10 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
            v9,
            "countByEnumeratingWithState:objects:count:",
            &v20,
            v24,
            16LL);
    if ( v10 )
    {
      v11 = v10;
      v12 = *(_QWORD *)v21;
      do
      {
        for ( i = 0LL; i != v11; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v21 != v12 )
            objc_enumerationMutation(v9);
          v14 = *(void **)(*((_QWORD *)&v20 + 1) + 8LL * (_QWORD)i);
          objc_msgSend(v14, "setState:setChildren:setAncestors:", v5, 1LL, 1LL, (_QWORD)v20);
          v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController checkedItems](self, "checkedItems"));
          -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
            self,
            "updateCheckedItems:withNode:updateChildren:updateAncestors:",
            v15,
            v14,
            1LL,
            1LL);
          objc_release(v15);
        }
        v11 = -[NSMutableArray countByEnumeratingWithState:objects:count:](
                v9,
                "countByEnumeratingWithState:objects:count:",
                &v20,
                v24,
                16LL);
      }
      while ( v11 );
    }
    objc_release(v9);
    v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
    -[DeviceSettingsTabContentOutlineView reloadData](v16, "reloadData");
    objc_release(v16);
    -[DeviceSettingsTabContentViewController postDidChangeNodes:](self, "postDidChangeNodes:", v9);
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "node"));
    -[NSMutableArray setState:setChildren:setAncestors:](v9, "setState:setChildren:setAncestors:", v5, 1LL, 1LL);
    v17 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController checkedItems](self, "checkedItems"));
    -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
      self,
      "updateCheckedItems:withNode:updateChildren:updateAncestors:",
      v17,
      v9,
      1LL,
      1LL);
    objc_release(v17);
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
    -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](v18, "reloadItem:reloadChildren:", v9, 1LL);
    objc_release(v18);
    v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
    -[DeviceSettingsTabContentOutlineView reloadAncestorsOfItem:](v19, "reloadAncestorsOfItem:", v9);
    objc_release(v19);
    -[DeviceSettingsTabContentViewController postDidChangeNode:](self, "postDidChangeNode:", v9);
  }
  objc_release(v9);
  objc_release(v6);
  objc_release(v4);
}