-[DeviceSettingsPodcastsViewController setupTabViewItem:]
void __cdecl -[DeviceSettingsPodcastsViewController setupTabViewItem:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x21
  NSMutableDictionary *v8; // x22
  NSMutableSet *v9; // x20
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceSettingsPodcastsViewController;
  -[DeviceSettingsViewController setupTabViewItem:](&v10, "setupTabViewItem:", v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Podcasts"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
    -[DeviceSettingsPodcastsViewController setupDetailsCheckBoxesForTabViewItem:](
      self,
      "setupDetailsCheckBoxesForTabViewItem:",
      v4);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController detailsModelDict](self, "detailsModelDict"));
    objc_msgSend(v7, "setDetailsModelDict:", v8);
    objc_release(v8);
    objc_msgSend(v7, "setUsePersistentIDForDetailsModelKey:", 1LL);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController detailsCheckedItems](self, "detailsCheckedItems"));
    objc_msgSend(v7, "setDetailsCheckedItems:", v9);
    objc_release(v9);
    objc_msgSend(v7, "setIndependentLeadingAndTrailingCheckBoxes:", 1LL);
    objc_msgSend(v7, "setLeadingCheckBoxesNeverMixed:", 1LL);
    objc_release(v7);
  }
  objc_release(v4);
}