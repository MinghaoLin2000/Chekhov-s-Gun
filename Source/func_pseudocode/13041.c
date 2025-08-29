-[NSIndexSet tsu_localizedDescription]
id __cdecl -[NSIndexSet tsu_localizedDescription](NSIndexSet *self, SEL a2)
{
  NSMutableArray *v3; // x19
  void *v4; // x20
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_1001451DC;
  v6[3] = &unk_1001DE1A8;
  v3 = objc_retain(objc_opt_new(&OBJC_CLASS___NSMutableArray));
  v7 = v3;
  -[NSIndexSet enumerateRangesUsingBlock:](self, "enumerateRangesUsingBlock:", v6);
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableArray tsu_localizedList](v3, "tsu_localizedList"));
  objc_release(v7);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}