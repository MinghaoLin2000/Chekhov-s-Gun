-[DeviceSettingsTVShowsViewController setAutoIncludeLayoutOrientation:]
void __cdecl -[DeviceSettingsTVShowsViewController setAutoIncludeLayoutOrientation:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        signed __int64 a3)
{
  _BOOL8 v5; // x21
  NSLayoutConstraint *v6; // x22
  NSStackView *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a3 == 1;
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController episodesOfIndentConstraint](self, "episodesOfIndentConstraint"));
  -[NSLayoutConstraint setActive:](v6, "setActive:", v5);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTVShowsViewController autoIncludeStackView](self, "autoIncludeStackView"));
  -[NSStackView setOrientation:](v7, "setOrientation:", a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}