-[DeviceSettingsMoviesViewController trailingTextWithMovieUpdateMode:movieCount:]
id __cdecl -[DeviceSettingsMoviesViewController trailingTextWithMovieUpdateMode:movieCount:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        unsigned __int64 a3,
        signed __int64 a4)
{
  NSBundle *v4; // x0
  NSBundle *v5; // x19
  const __CFString *v6; // x2
  NSString *v9; // x20
  NSString *v10; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a3 <= 2 )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
    v5 = v4;
    v6 = CFSTR("movies");
LABEL_6:
    v9 = objc_retainAutoreleasedReturnValue(
           -[NSBundle localizedStringForKey:value:table:](
             v4,
             "localizedStringForKey:value:table:",
             v6,
             &stru_1000BA220,
             0LL));
    goto LABEL_8;
  }
  v4 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
  v5 = v4;
  if ( a3 == 4 && !a4 )
  {
    v6 = CFSTR("all unwatched movies along with selected movies");
    goto LABEL_6;
  }
  v10 = objc_retainAutoreleasedReturnValue(
          -[NSBundle localizedStringForKey:value:table:](
            v4,
            "localizedStringForKey:value:table:",
            CFSTR("movie(s) along with selected movies"),
            &stru_1000BA220,
            0LL));
  objc_release(v5);
  v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", v10, a4));
  v5 = (NSBundle *)v10;
LABEL_8:
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}