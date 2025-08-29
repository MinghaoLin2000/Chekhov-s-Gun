-[DeviceSettingsTabContentViewController viewDidLoad]
void __cdecl -[DeviceSettingsTabContentViewController viewDidLoad](
        DeviceSettingsTabContentViewController *self,
        SEL a2)
{
  NSTabViewItem *v3; // x20
  NSString *v4; // x21
  DeviceSettingsTabContentOutlineView *v5; // x22
  DeviceSettingsTabContentOutlineView *v6; // x20
  DeviceSettingsTabContentOutlineView *v7; // x20
  void *v8; // x21
  DeviceSettingsTabContentOutlineView *v9; // x20
  void *v10; // x21
  void *v11; // x22
  NSSearchField *v12; // x20
  NSSearchField *v13; // x21
  void *v14; // x22
  NSTabViewItem *v15; // x23
  NSString *v16; // x24
  NSString *v17; // x20
  NSSearchField *v18; // x21
  DeviceSettingsTabContentOutlineView *v19; // x20
  DeviceSettingsTabContentOutlineView *v20; // x20
  DeviceSettingsTabContentOutlineView *v21; // x20
  NSMutableSet *v22; // x20
  objc_super v23; // [xsp+10h] [xbp-40h] BYREF

  v23.receiver = self;
  v23.super_class = (Class)&OBJC_CLASS___DeviceSettingsTabContentViewController;
  -[DeviceSettingsTabContentViewController viewDidLoad](&v23, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController tabViewItem](self, "tabViewItem"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem label](v3, "label"));
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView setAccessibilityTitle:](v5, "setAccessibilityTitle:", v4);
  objc_release(v5);
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  -[DeviceSettingsTabContentOutlineView setAccessibilityElement:](v6, "setAccessibilityElement:", 0LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView superview](v7, "superview"));
  objc_msgSend(v8, "setAccessibilityElement:", 0LL);
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController allCheckBoxOutlineView](self, "allCheckBoxOutlineView"));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentOutlineView superview](v9, "superview"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "superview"));
  objc_msgSend(v11, "setAccessibilityElement:", 0LL);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController searchField](self, "searchField"));
  objc_release(v12);
  if ( v12 )
  {
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController searchField](self, "searchField"));
    v14 = objc_retainAutoreleasedReturnValue(-[NSSearchField placeholderString](v13, "placeholderString"));
    v15 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController tabViewItem](self, "tabViewItem"));
    v16 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem label](v15, "label"));
    v17 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v14, v16));
    objc_release(v16);
    objc_release(v15);
    objc_release(v14);
    objc_release(v13);
    v18 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController searchField](self, "searchField"));
    -[NSSearchField setPlaceholderString:](v18, "setPlaceholderString:", v17);
    objc_release(v18);
    objc_release(v17);
  }
  v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView setDelegate:](v19, "setDelegate:", self);
  objc_release(v19);
  v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView setDataSource:](v20, "setDataSource:", self);
  objc_release(v20);
  v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v21, "reloadData");
  objc_release(v21);
  v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController checkedItems](self, "checkedItems"));
  -[DeviceSettingsTabContentViewController expandCheckedItems:](self, "expandCheckedItems:", v22);
  objc_release(v22);
}