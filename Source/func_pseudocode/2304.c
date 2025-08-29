-[DeviceModeFinderViewController viewControllers]
id __cdecl -[DeviceModeFinderViewController viewControllers](DeviceModeFinderViewController *self, SEL a2)
{
  void *v3; // x19
  DeviceHeaderViewController *v4; // x21
  DeviceHeaderViewController *v5; // x21
  DeviceFinderTabContainerViewController *v6; // x21
  DeviceFinderTabContainerViewController *v7; // x21
  DeviceFooterViewController *v8; // x21
  DeviceFooterViewController *v9; // x21
  DeviceSetupViewController *v10; // x21
  DeviceSetupViewController *v11; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
  objc_release(v4);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController headerViewController](self, "headerViewController"));
    objc_msgSend(v3, "addObject:", v5);
    objc_release(v5);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController finderTabContainerViewController](self, "finderTabContainerViewController"));
  objc_release(v6);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController finderTabContainerViewController](self, "finderTabContainerViewController"));
    objc_msgSend(v3, "addObject:", v7);
    objc_release(v7);
  }
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
  objc_release(v8);
  if ( v8 )
  {
    v9 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController footerViewController](self, "footerViewController"));
    objc_msgSend(v3, "addObject:", v9);
    objc_release(v9);
  }
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController setupViewController](self, "setupViewController"));
  objc_release(v10);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[DeviceModeFinderViewController setupViewController](self, "setupViewController"));
    objc_msgSend(v3, "addObject:", v11);
    objc_release(v11);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}