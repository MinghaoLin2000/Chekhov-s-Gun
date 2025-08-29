-[DeviceSettingsPodcastsViewController updateTrailingTextField]
void __cdecl -[DeviceSettingsPodcastsViewController updateTrailingTextField](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  NSPopUpButton *v3; // x20
  void *v4; // x21
  signed __int64 v5; // x20
  unsigned __int64 v6; // x21
  NSPopUpButton *v7; // x22
  void *v8; // x23
  id v9; // x20
  NSTextField *v10; // x21
  void *v11; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludePopUpButton](self, "autoIncludePopUpButton"));
  v4 = -[NSPopUpButton selectedTag](v3, "selectedTag");
  objc_release(v3);
  v5 = -[DeviceSettingsPodcastsViewController episodeCountFromTag:](self, "episodeCountFromTag:", v4);
  v6 = -[DeviceSettingsPodcastsViewController episodeActionFromTag:](self, "episodeActionFromTag:", v4);
  v7 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludeTrailingPopUpButton](self, "autoIncludeTrailingPopUpButton"));
  v8 = -[NSPopUpButton selectedTag](v7, "selectedTag");
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(
         -[DeviceSettingsPodcastsViewController trailingTextForUpdateMode:episodeCount:episodeAction:](
           self,
           "trailingTextForUpdateMode:episodeCount:episodeAction:",
           -[DeviceSettingsPodcastsViewController updateModeWithTag:](self, "updateModeWithTag:", v8),
           v5,
           v6));
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController autoIncludeTrailingTextField](self, "autoIncludeTrailingTextField"));
  -[NSTextField setStringValue:](v10, "setStringValue:", v9);
  objc_release(v10);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsPodcastsViewController view](self, "view"));
  objc_msgSend(v11, "setNeedsLayout:", 1LL);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v9);
}