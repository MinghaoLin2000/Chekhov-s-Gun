-[DeviceSettingsPhotosViewController deviceViewPhotoSyncDeferredErrorNotification:]
void __cdecl -[DeviceSettingsPhotosViewController deviceViewPhotoSyncDeferredErrorNotification:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x21
  void *v6; // x22
  unsigned int v7; // w23
  void *v8; // x21
  void *v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", CFSTR("OSStatus")));
  v7 = (unsigned int)objc_msgSend(v6, "intValue");
  objc_release(v6);
  objc_release(v5);
  if ( (v7 & 0xFFFFFFFE) == 0x450 )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", CFSTR("Message")));
    -[DeviceSettingsPhotosViewController setDeferredPhotoSyncErrorMessage:](
      self,
      "setDeferredPhotoSyncErrorMessage:",
      v9);
    objc_release(v9);
    objc_release(v8);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}