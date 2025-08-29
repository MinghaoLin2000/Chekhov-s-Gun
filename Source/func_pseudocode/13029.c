-[NSIndexSet tsu_intersectsIndexesInIndexSet:]
bool __cdecl -[NSIndexSet tsu_intersectsIndexesInIndexSet:](NSIndexSet *self, SEL a2, id a3)
{
  id v4; // x19
  char v5; // w20
  _QWORD v7[4]; // [xsp+0h] [xbp-60h] BYREF
  id v8; // [xsp+20h] [xbp-40h]
  __int64 *v9; // [xsp+28h] [xbp-38h]
  __int64 v10; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-28h]
  __int64 v12; // [xsp+40h] [xbp-20h]
  char v13; // [xsp+48h] [xbp-18h]

  v4 = objc_retain(a3);
  v10 = 0LL;
  v11 = &v10;
  v12 = 0x2020000000LL;
  v13 = 0;
  if ( -[NSIndexSet count](self, "count") && objc_msgSend(v4, "count") )
  {
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_100144138;
    v7[3] = &unk_1001DE088;
    v8 = objc_retain(v4);
    v9 = &v10;
    -[NSIndexSet enumerateRangesUsingBlock:](self, "enumerateRangesUsingBlock:", v7);
    objc_release(v8);
  }
  v5 = *((_BYTE *)v11 + 24);
  _Block_object_dispose(&v10, 8);
  objc_release(v4);
  return v5;
}