-[DeviceSettingsMoviesViewController setAutoIncludeLayoutOrientation:]
void __cdecl -[DeviceSettingsMoviesViewController setAutoIncludeLayoutOrientation:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        signed __int64 a3)
{
  _BOOL8 v5; // x21
  NSLayoutConstraint *v6; // x22
  NSLayoutConstraint *v7; // x22
  NSStackView *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = a3 == 1;
  v6 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsMoviesViewController autoIncludeTrailingTextFieldLeadingIndentConstraint](
           self,
           "autoIncludeTrailingTextFieldLeadingIndentConstraint"));
  -[NSLayoutConstraint setActive:](v6, "setActive:", v5);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeBaselineConstraint](self, "autoIncludeBaselineConstraint"));
  -[NSLayoutConstraint setActive:](v7, "setActive:", a3 == 0);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsMoviesViewController autoIncludeStackView](self, "autoIncludeStackView"));
  -[NSStackView setOrientation:](v8, "setOrientation:", a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}