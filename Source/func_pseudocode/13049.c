-[NSIndexSet tsu_indexSetByOutsettingRangesBy:]
id __cdecl -[NSIndexSet tsu_indexSetByOutsettingRangesBy:](NSIndexSet *self, SEL a2, unsigned __int64 a3)
{
  void *v5; // x19
  _QWORD v7[6]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v8; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v9; // [xsp+38h] [xbp-48h]
  __int64 v10; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v11)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v12)(); // [xsp+50h] [xbp-30h]
  id v13; // [xsp+58h] [xbp-28h]
  __int64 vars8; // [xsp+88h] [xbp+8h]

  v8 = 0LL;
  v9 = &v8;
  v10 = 0x3032000000LL;
  v11 = sub_1001443C4;
  v12 = sub_1001443D4;
  v13 = objc_retainAutoreleasedReturnValue(+[NSMutableIndexSet indexSet](&OBJC_CLASS___NSMutableIndexSet, "indexSet"));
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10014622C;
  v7[3] = &unk_1001DE298;
  v7[4] = &v8;
  v7[5] = a3;
  -[NSIndexSet enumerateRangesUsingBlock:](self, "enumerateRangesUsingBlock:", v7);
  v5 = objc_msgSend((id)v9[5], "copy");
  _Block_object_dispose(&v8, 8);
  objc_release(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}