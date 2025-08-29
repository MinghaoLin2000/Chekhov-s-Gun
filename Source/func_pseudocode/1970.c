-[DeviceSettingsPodcastsViewController switchHomeLibraryInformativeTextFormat]
id __cdecl -[DeviceSettingsPodcastsViewController switchHomeLibraryInformativeTextFormat](
        DeviceSettingsPodcastsViewController *self,
        SEL a2)
{
  NSBundle *v2; // x19
  NSString *v3; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSBundle localizedStringForKey:value:table:](
           v2,
           "localizedStringForKey:value:table:",
           CFSTR("SwitchPodcastHomeLibraryExplanation"),
           &stru_1000BA220,
           0LL));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}