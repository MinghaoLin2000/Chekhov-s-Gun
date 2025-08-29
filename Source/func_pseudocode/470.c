-[DeviceSettingsTVShowsViewController sortSeasonsDictionary:]
id __cdecl -[DeviceSettingsTVShowsViewController sortSeasonsDictionary:](
        DeviceSettingsTVShowsViewController *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  id v4; // x20
  void *v5; // x21
  id v6; // x20
  id v7; // x19
  void *v8; // x22
  _QWORD v10[4]; // [xsp+0h] [xbp-50h] BYREF
  id v11; // [xsp+20h] [xbp-30h]
  id v12; // [xsp+28h] [xbp-28h]
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(
         +[DeviceSettingsNode mostRecentSeasonNodeComparator](
           &OBJC_CLASS___DeviceSettingsNode,
           "mostRecentSeasonNodeComparator"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "allKeys"));
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_100006F98;
  v10[3] = &unk_1000B8BE8;
  v11 = v3;
  v12 = v4;
  v6 = objc_retain(v4);
  v7 = objc_retain(v3);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sortedArrayUsingComparator:", v10));
  objc_release(v5);
  objc_release(v12);
  objc_release(v11);
  objc_release(v6);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}