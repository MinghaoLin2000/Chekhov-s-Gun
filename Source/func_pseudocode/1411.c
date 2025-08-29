-[DeviceSettingsMoviesViewController updatesStartArray:endArray:]
id __cdecl -[DeviceSettingsMoviesViewController updatesStartArray:endArray:](
        DeviceSettingsMoviesViewController *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x21
  NSSet *v6; // x19
  NSSet *v7; // x20
  void *v8; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", a3));
  v7 = objc_retainAutoreleasedReturnValue(+[NSSet setWithArray:](&OBJC_CLASS___NSSet, "setWithArray:", v5));
  objc_release(v5);
  v8 = -[NSSet mutableCopy](v7, "mutableCopy");
  objc_msgSend(v8, "minusSet:", v6);
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}