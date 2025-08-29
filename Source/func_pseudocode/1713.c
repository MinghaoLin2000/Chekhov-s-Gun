-[DeviceSettingsTabContentViewController outlineView:numberOfChildrenOfItem:]
signed __int64 __cdecl -[DeviceSettingsTabContentViewController outlineView:numberOfChildrenOfItem:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  DeviceSettingsTabContentOutlineView *v6; // x19
  id v7; // x20
  DeviceSettingsTabContentOutlineView *v8; // x22
  id v9; // x22
  signed __int64 v10; // x21

  v6 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  objc_release(v8);
  if ( v8 == v6 )
  {
    v10 = 1LL;
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(
           -[DeviceSettingsTabContentViewController childrenForItem:outlineView:](
             self,
             "childrenForItem:outlineView:",
             v7,
             v6));
    v10 = (signed __int64)objc_msgSend(v9, "count");
    objc_release(v9);
  }
  objc_release(v7);
  objc_release(v6);
  return v10;
}