-[DeviceAutofillSettingsViewController configureWindowButtons]
void __cdecl -[DeviceAutofillSettingsViewController configureWindowButtons](
        DeviceAutofillSettingsViewController *self,
        SEL a2)
{
  void *v2; // x19
  void *v3; // x20
  void *v4; // x19
  void *v5; // x19
  void *v6; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[DeviceAutofillSettingsViewController view](self, "view"));
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "window"));
  objc_release(v2);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "standardWindowButton:", 0LL));
  objc_msgSend(v4, "setHidden:", 1LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "standardWindowButton:", 1LL));
  objc_msgSend(v5, "setHidden:", 1LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "standardWindowButton:", 2LL));
  objc_msgSend(v6, "setHidden:", 1LL);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}