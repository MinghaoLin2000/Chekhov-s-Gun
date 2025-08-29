-[NSIndexSet tsu_leadingRangeInRange:]
// local variable allocation has failed, the output may be wrong!
_NSRange __cdecl -[NSIndexSet tsu_leadingRangeInRange:](NSIndexSet *self, SEL a2, _NSRange a3)
{
  __int128 *v3; // x8
  NSUInteger v4; // x19
  NSUInteger v5; // x20
  NSUInteger v6; // x0
  NSUInteger v7; // x1
  _QWORD v8[5]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v9; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v10; // [xsp+38h] [xbp-48h]
  __int64 v11; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v12)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v13)(); // [xsp+50h] [xbp-30h]
  void *v14; // [xsp+58h] [xbp-28h]
  NSUInteger location; // [xsp+60h] [xbp-20h]
  __int64 v16; // [xsp+68h] [xbp-18h]
  _NSRange result; // 0:x0.16

  v9 = 0LL;
  v10 = &v9;
  v11 = 0x4012000000LL;
  v12 = sub_100144D44;
  v13 = nullsub_11;
  v14 = &unk_1001A8BCB;
  location = a3.location;
  v16 = 0LL;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100144D54;
  v8[3] = &unk_1001DE0B8;
  v8[4] = &v9;
  -[NSIndexSet enumerateRangesInRange:options:usingBlock:](
    self,
    "enumerateRangesInRange:options:usingBlock:",
    a3.location,
    a3.length,
    0LL,
    v8);
  if ( v10[7] )
    v3 = (__int128 *)(v10 + 6);
  else
    v3 = &TSUInvalidRange;
  v4 = *(_QWORD *)v3;
  v5 = *((_QWORD *)v3 + 1);
  _Block_object_dispose(&v9, 8);
  v6 = v4;
  v7 = v5;
  result.length = v7;
  result.location = v6;
  return result;
}