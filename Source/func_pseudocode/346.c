-[DeviceSettingsRentalsTabContentViewController outlineView:numberOfChildrenOfItem:]
signed __int64 __cdecl -[DeviceSettingsRentalsTabContentViewController outlineView:numberOfChildrenOfItem:](
        DeviceSettingsRentalsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  __int64 v4; // x19
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x29
  __int64 v9; // x30
  DeviceSettingsTabContentOutlineView *v12; // x20
  DeviceSettingsTabContentOutlineView *v13; // x21
  DeviceSettingsNode *v14; // x0
  DeviceSettingsNode *v15; // x19
  NSMutableArray *v16; // x20
  void *v17; // x21
  __int64 v18; // [xsp+8h] [xbp-28h]
  __int64 v19; // [xsp+10h] [xbp-20h]
  __int64 v20; // [xsp+18h] [xbp-18h]

  if ( a4 )
    return 0LL;
  v18 = v6;
  v19 = v5;
  v20 = v4;
  v12 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  objc_release(v12);
  objc_release(v13);
  if ( v13 == v12 )
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsRentalsTabContentViewController trailingModel](self, "trailingModel"));
  else
    v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  v15 = v14;
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v14, "children", v7, v18, v19, v20, v8, v9));
  v17 = -[NSMutableArray count](v16, "count");
  objc_release(v16);
  objc_release(v15);
  return (signed __int64)v17;
}