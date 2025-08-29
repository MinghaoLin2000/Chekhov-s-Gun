-[DeviceSettingsTVShowsViewController episodeTitleForMediaItem:]
id __cdecl -[DeviceSettingsTVShowsViewController episodeTitleForMediaItem:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x20
  NSString *v4; // x19
  void *v5; // x21
  void *v6; // x20
  NSBundle *v7; // x22
  NSString *v8; // x23
  NSString *v9; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "title"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "videoInfo"));
  objc_release(v3);
  v6 = objc_msgSend(v5, "episodeOrder");
  objc_release(v5);
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v8 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v7,
             "localizedStringForKey:value:table:",
             CFSTR("%1$d. %2$@"),
             &stru_1000BA220,
             0LL));
    v9 = objc_retainAutoreleasedReturnValue(+[NSString localizedStringWithFormat:](&OBJC_CLASS___NSString, "localizedStringWithFormat:", v8, v6, v4));
    objc_release(v4);
    objc_release(v8);
    objc_release(v7);
    v4 = v9;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}