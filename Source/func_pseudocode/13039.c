-[NSIndexSet tsu_trailingRangeInRange:]
// local variable allocation has failed, the output may be wrong!
_NSRange __cdecl -[NSIndexSet tsu_trailingRangeInRange:](NSIndexSet *self, SEL a2, _NSRange a3)
{
  __int128 *v3; // x8
  NSUInteger v4; // x19
  NSUInteger v5; // x20
  NSUInteger v6; // x0
  NSUInteger v7; // x1
  __int64 v8; // [xsp+30h] [xbp-50h] BYREF
  __int64 *v9; // [xsp+38h] [xbp-48h]
  __int64 v10; // [xsp+40h] [xbp-40h]
  __int64 (__fastcall *v11)(); // [xsp+48h] [xbp-38h]
  __int64 (__fastcall *v12)(); // [xsp+50h] [xbp-30h]
  void *v13; // [xsp+58h] [xbp-28h]
  NSUInteger v14; // [xsp+60h] [xbp-20h]
  __int64 v15; // [xsp+68h] [xbp-18h]
  _NSRange result; // 0:x0.16

  v8 = 0LL;
  v9 = &v8;
  v10 = 0x4012000000LL;
  v11 = sub_100144D44;
  v12 = nullsub_11;
  v13 = &unk_1001A8BCB;
  v14 = a3.location + a3.length;
  v15 = 0LL;
  -[NSIndexSet enumerateRangesInRange:options:usingBlock:](self, "enumerateRangesInRange:options:usingBlock:");
  if ( v9[7] )
    v3 = (__int128 *)(v9 + 6);
  else
    v3 = &TSUInvalidRange;
  v4 = *(_QWORD *)v3;
  v5 = *((_QWORD *)v3 + 1);
  _Block_object_dispose(&v8, 8);
  v6 = v4;
  v7 = v5;
  result.length = v7;
  result.location = v6;
  return result;
}