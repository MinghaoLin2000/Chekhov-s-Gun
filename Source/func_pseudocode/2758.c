-[DeviceSettingsNode adjustAncestorsState]
void __cdecl -[DeviceSettingsNode adjustAncestorsState](DeviceSettingsNode *self, SEL a2)
{
  void *v3; // x19
  DeviceSettingsNode *v4; // x0
  DeviceSettingsNode *v5; // x20
  DeviceSettingsNode *v6; // x21

  v3 = -[DeviceSettingsNode state](self, "state");
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode parent](self, "parent"));
  if ( v4 )
  {
    v5 = v4;
    do
    {
      if ( v3 != (void *)-1LL )
      {
        if ( -[DeviceSettingsNode hasChildren](v5, "hasChildren") )
          v3 = -[DeviceSettingsNode effectiveStateOfChildren](v5, "effectiveStateOfChildren");
      }
      -[DeviceSettingsNode setState:](v5, "setState:", v3);
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode parent](v5, "parent"));
      objc_release(v5);
      v5 = v6;
    }
    while ( v6 );
  }
}