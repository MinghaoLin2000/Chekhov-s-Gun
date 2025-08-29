-[DeviceFileSharingViewController setUpOutlineView]
void __cdecl -[DeviceFileSharingViewController setUpOutlineView](DeviceFileSharingViewController *self, SEL a2)
{
  NSOutlineView *v3; // x20
  NSOutlineView *v4; // x20
  NSOutlineView *v5; // x20
  id v6; // x20
  id v7; // x21
  NSBundle *v8; // x22
  NSString *v9; // x24
  void *v10; // x21
  NSOutlineView *v11; // x22
  NSOutlineView *v12; // x22
  NSArray *v13; // x23
  NSOutlineView *v14; // x19
  NSPasteboardType v15; // [xsp+0h] [xbp-40h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView setDelegate:](v3, "setDelegate:", self);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView setDataSource:](v4, "setDataSource:", self);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView setAllowsMultipleSelection:](v5, "setAllowsMultipleSelection:", 1LL);
  objc_release(v5);
  v6 = objc_alloc_init((Class)&OBJC_CLASS___NSMenu);
  v7 = objc_alloc((Class)&OBJC_CLASS___NSMenuItem);
  v8 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v9 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v8,
           "localizedStringForKey:value:table:",
           CFSTR("Delete"),
           &stru_1000BA220,
           0LL));
  v10 = objc_msgSend(v7, "initWithTitle:action:keyEquivalent:", v9, "contextualMenuDelete:", &stru_1000BA220);
  objc_release(v9);
  objc_release(v8);
  objc_msgSend(v6, "addItem:", v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView setMenu:](v11, "setMenu:", v6);
  objc_release(v11);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  v15 = NSPasteboardTypeFileURL;
  v13 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v15, 1LL));
  -[NSOutlineView registerForDraggedTypes:](v12, "registerForDraggedTypes:", v13);
  objc_release(v13);
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceFileSharingViewController outlineView](self, "outlineView"));
  -[NSOutlineView setDraggingSourceOperationMask:forLocal:](v14, "setDraggingSourceOperationMask:forLocal:", 33LL, 0LL);
  objc_release(v14);
  objc_release(v10);
  objc_release(v6);
}