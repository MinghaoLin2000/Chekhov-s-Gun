-[NSString tsu_substringWithComposedCharacterSequencesTruncatedToGlyphCount:]
id __cdecl -[NSString tsu_substringWithComposedCharacterSequencesTruncatedToGlyphCount:](
        NSString *self,
        SEL a2,
        unsigned __int64 a3)
{
  NSString *v4; // x19
  NSString *v5; // x20
  _QWORD v7[7]; // [xsp+8h] [xbp-A8h] BYREF
  __int64 v8; // [xsp+40h] [xbp-70h] BYREF
  __int64 *v9; // [xsp+48h] [xbp-68h]
  __int64 v10; // [xsp+50h] [xbp-60h]
  void *v11; // [xsp+58h] [xbp-58h]
  __int64 v12; // [xsp+60h] [xbp-50h]
  __int64 v13; // [xsp+68h] [xbp-48h]
  _QWORD v14[4]; // [xsp+70h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v4 = objc_retain(self);
  if ( -[NSString length](v4, "length") > a3 )
  {
    v14[0] = 0LL;
    v14[1] = v14;
    v14[2] = 0x2020000000LL;
    v14[3] = 0LL;
    v8 = 0LL;
    v9 = &v8;
    v10 = 0x3010000000LL;
    v12 = 0LL;
    v13 = 0LL;
    v11 = &unk_1001A8BCB;
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_10015EA48;
    v7[3] = &unk_1001DF3B8;
    v7[4] = &v8;
    v7[5] = v14;
    v7[6] = a3;
    -[NSString enumerateSubstringsInRange:options:usingBlock:](
      v4,
      "enumerateSubstringsInRange:options:usingBlock:",
      0LL,
      -[NSString length](v4, "length"),
      2LL,
      v7);
    v5 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v4, "substringWithRange:", v9[4], v9[5]));
    objc_release(v4);
    _Block_object_dispose(&v8, 8);
    _Block_object_dispose(v14, 8);
    v4 = v5;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}