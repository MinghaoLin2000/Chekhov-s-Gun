-[DeviceMediaPickerViewController selectedNode]
MediaPickerNode *__cdecl -[DeviceMediaPickerViewController selectedNode](DeviceMediaPickerViewController *self, SEL a2)
{
  NSTableView *v3; // x21
  void *v4; // x20
  NSArray *v5; // x21
  id v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  v4 = -[NSTableView selectedRow](v3, "selectedRow");
  objc_release(v3);
  if ( v4 == (void *)-1LL )
  {
    v6 = 0LL;
  }
  else
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController mediaPickerNodes](self, "mediaPickerNodes"));
    v6 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v5, "objectAtIndexedSubscript:", v4));
    objc_release(v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (MediaPickerNode *)objc_autoreleaseReturnValue(v6);
}