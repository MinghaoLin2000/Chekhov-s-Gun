-[NSString tsu_substringByTruncatingToSize:forAttributes:]
id __cdecl -[NSString tsu_substringByTruncatingToSize:forAttributes:](NSString *self, SEL a2, CGSize a3, id a4)
{
  CGFloat height; // d8
  double width; // d9
  id v7; // x19
  NSString *v8; // x20
  double v9; // d0
  NSString *v10; // x22
  id v11; // x21
  void *v12; // x24
  void *v13; // x23
  NSString *v14; // x22
  id v15; // x20
  void ***v16; // x21
  __int64 *v17; // x8
  __int64 v18; // x3
  NSString *v19; // x23
  NSString *v20; // x22
  void **v22; // [xsp+0h] [xbp-C0h] BYREF
  __int64 v23; // [xsp+8h] [xbp-B8h]
  __int64 (__fastcall *v24)(); // [xsp+10h] [xbp-B0h]
  void *v25; // [xsp+18h] [xbp-A8h]
  id v26; // [xsp+20h] [xbp-A0h]
  id v27; // [xsp+28h] [xbp-98h]
  id v28; // [xsp+30h] [xbp-90h]
  __int64 *v29; // [xsp+38h] [xbp-88h]
  double v30; // [xsp+40h] [xbp-80h]
  CGFloat v31; // [xsp+48h] [xbp-78h]
  __int64 v32; // [xsp+50h] [xbp-70h] BYREF
  __int64 *v33; // [xsp+58h] [xbp-68h]
  __int64 v34; // [xsp+60h] [xbp-60h]
  void *v35; // [xsp+68h] [xbp-58h]
  __int64 v36; // [xsp+70h] [xbp-50h]
  __int64 v37; // [xsp+78h] [xbp-48h]
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  height = a3.height;
  width = a3.width;
  v7 = objc_retain(a4);
  v8 = objc_retain(self);
  -[NSString sizeWithAttributes:](v8, "sizeWithAttributes:", v7);
  if ( width <= v9 )
  {
    v11 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "localizedStringForKey:value:table:", CFSTR("…"), &stru_1001DFAA0, CFSTR("TSUtility")));
    objc_release(v11);
    v13 = -[NSString length](v8, "length");
    v32 = 0LL;
    v33 = &v32;
    v34 = 0x3010000000LL;
    v35 = &unk_1001A8BCB;
    v36 = 0LL;
    v37 = 0LL;
    v22 = _NSConcreteStackBlock;
    v23 = 3254779904LL;
    v24 = sub_10015ED40;
    v25 = &unk_1001DF3E8;
    v29 = &v32;
    v14 = objc_retain(v8);
    v26 = v14;
    v15 = objc_retain(v12);
    v27 = v15;
    v28 = objc_retain(v7);
    v30 = width;
    v31 = height;
    v16 = objc_retainBlock(&v22);
    -[NSString enumerateSubstringsInRange:options:usingBlock:](
      v14,
      "enumerateSubstringsInRange:options:usingBlock:",
      0LL,
      v13,
      3LL,
      v16,
      v22,
      v23,
      v24,
      v25);
    v17 = v33;
    v18 = v33[5];
    if ( !v18 )
    {
      -[NSString enumerateSubstringsInRange:options:usingBlock:](
        v14,
        "enumerateSubstringsInRange:options:usingBlock:",
        0LL,
        v13,
        2LL,
        v16);
      v17 = v33;
      v18 = v33[5];
    }
    v19 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v14, "substringWithRange:", v17[4], v18));
    objc_release(v14);
    if ( !-[NSString isEqualToString:](v19, "isEqualToString:", v14) )
    {
      v20 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](v19, "stringByAppendingString:", v15));
      objc_release(v19);
      v19 = v20;
    }
    v10 = objc_retain(v19);
    objc_release(v16);
    objc_release(v28);
    objc_release(v27);
    objc_release(v26);
    _Block_object_dispose(&v32, 8);
    objc_release(v15);
  }
  else
  {
    v10 = objc_retain(v8);
  }
  objc_release(v10);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}