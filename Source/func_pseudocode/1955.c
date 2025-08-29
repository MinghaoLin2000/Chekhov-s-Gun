-[DeviceSettingsPodcastsViewController loadViewControllerForTabViewItem:]
void __cdecl -[DeviceSettingsPodcastsViewController loadViewControllerForTabViewItem:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  DeviceSettingsDetailsTabContentViewController *v7; // x21
  NSBundle *v8; // x20
  DeviceSettingsDetailsTabContentViewController *v9; // x21
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Podcasts"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_alloc(&OBJC_CLASS___DeviceSettingsDetailsTabContentViewController);
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(self)));
    v9 = -[DeviceSettingsDetailsTabContentViewController initWithNibName:bundle:](
           v7,
           "initWithNibName:bundle:",
           CFSTR("DeviceSettingsDetailsTabContent"),
           v8);
    objc_release(v8);
    objc_msgSend(v4, "setViewController:", v9);
    -[DeviceSettingsTabContentViewController setTabViewItem:](v9, "setTabViewItem:", v4);
    objc_release(v9);
  }
  else
  {
    v10.receiver = self;
    v10.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
    -[DeviceSettingsViewController loadViewControllerForTabViewItem:](&v10, "loadViewControllerForTabViewItem:", v4);
  }
  objc_release(v4);
}