-[NSIndexSet tsu_indexSetByIntersectingWithIndexes:]
id __cdecl -[NSIndexSet tsu_indexSetByIntersectingWithIndexes:](NSIndexSet *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned __int64 v5; // x21
  _BYTE *v6; // x21
  char *v7; // x22
  NSUInteger v8; // x21
  id v9; // x0
  void *v10; // x20
  _QWORD v12[6]; // [xsp+0h] [xbp-B0h] BYREF
  _QWORD v13[4]; // [xsp+30h] [xbp-80h] BYREF
  id v14; // [xsp+50h] [xbp-60h]
  __int64 *v15; // [xsp+58h] [xbp-58h]
  __int64 v16; // [xsp+60h] [xbp-50h] BYREF
  __int64 *v17; // [xsp+68h] [xbp-48h]
  __int64 v18; // [xsp+70h] [xbp-40h]
  __int64 (__fastcall *v19)(); // [xsp+78h] [xbp-38h]
  __int64 (__fastcall *v20)(); // [xsp+80h] [xbp-30h]
  id v21; // [xsp+88h] [xbp-28h]
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v4 = objc_retain(a3);
  v16 = 0LL;
  v17 = &v16;
  v18 = 0x3032000000LL;
  v19 = sub_1001443C4;
  v20 = sub_1001443D4;
  v21 = objc_retainAutoreleasedReturnValue(+[NSMutableIndexSet indexSet](&OBJC_CLASS___NSMutableIndexSet, "indexSet"));
  v5 = -[NSIndexSet count](self, "count");
  if ( v5 >= (unsigned __int64)objc_msgSend(v4, "count") )
  {
    v8 = -[NSIndexSet firstIndex](self, "firstIndex");
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 3254779904LL;
    v12[2] = sub_1001446D8;
    v12[3] = &unk_1001DE088;
    v12[4] = self;
    v12[5] = &v16;
    objc_msgSend(
      v4,
      "enumerateRangesInRange:options:usingBlock:",
      v8,
      (char *)-[NSIndexSet lastIndex](self, "lastIndex") - v8 + 1,
      0LL,
      v12);
  }
  else
  {
    v6 = objc_msgSend(v4, "firstIndex");
    v7 = (char *)((_BYTE *)objc_msgSend(v4, "lastIndex") - v6 + 1);
    v13[0] = _NSConcreteStackBlock;
    v13[1] = 3254779904LL;
    v13[2] = sub_100144640;
    v13[3] = &unk_1001DE088;
    v14 = objc_retain(v4);
    v15 = &v16;
    -[NSIndexSet enumerateRangesInRange:options:usingBlock:](
      self,
      "enumerateRangesInRange:options:usingBlock:",
      v6,
      v7,
      0LL,
      v13);
    objc_release(v14);
  }
  v9 = objc_alloc((Class)&OBJC_CLASS___NSIndexSet);
  v10 = objc_msgSend(v9, "initWithIndexSet:", v17[5]);
  _Block_object_dispose(&v16, 8);
  objc_release(v21);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}