-[DeviceSettingsTabContentViewController shouldDisableAndCheckNode:]
bool __cdecl -[DeviceSettingsTabContentViewController shouldDisableAndCheckNode:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  NSSet *v5; // x19
  unsigned __int8 v6; // w21

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController disableAndCheckSelectedItems](self, "disableAndCheckSelectedItems"));
  v6 = -[NSSet containsObject:](v5, "containsObject:", v4);
  objc_release(v4);
  objc_release(v5);
  return v6;
}