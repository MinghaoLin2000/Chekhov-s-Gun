-[DeviceSettingsMoviesViewController setupTabViewItem:]
void __cdecl -[DeviceSettingsMoviesViewController setupTabViewItem:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x21
  DeviceSettingsNode *v8; // x22
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___DeviceSettingsMoviesViewController;
  -[DeviceSettingsViewController setupTabViewItem:](&v9, "setupTabViewItem:", v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Rentals"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController trailingModel](self, "trailingModel"));
    objc_msgSend(v7, "setTrailingModel:", v8);
    objc_release(v8);
    objc_release(objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "view")));
    -[DeviceSettingsMoviesViewController loadRentalOutlinesColumnHeaderTitleForTabViewItem:](
      self,
      "loadRentalOutlinesColumnHeaderTitleForTabViewItem:",
      v4);
    objc_release(v7);
  }
  objc_release(v4);
}