-[NSIndexSet tsu_indexSetByIntersectingWithRange:]
id __cdecl -[NSIndexSet tsu_indexSetByIntersectingWithRange:](NSIndexSet *self, SEL a2, _NSRange a3)
{
  NSUInteger length; // x19
  NSUInteger location; // x20
  id v6; // x0
  void *v7; // x19
  _QWORD v9[5]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v10; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-48h]
  __int64 v12; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v13)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v14)(); // [xsp+50h] [xbp-30h]
  id v15; // [xsp+58h] [xbp-28h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  length = a3.length;
  location = a3.location;
  v10 = 0LL;
  v11 = &v10;
  v12 = 0x3032000000LL;
  v13 = sub_1001443C4;
  v14 = sub_1001443D4;
  v15 = objc_retainAutoreleasedReturnValue(+[NSMutableIndexSet indexSet](&OBJC_CLASS___NSMutableIndexSet, "indexSet"));
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_1001443DC;
  v9[3] = &unk_1001DE0B8;
  v9[4] = &v10;
  -[NSIndexSet enumerateRangesInRange:options:usingBlock:](
    self,
    "enumerateRangesInRange:options:usingBlock:",
    location,
    length,
    0LL,
    v9);
  v6 = objc_alloc((Class)&OBJC_CLASS___NSIndexSet);
  v7 = objc_msgSend(v6, "initWithIndexSet:", v11[5]);
  _Block_object_dispose(&v10, 8);
  objc_release(v15);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}