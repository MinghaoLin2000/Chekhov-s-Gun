-[TrackListViewController viewDidLoad]
void __cdecl -[TrackListViewController viewDidLoad](TrackListViewController *self, SEL a2)
{
  TrackListTableView *v3; // x20
  TrackListTableView *v4; // x20
  TrackListTableView *v5; // x20
  TrackListTableView *v6; // x20
  TrackListTableView *v7; // x20
  _BOOL8 v8; // x20
  TrackListTableView *v9; // x21
  NSArray *v10; // x21
  NSArray *v11; // x20
  TrackListTableView *v12; // x21
  DeviceDragHandler *v13; // x21
  TrackListTableView *v14; // x22
  TrackListTableView *v15; // x21
  void *v16; // x22
  void *v17; // x21
  NSArray *v18; // x23
  TrackListTableView *v19; // x24
  objc_super v20; // [xsp+0h] [xbp-50h] BYREF
  void *v21; // [xsp+10h] [xbp-40h] BYREF

  v20.receiver = self;
  v20.super_class = (Class)&OBJC_CLASS___TrackListViewController;
  -[TrackListViewController viewDidLoad](&v20, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setDataSource:](v4, "setDataSource:", self);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setAllowsColumnResizing:](v5, "setAllowsColumnResizing:", 1LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setColumnAutoresizingStyle:](v6, "setColumnAutoresizingStyle:", 1LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setUsesAlternatingRowBackgroundColors:](v7, "setUsesAlternatingRowBackgroundColors:", 1LL);
  objc_release(v7);
  v8 = -[TrackListViewController allowsMultipleSelection](self, "allowsMultipleSelection");
  v9 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setAllowsMultipleSelection:](v9, "setAllowsMultipleSelection:", v8);
  objc_release(v9);
  v10 = objc_retainAutoreleasedReturnValue(+[NSFilePromiseReceiver readableDraggedTypes](&OBJC_CLASS___NSFilePromiseReceiver, "readableDraggedTypes"));
  v11 = objc_retainAutoreleasedReturnValue(-[NSArray arrayByAddingObject:](v10, "arrayByAddingObject:", NSPasteboardTypeFileURL));
  objc_release(v10);
  v12 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView registerForDraggedTypes:](v12, "registerForDraggedTypes:", v11);
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[TrackListViewController deviceDragHandler](self, "deviceDragHandler"));
  v14 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setDeviceDragHandler:](v14, "setDeviceDragHandler:", v13);
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  v16 = objc_retainAutoreleasedReturnValue(-[TrackListTableView tableColumnWithIdentifier:](v15, "tableColumnWithIdentifier:", CFSTR("title")));
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "sortDescriptorPrototype"));
  v21 = v17;
  v18 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v21, 1LL));
  v19 = objc_retainAutoreleasedReturnValue(-[TrackListViewController tableView](self, "tableView"));
  -[TrackListTableView setSortDescriptors:](v19, "setSortDescriptors:", v18);
  objc_release(v19);
  objc_release(v18);
  objc_release(v17);
  -[TrackListViewController installColumnMenu](self, "installColumnMenu");
  objc_release(v16);
  objc_release(v11);
}