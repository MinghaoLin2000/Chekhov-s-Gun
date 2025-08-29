-[DeviceSettingsAudiobooksViewController selectedAudiobookTrackIDs]
id __cdecl -[DeviceSettingsAudiobooksViewController selectedAudiobookTrackIDs](
        DeviceSettingsAudiobooksViewController *self,
        SEL a2)
{
  void *v3; // x20
  NSMutableSet *v4; // x19
  id v5; // x20
  _QWORD v7[4]; // [xsp+8h] [xbp-38h] BYREF
  id v8; // [xsp+28h] [xbp-18h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
  v4 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsAudiobooksViewController audiobooksDetailsCheckedItems](self, "audiobooksDetailsCheckedItems"));
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10001BFC4;
  v7[3] = &unk_1000B8BB8;
  v5 = objc_retain(v3);
  v8 = v5;
  -[NSMutableSet enumerateObjectsUsingBlock:](v4, "enumerateObjectsUsingBlock:", v7);
  objc_release(v4);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}