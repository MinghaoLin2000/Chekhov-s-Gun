-[DeviceSummaryViewController configureForRawDeviceMode]
void __cdecl -[DeviceSummaryViewController configureForRawDeviceMode](DeviceSummaryViewController *self, SEL a2)
{
  NSView *v3; // x20
  NSBox *v4; // x20
  NSBox *v5; // x20
  NSView *v6; // x20
  NSBox *v7; // x20
  NSView *v8; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersContainerView](self, "moreIdentifiersContainerView"));
  -[NSView setHidden:](v3, "setHidden:", 1LL);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController moreIdentifiersHorizontalLine](self, "moreIdentifiersHorizontalLine"));
  -[NSBox setHidden:](v4, "setHidden:", 1LL);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController softwareUpdatesHorizontalLine](self, "softwareUpdatesHorizontalLine"));
  -[NSBox setHidden:](v5, "setHidden:", 1LL);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backUpSettingsContainerView](self, "backUpSettingsContainerView"));
  -[NSView setHidden:](v6, "setHidden:", 1LL);
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController backupHorizontalLine](self, "backupHorizontalLine"));
  -[NSBox setHidden:](v7, "setHidden:", 1LL);
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(-[DeviceSummaryViewController optionsContainerView](self, "optionsContainerView"));
  -[NSView setHidden:](v8, "setHidden:", 1LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}