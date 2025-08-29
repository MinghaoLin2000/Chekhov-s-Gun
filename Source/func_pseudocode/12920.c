-[NSMutableDictionary tsu_objectForKey:withDefaultOfClass:]
id __cdecl -[NSMutableDictionary tsu_objectForKey:withDefaultOfClass:](
        NSMutableDictionary *self,
        SEL a2,
        id a3,
        Class a4)
{
  id v4; // x0
  _QWORD v6[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3221225472LL;
  v6[2] = sub_10013B2EC;
  v6[3] = &unk_1001DD970;
  v6[4] = a4;
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary tsu_objectForKey:withDefaultUsingBlock:](
           self,
           "tsu_objectForKey:withDefaultUsingBlock:",
           a3,
           v6));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}