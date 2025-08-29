-[DeviceSettingsPhotosViewController selectTabViewItemWithIdentifier:]
void __cdecl -[DeviceSettingsPhotosViewController selectTabViewItemWithIdentifier:](
        DeviceSettingsPhotosViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x21
  NSTabView *v5; // x22
  id v6; // x19
  NSTabView *v7; // x20
  NSTabView *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItemWithIdentifier:](v5, "tabViewItemWithIdentifier:", v4));
  objc_release(v4);
  objc_release(v5);
  if ( v6 )
  {
    if ( ((unsigned int)objc_msgSend(v6, "_isTabEnabled") & 1) != 0 )
    {
      v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
      -[NSTabView selectTabViewItem:](v7, "selectTabViewItem:", v6);
      objc_release(v7);
    }
    else
    {
      objc_msgSend(v6, "_setTabEnabled:", 1LL);
      v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPhotosViewController tabView](self, "tabView"));
      -[NSTabView selectTabViewItem:](v8, "selectTabViewItem:", v6);
      objc_release(v8);
      objc_msgSend(v6, "_setTabEnabled:", 0LL);
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}