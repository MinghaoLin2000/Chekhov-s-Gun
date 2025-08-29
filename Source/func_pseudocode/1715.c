-[DeviceSettingsTabContentViewController outlineView:isItemExpandable:]
bool __cdecl -[DeviceSettingsTabContentViewController outlineView:isItemExpandable:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  DeviceSettingsTabContentOutlineView *v6; // x19
  id v7; // x20
  DeviceSettingsTabContentOutlineView *v8; // x22
  id v9; // x21
  __int64 v10; // x0
  bool v11; // w22

  v6 = (DeviceSettingsTabContentOutlineView *)objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  objc_release(v8);
  if ( v8 == v6 )
  {
    v11 = 0;
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(
           -[DeviceSettingsTabContentViewController childrenForItem:outlineView:](
             self,
             "childrenForItem:outlineView:",
             v7,
             v6));
    v10 = objc_opt_class(&OBJC_CLASS___DeviceSettingsNode);
    v11 = (objc_opt_isKindOfClass(v7, v10) & 1) != 0 && ((unsigned int)objc_msgSend(v7, "isFolder") & 1) != 0
       || objc_msgSend(v9, "count") != 0LL;
    objc_release(v9);
  }
  objc_release(v7);
  objc_release(v6);
  return v11;
}