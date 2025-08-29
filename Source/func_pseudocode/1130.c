-[DeviceSettingsPhotosViewController clickSharingIsClosing:]
void __cdecl -[DeviceSettingsPhotosViewController clickSharingIsClosing:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  NSButton *v4; // x20
  NSButton *v5; // x21
  _BOOL8 v6; // x22
  void (__fastcall **v7)(id, _BOOL8); // x20
  void *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = (NSButton *)objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController sharingOKButton](self, "sharingOKButton"));
  v6 = v5 == v4;
  objc_release(v4);
  objc_release(v5);
  v7 = (void (__fastcall **)(id, _BOOL8))objc_retainAutoreleasedReturnValue(
                                           -[DeviceSettingsPhotosViewController sharingCompletion](
                                             self,
                                             "sharingCompletion"));
  v7[2](v7, v6);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController presentingViewController](self, "presentingViewController"));
  objc_msgSend(v8, "dismissViewController:", self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}