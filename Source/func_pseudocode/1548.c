-[DeviceFooterViewController removeProgressObservers:]
void __cdecl -[DeviceFooterViewController removeProgressObservers:](DeviceFooterViewController *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x21
  void *v6; // x21
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(NSStringFromSelector("fractionCompleted"));
    objc_msgSend(v4, "removeObserver:forKeyPath:", self, v5);
    objc_release(v5);
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
    objc_msgSend(v6, "removeObserver:forKeyPath:", self, _NSProgressRemoteLocalizedDescriptionKey);
    objc_release(v6);
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "userInfo"));
    objc_msgSend(v7, "removeObserver:forKeyPath:", self, _NSProgressRemoteLocalizedAdditionalDescriptionKey);
    objc_release(v7);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}