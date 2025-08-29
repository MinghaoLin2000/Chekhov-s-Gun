-[DeviceSettingsTabContentOutlineView expandedStateOfItem:]
id __cdecl -[DeviceSettingsTabContentOutlineView expandedStateOfItem:](
        DeviceSettingsTabContentOutlineView *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x21
  DeviceSettingsTabContentOutlineView *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x23
  __int64 i; // x24
  void *v11; // x25
  void *v12; // x26
  NSNumber *v13; // x27
  id v14; // x26
  id v15; // x26
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  if ( v4 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView dataSource](self, "dataSource"));
    v7 = objc_retain(self);
    v8 = (__int64)objc_msgSend(v6, "outlineView:numberOfChildrenOfItem:", v7, v4);
    if ( v8 >= 1 )
    {
      v9 = v8;
      for ( i = 0LL; i != v9; ++i )
      {
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "outlineView:child:ofItem:", v7, i, v4));
        v12 = -[DeviceSettingsTabContentOutlineView isItemExpanded:](v7, "isItemExpanded:", v11);
        v13 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v12));
        objc_msgSend(v5, "addObject:", v13);
        objc_release(v13);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
          v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView expandedStateOfItem:](v7, "expandedStateOfItem:", v11));
          objc_msgSend(v5, "addObject:", v14);
          objc_release(v14);
        }
        else
        {
          -[DeviceSettingsTabContentOutlineView expandItem:](v7, "expandItem:", v11);
          v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView expandedStateOfItem:](v7, "expandedStateOfItem:", v11));
          objc_msgSend(v5, "addObject:", v15);
          objc_release(v15);
          -[DeviceSettingsTabContentOutlineView collapseItem:](v7, "collapseItem:", v11);
        }
        objc_release(v11);
      }
    }
    objc_release(v7);
    objc_release(v6);
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}