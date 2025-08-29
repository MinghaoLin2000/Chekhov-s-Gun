+[DeviceSettingsViewController viewControllerWithIdentifier:]
id __cdecl +[DeviceSettingsViewController viewControllerWithIdentifier:](id a1, SEL a2, id a3)
{
  id v4; // x20
  void *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(objc_msgSend(a1, "classForViewControllerWithIdentifier:", v4), "viewController"));
  objc_msgSend(v5, "setIdentifier:", v4);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}