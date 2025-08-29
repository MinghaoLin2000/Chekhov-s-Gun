-[NSIndexSet tsu_indexAtPosition:]
unsigned __int64 __cdecl -[NSIndexSet tsu_indexAtPosition:](NSIndexSet *self, SEL a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x19
  _QWORD v7[7]; // [xsp+8h] [xbp-98h] BYREF
  _QWORD v8[4]; // [xsp+40h] [xbp-60h] BYREF
  __int64 v9; // [xsp+60h] [xbp-40h] BYREF
  __int64 *v10; // [xsp+68h] [xbp-38h]
  __int64 v11; // [xsp+70h] [xbp-30h]
  __int64 v12; // [xsp+78h] [xbp-28h]

  v9 = 0LL;
  v10 = &v9;
  v11 = 0x2020000000LL;
  v12 = 0x7FFFFFFFFFFFFFFFLL;
  if ( -[NSIndexSet count](self, "count") > a3 )
  {
    v8[0] = 0LL;
    v8[1] = v8;
    v8[2] = 0x2020000000LL;
    v8[3] = 0LL;
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 3254779904LL;
    v7[2] = sub_1001449A4;
    v7[3] = &unk_1001DE0E8;
    v7[4] = v8;
    v7[5] = &v9;
    v7[6] = a3;
    -[NSIndexSet enumerateIndexesUsingBlock:](self, "enumerateIndexesUsingBlock:", v7);
    _Block_object_dispose(v8, 8);
  }
  v5 = v10[3];
  _Block_object_dispose(&v9, 8);
  return v5;
}