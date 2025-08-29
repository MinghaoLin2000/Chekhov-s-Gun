-[DeviceSettingsMoviesViewController revertRentalsView]
void __cdecl -[DeviceSettingsMoviesViewController revertRentalsView](DeviceSettingsMoviesViewController *self, SEL a2)
{
  NSTabView *v3; // x21
  void *v4; // x20
  NSTabView *v5; // x19
  NSTabViewItem *v6; // x20
  NSViewController *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
  v4 = -[NSTabView indexOfTabViewItemWithIdentifier:](v3, "indexOfTabViewItemWithIdentifier:", CFSTR("Rentals"));
  objc_release(v3);
  if ( v4 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController tabView](self, "tabView"));
    v6 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItemAtIndex:](v5, "tabViewItemAtIndex:", v4));
    v7 = objc_retainAutoreleasedReturnValue(-[NSTabViewItem viewController](v6, "viewController"));
    objc_release(v6);
    objc_release(v5);
    -[NSViewController reloadData](v7, "reloadData");
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v7);
  }
}