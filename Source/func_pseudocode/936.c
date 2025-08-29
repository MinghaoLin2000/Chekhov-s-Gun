-[DeviceSettingsAudiobooksViewController setupTabViewItem:]
void __cdecl -[DeviceSettingsAudiobooksViewController setupTabViewItem:](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  unsigned int v6; // w22
  void *v7; // x21
  NSMutableDictionary *v8; // x22
  NSMutableSet *v9; // x22
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "identifier"));
  v6 = (unsigned int)objc_msgSend(v5, "isEqualToString:", CFSTR("Audiobooks"));
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "viewController"));
    -[DeviceSettingsAudiobooksViewController setupDetailsCheckBoxesForTabViewItem:](
      self,
      "setupDetailsCheckBoxesForTabViewItem:",
      v4);
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobooksDetailsModelDict](self, "audiobooksDetailsModelDict"));
    objc_msgSend(v7, "setDetailsModelDict:", v8);
    objc_release(v8);
    v9 = objc_retainAutoreleasedReturnValue(
           -[DeviceSettingsAudiobooksViewController audiobooksDetailsCheckedItems](
             self,
             "audiobooksDetailsCheckedItems"));
    objc_msgSend(v7, "setDetailsCheckedItems:", v9);
    objc_release(v9);
    objc_release(v7);
  }
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___DeviceSettingsAudiobooksViewController;
  -[DeviceSettingsViewController setupTabViewItem:](&v10, "setupTabViewItem:", v4);
  objc_release(v4);
}