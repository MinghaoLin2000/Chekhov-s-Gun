-[DeviceSettingsMoviesViewController viewDidLoad]
void __cdecl -[DeviceSettingsMoviesViewController viewDidLoad](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSTabView *v3; // x20
  void *v4; // x21
  NSTabView *v5; // x20
  NSTabViewItem *v6; // x21
  NSTabView *v7; // x20
  objc_super v8; // [xsp+0h] [xbp-30h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___DeviceSettingsMoviesViewController;
  -[DeviceSettingsViewController viewDidLoad](&v8, "viewDidLoad");
  if ( !-[DeviceSettingsMoviesViewController validRentals](self, "validRentals") )
  {
    v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
    v4 = -[NSTabView indexOfTabViewItemWithIdentifier:](v3, "indexOfTabViewItemWithIdentifier:", CFSTR("Rentals"));
    objc_release(v3);
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
    v6 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItemAtIndex:](v5, "tabViewItemAtIndex:", v4));
    objc_release(v5);
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
    -[NSTabView removeTabViewItem:](v7, "removeTabViewItem:", v6);
    objc_release(v7);
    objc_release(v6);
  }
  -[DeviceSettingsMoviesViewController loadUIFromPrefs](self, "loadUIFromPrefs");
}