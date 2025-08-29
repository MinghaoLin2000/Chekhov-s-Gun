-[DeviceSettingsDetailsTabContentViewController shouldDisableAndCheckNode:]
bool __cdecl -[DeviceSettingsDetailsTabContentViewController shouldDisableAndCheckNode:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSSet *v5; // x20
  unsigned __int8 v6; // w21
  NSSet *v7; // x22

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController disableAndCheckSelectedItems](self, "disableAndCheckSelectedItems"));
  if ( -[NSSet containsObject:](v5, "containsObject:", v4) )
  {
    v6 = 1;
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(
           -[DeviceSettingsDetailsTabContentViewController disableAndCheckSelectedDetailItems](
             self,
             "disableAndCheckSelectedDetailItems"));
    v6 = -[NSSet containsObject:](v7, "containsObject:", v4);
    objc_release(v7);
  }
  objc_release(v5);
  objc_release(v4);
  return v6;
}