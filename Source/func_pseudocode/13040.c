-[NSIndexSet tsu_firstCommonIndexWithIndexes:]
unsigned __int64 __cdecl -[NSIndexSet tsu_firstCommonIndexWithIndexes:](NSIndexSet *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned __int64 v5; // x20
  _QWORD v7[4]; // [xsp+0h] [xbp-60h] BYREF
  id v8; // [xsp+20h] [xbp-40h]
  __int64 *v9; // [xsp+28h] [xbp-38h]
  __int64 v10; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-28h]
  __int64 v12; // [xsp+40h] [xbp-20h]
  __int64 v13; // [xsp+48h] [xbp-18h]

  v10 = 0LL;
  v11 = &v10;
  v12 = 0x2020000000LL;
  v13 = 0x7FFFFFFFFFFFFFFFLL;
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10014502C;
  v7[3] = &unk_1001DE088;
  v8 = objc_retain(a3);
  v9 = &v10;
  v4 = objc_retain(v8);
  -[NSIndexSet enumerateRangesUsingBlock:](self, "enumerateRangesUsingBlock:", v7);
  v5 = v11[3];
  objc_release(v8);
  objc_release(v4);
  _Block_object_dispose(&v10, 8);
  return v5;
}