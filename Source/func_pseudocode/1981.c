-[DeviceSettingsPodcastsViewController trailingTextForUpdateMode:episodeCount:episodeAction:]
id __cdecl -[DeviceSettingsPodcastsViewController trailingTextForUpdateMode:episodeCount:episodeAction:](
        DeviceSettingsPodcastsViewController *self,
        SEL a2,
        unsigned __int64 a3,
        signed __int64 a4,
        unsigned __int64 a5)
{
  NSBundle *v7; // x0
  NSBundle *v8; // x19
  const __CFString *v9; // x2
  NSString *v10; // x20
  NSString *v11; // x19
  NSString *v13; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !a4 && a5 == 4 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle", a3));
    v8 = v7;
    v9 = CFSTR("podcasts all unplayed episodes of");
LABEL_9:
    v10 = objc_retainAutoreleasedReturnValue(
            -[NSBundle localizedStringForKey:value:table:](
              v7,
              "localizedStringForKey:value:table:",
              v9,
              &stru_1000BA220,
              0LL));
    objc_release(v8);
    v11 = objc_retain(v10);
    goto LABEL_10;
  }
  if ( !(a5 | a4) )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle", a3));
    v8 = v7;
    v9 = CFSTR("podcasts all episodes of");
    goto LABEL_9;
  }
  v7 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle", a3));
  v8 = v7;
  if ( !a4 && a5 == 3 )
  {
    v9 = CFSTR("podcasts all new episodes of");
    goto LABEL_9;
  }
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v7,
            "localizedStringForKey:value:table:",
            CFSTR("podcasts episode(s) of"),
            &stru_1000BA220,
            0LL));
  objc_release(v8);
  v11 = objc_retain(objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v13, a4)));
  objc_release(v13);
LABEL_10:
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}