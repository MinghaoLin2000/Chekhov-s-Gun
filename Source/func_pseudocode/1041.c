-[DeviceStorageManagementViewController footerViewController]
DeviceFooterViewController *__cdecl -[DeviceStorageManagementViewController footerViewController](
        DeviceStorageManagementViewController *self,
        SEL a2)
{
  DeviceFooterViewController *footerViewController; // x0
  DeviceFooterViewController *v4; // x0
  DeviceFooterViewController *v5; // x8
  DeviceFooterViewController *v6; // x20
  void *v7; // x21
  NSView *v8; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  footerViewController = self->_footerViewController;
  if ( !footerViewController )
  {
    v4 = objc_alloc_init(&OBJC_CLASS___DeviceFooterViewController);
    v5 = self->_footerViewController;
    self->_footerViewController = v4;
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewController](self, "footerViewController"));
    v7 = objc_retainAutoreleasedReturnValue(-[DeviceFooterViewController view](v6, "view"));
    v8 = objc_retainAutoreleasedReturnValue(-[DeviceStorageManagementViewController footerViewContainer](self, "footerViewContainer"));
    sub_10002ABA4((int)v7, v8);
    objc_release(v8);
    objc_release(v7);
    objc_release(v6);
    footerViewController = self->_footerViewController;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(footerViewController);
}