-[DeviceSettingsTVShowsViewController trailingTextForUpdateMode:episodeCount:episodeAction:]
id __cdecl -[DeviceSettingsTVShowsViewController trailingTextForUpdateMode:episodeCount:episodeAction:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        unsigned __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5)
{
  NSBundle *v6; // x0
  NSBundle *v7; // x19
  const __CFString *v8; // x2
  unsigned __int64 v9; // x21
  NSString *v10; // x21
  NSString *v11; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a4 || a5 != 1 )
  {
    v9 = a5 | a4;
    v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle", a3));
    v7 = v6;
    if ( v9 )
    {
      v10 = objc_retainAutoreleasedReturnValue(
              -[NSBundle localizedStringForKey:value:table:](
                v6,
                "localizedStringForKey:value:table:",
                CFSTR("tv episode(s) of"),
                &stru_1000BA220,
                0LL));
      objc_release(v7);
      v11 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v10, a4));
      v7 = (NSBundle *)v10;
      goto LABEL_8;
    }
    v8 = CFSTR("tv all episodes of");
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle", a3));
    v7 = v6;
    v8 = CFSTR("tv all unwatched episodes of");
  }
  v11 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v6,
            "localizedStringForKey:value:table:",
            v8,
            &stru_1000BA220,
            0LL));
LABEL_8:
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}