-[DeviceSettingsPhotosViewController removeAllTabViewItems]
void __cdecl -[DeviceSettingsPhotosViewController removeAllTabViewItems](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  NSTabView *v3; // x21
  NSArray *v4; // x22
  __int64 v5; // x20
  NSTabView *v6; // x22
  NSTabViewItem *v7; // x21
  id v8; // x22
  NSViewController *v9; // x22
  unsigned int v10; // w23
  NSViewController *v11; // x22
  NSView *v12; // x23
  NSTabView *v13; // x22

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItems](v3, "tabViewItems"));
  v5 = -[NSArray count](v4, "count");
  objc_release(v4);
  objc_release(v3);
  if ( v5 >= 1 )
  {
    do
    {
      v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
      v7 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItemAtIndex:](v6, "tabViewItemAtIndex:", 0LL));
      objc_release(v6);
      v8 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem identifier](v7, "identifier"));
      -[DeviceSettingsPhotosViewController selectTabViewItemWithIdentifier:](
        self,
        "selectTabViewItemWithIdentifier:",
        v8);
      objc_release(v8);
      v9 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem viewController](v7, "viewController"));
      v10 = -[NSViewController isViewLoaded](v9, "isViewLoaded");
      objc_release(v9);
      if ( v10 )
      {
        v11 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem viewController](v7, "viewController"));
        v12 = objc_retainAutoreleasedReturnValue(-[NSViewController view](v11, "view"));
        -[NSView removeFromSuperview](v12, "removeFromSuperview");
        objc_release(v12);
        objc_release(v11);
      }
      v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
      -[NSTabView removeTabViewItem:](v13, "removeTabViewItem:", v7);
      objc_release(v13);
      objc_release(v7);
      --v5;
    }
    while ( v5 );
  }
}