-[DeviceSettingsTabContentOutlineView reloadAncestorsOfItem:]
void __cdecl -[DeviceSettingsTabContentOutlineView reloadAncestorsOfItem:](
        DeviceSettingsTabContentOutlineView *self,
        SEL a2,
        id a3)
{
  void *v4; // x0
  void *v5; // x20
  void *v6; // x21

  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView parentForItem:](self, "parentForItem:", a3));
  if ( v4 )
  {
    v5 = v4;
    do
    {
      -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](self, "reloadItem:reloadChildren:", v5, 0LL);
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView parentForItem:](self, "parentForItem:", v5));
      objc_release(v5);
      v5 = v6;
    }
    while ( v6 );
  }
}