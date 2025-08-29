+[DeviceSettingsNode audiobookPartNodeComparator]
id __cdecl +[DeviceSettingsNode audiobookPartNodeComparator](id a1, SEL a2)
{
  _QWORD *v2; // x0
  _QWORD v4[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3221225472LL;
  v4[2] = sub_100065350;
  v4[3] = &unk_1000B9EA8;
  v4[4] = a1;
  v2 = objc_retainBlock(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}