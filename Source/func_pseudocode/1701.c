-[DeviceSettingsTabContentViewController setIsFiltered:]
void __cdecl -[DeviceSettingsTabContentViewController setIsFiltered:](
        DeviceSettingsTabContentViewController *self,
        SEL a2,
        bool a3)
{
  DeviceSettingsTabContentOutlineView *v5; // x21
  id v6; // x22
  DeviceSettingsTabContentOutlineView *v7; // x21
  DeviceSettingsTabContentOutlineView *v8; // x20
  id v9; // x21
  DeviceSettingsNode *v10; // x22
  DeviceSettingsTabContentOutlineView *v11; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( self->_isFiltered != a3 )
  {
    if ( a3 )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView expandedStateOfItem:](v5, "expandedStateOfItem:", 0LL));
      -[DeviceSettingsTabContentViewController setSavedExpandedState:](self, "setSavedExpandedState:", v6);
      objc_release(v6);
      objc_release(v5);
      v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
      -[DeviceSettingsTabContentOutlineView expandItem:expandChildren:](v7, "expandItem:expandChildren:", 0LL, 1LL);
      objc_release(v7);
      self->_isFiltered = a3;
    }
    else
    {
      self->_isFiltered = 0;
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
      v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController savedExpandedState](self, "savedExpandedState"));
      v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
      -[DeviceSettingsTabContentOutlineView setExpandedState:ofItem:](v8, "setExpandedState:ofItem:", v9, v10);
      objc_release(v10);
      objc_release(v9);
      objc_release(v8);
    }
  }
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v11, "reloadData");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}