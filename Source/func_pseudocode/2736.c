+[DeviceSettingsNode mostRecentTVShowEpisodeNodeComparator]
id __cdecl +[DeviceSettingsNode mostRecentTVShowEpisodeNodeComparator](id a1, SEL a2)
{
  id v2; // x19
  _QWORD *v3; // x20
  _QWORD v5[4]; // [xsp+8h] [xbp-38h] BYREF
  id v6; // [xsp+28h] [xbp-18h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10006511C;
  v5[3] = &unk_1000B9E38;
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "mostRecentMovieNodeComparator"));
  v2 = objc_retain(v6);
  v3 = objc_retainBlock(v5);
  objc_release(v6);
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}