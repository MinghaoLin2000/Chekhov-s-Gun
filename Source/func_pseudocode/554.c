-[DeviceSettingsDetailsTabContentViewController outlineViewSelectionDidChange:]
void __cdecl -[DeviceSettingsDetailsTabContentViewController outlineViewSelectionDidChange:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  DeviceSettingsTabContentOutlineView *v4; // x19
  DeviceSettingsTabContentOutlineView *v5; // x21
  void *v6; // x21
  DeviceSettingsTabContentOutlineView *v7; // x22
  void *v8; // x21
  DeviceSettingsTabContentOutlineView *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "object"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  objc_release(v5);
  if ( v4 == v5 )
  {
    v6 = -[DeviceSettingsTabContentOutlineView selectedRow](v4, "selectedRow");
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView itemAtRow:](v7, "itemAtRow:", v6));
    objc_release(v7);
    -[DeviceSettingsDetailsTabContentViewController loadDetailsModelForNode:](self, "loadDetailsModelForNode:", v8);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
    -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](v9, "reloadItem:reloadChildren:", 0LL, 1LL);
    -[DeviceSettingsTabContentOutlineView setNeedsDisplay:](v9, "setNeedsDisplay:", 1LL);
    -[DeviceSettingsTabContentOutlineView expandItem:expandChildren:](v9, "expandItem:expandChildren:", 0LL, 1LL);
    objc_release(v9);
    objc_release(v8);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}