-[DeviceMediaPickerViewController viewDidLoad]
void __cdecl -[DeviceMediaPickerViewController viewDidLoad](DeviceMediaPickerViewController *self, SEL a2)
{
  NSTableView *v3; // x20
  NSTableView *v4; // x20
  NSTableView *v5; // x20
  double v6; // d0
  double v7; // d8
  NSTableView *v8; // x20
  NSTableView *v9; // x20
  NSTableView *v10; // x20
  NSTableView *v11; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  -[NSTableView setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  -[NSTableView setDataSource:](v4, "setDataSource:", self);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  -[NSTableView intercellSpacing](v5, "intercellSpacing");
  v7 = v6;
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  -[NSTableView setIntercellSpacing:](v8, "setIntercellSpacing:", v7, 0.0);
  objc_release(v8);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  -[NSTableView setTranslatesAutoresizingMaskIntoConstraints:](v9, "setTranslatesAutoresizingMaskIntoConstraints:", 0LL);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  -[NSTableView setSelectionHighlightStyle:](v10, "setSelectionHighlightStyle:", 1LL);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceMediaPickerViewController tableView](self, "tableView"));
  -[NSTableView reloadData](v11, "reloadData");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v11);
}