-[DeviceSettingsMoviesViewController loadViewControllerForTabViewItem:]
void __cdecl -[DeviceSettingsMoviesViewController loadViewControllerForTabViewItem:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  DeviceSettingsRentalsTabContentViewController *v7; // x21
  NSBundle *v8; // x20
  const __CFString *v9; // x2
  void *v10; // x21
  unsigned int v11; // w22
  DeviceSettingsRentalsTabContentViewController *v12; // x21
  objc_super v13; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Movies"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_alloc(&OBJC_CLASS___DeviceSettingsTabContentViewController);
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(self)));
    v9 = CFSTR("DeviceSettingsMoviesTabContent");
  }
  else
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
    v11 = (unsigned int)objc_msgSend(v10, "isEqualToString:", CFSTR("Rentals"));
    objc_release(v10);
    if ( !v11 )
    {
      v13.receiver = self;
      v13.super_class = (Class)&OBJC_CLASS___DeviceSettingsMoviesViewController;
      -[DeviceSettingsViewController loadViewControllerForTabViewItem:](&v13, "loadViewControllerForTabViewItem:", v4);
      goto LABEL_7;
    }
    v7 = objc_alloc(&OBJC_CLASS___DeviceSettingsRentalsTabContentViewController);
    v8 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleForClass:](&OBJC_CLASS___NSBundle, "bundleForClass:", objc_opt_class(self)));
    v9 = CFSTR("DeviceSettingsRentalsTabContent");
  }
  v12 = -[DeviceSettingsRentalsTabContentViewController initWithNibName:bundle:](v7, "initWithNibName:bundle:", v9, v8);
  objc_release(v8);
  objc_msgSend(v4, "setViewController:", v12);
  -[DeviceSettingsTabContentViewController setTabViewItem:](v12, "setTabViewItem:", v4);
  objc_release(v12);
LABEL_7:
  objc_release(v4);
}