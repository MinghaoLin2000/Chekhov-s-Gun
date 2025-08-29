-[NSIndexSet tsu_positionOfIndex:]
unsigned __int64 __cdecl -[NSIndexSet tsu_positionOfIndex:](NSIndexSet *self, SEL a2, unsigned __int64 a3)
{
  NSUInteger v5; // x0
  NSUInteger v6; // x19
  unsigned __int64 v7; // x19
  _QWORD v9[6]; // [xsp+0h] [xbp-70h] BYREF
  __int64 v10; // [xsp+30h] [xbp-40h] BYREF
  __int64 *v11; // [xsp+38h] [xbp-38h]
  __int64 v12; // [xsp+40h] [xbp-30h]
  __int64 v13; // [xsp+48h] [xbp-28h]

  v5 = -[NSIndexSet count](self, "count");
  if ( !v5 )
    return 0x7FFFFFFFFFFFFFFFLL;
  v6 = v5;
  v10 = 0LL;
  v11 = &v10;
  v12 = 0x2020000000LL;
  v13 = 0LL;
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_100144ACC;
  v9[3] = &unk_1001DE118;
  v9[4] = &v10;
  v9[5] = a3;
  -[NSIndexSet enumerateIndexesUsingBlock:](self, "enumerateIndexesUsingBlock:", v9);
  if ( v11[3] >= v6 )
    v7 = 0x7FFFFFFFFFFFFFFFLL;
  else
    v7 = v11[3];
  _Block_object_dispose(&v10, 8);
  return v7;
}