-[DeviceSettingsTabContentOutlineView setExpandedState:ofItem:]
void __cdecl -[DeviceSettingsTabContentOutlineView setExpandedState:ofItem:](
        DeviceSettingsTabContentOutlineView *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x21
  DeviceSettingsTabContentOutlineView *v9; // x22
  __int64 v10; // x24
  void *v11; // x23
  __int64 v12; // x25
  void *v13; // x26
  void *v14; // x28
  void *v15; // x27
  void *v16; // x19
  id v17; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView dataSource](self, "dataSource"));
  v9 = objc_retain(self);
  v10 = (__int64)objc_msgSend(v8, "outlineView:numberOfChildrenOfItem:", v9, v7);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectEnumerator"));
  if ( v10 >= 1 )
  {
    v17 = v6;
    v12 = 0LL;
    v13 = 0LL;
    do
    {
      v14 = v13;
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "outlineView:child:ofItem:", v9, v12, v7));
      v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "nextObject"));
      objc_release(v14);
      LOBYTE(v14) = (unsigned __int8)objc_msgSend(v13, "boolValue");
      -[DeviceSettingsTabContentOutlineView expandItem:](v9, "expandItem:", v15);
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "nextObject"));
      -[DeviceSettingsTabContentOutlineView setExpandedState:ofItem:](v9, "setExpandedState:ofItem:", v16, v15);
      objc_release(v16);
      if ( ((unsigned __int8)v14 & 1) == 0 )
        -[DeviceSettingsTabContentOutlineView collapseItem:](v9, "collapseItem:", v15);
      objc_release(v15);
      ++v12;
    }
    while ( v10 != v12 );
    objc_release(v13);
    v6 = v17;
  }
  objc_release(v11);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}