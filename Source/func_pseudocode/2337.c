-[DeviceModeFinderViewController updateFooterButtons]
void __cdecl -[DeviceModeFinderViewController updateFooterButtons](DeviceModeFinderViewController *self, SEL a2)
{
  NSMutableSet *v3; // x20
  __int64 v4; // x21
  NSBundle *v5; // x0
  NSBundle *v6; // x20
  NSString *v7; // x21
  DeviceFooterViewController *v8; // x22
  DeviceFooterViewController *v9; // x0
  DeviceFooterViewController *v10; // x20
  __int64 v11; // x2
  NSString *v12; // x21
  DeviceFooterViewController *v13; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController dirtyViewControllers](self, "dirtyViewControllers"));
  v4 = (__int64)-[NSMutableSet count](v3, "count");
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v6 = v5;
  if ( v4 < 1 )
  {
    v12 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v5,
              "localizedStringForKey:value:table:",
              CFSTR("Sync"),
              &stru_1000BA220,
              0LL));
    v13 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController setPrimaryButtonTitle:](v13, "setPrimaryButtonTitle:", v12);
    objc_release(v13);
    objc_release(v12);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    v10 = v9;
    v11 = 1LL;
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v5,
             "localizedStringForKey:value:table:",
             CFSTR("Apply"),
             &stru_1000BA220,
             0LL));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    -[DeviceFooterViewController setPrimaryButtonTitle:](v8, "setPrimaryButtonTitle:", v7);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    v10 = v9;
    v11 = 0LL;
  }
  -[DeviceFooterViewController setHiddenSecondaryButton:](v9, "setHiddenSecondaryButton:", v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[DeviceModeFinderViewController updateFooterButtonStates](self, "updateFooterButtonStates");
}