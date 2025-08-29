__ZN6google8protobuf14DescriptorPool6Tables14AllocateStringENS0_11StringPieceE
_QWORD *__fastcall google::protobuf::DescriptorPool::Tables::AllocateString(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // x20
  unsigned __int64 v5; // x8
  _QWORD *v6; // x22
  _QWORD *v7; // x22
  __int64 v8; // x9
  __int64 v9; // x22
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x1
  __int64 v13; // x0
  _QWORD *v14; // x8
  _QWORD v16[2]; // [xsp+8h] [xbp-58h] BYREF
  _QWORD v17[5]; // [xsp+18h] [xbp-48h] BYREF

  v16[0] = a2;
  v16[1] = a3;
  v4 = (_QWORD *)operator new(24LL, 0x1012C40EC159624LL);
  sub_1000967C4(v4, v16);
  v5 = a1[28];
  v6 = (_QWORD *)a1[27];
  if ( (unsigned __int64)v6 >= v5 )
  {
    v8 = a1[26];
    v9 = ((__int64)v6 - v8) >> 3;
    if ( (unsigned __int64)(v9 + 1) >> 61 )
      sub_100097888(a1 + 26);
    v10 = v5 - v8;
    v11 = v10 >> 2;
    if ( v10 >> 2 <= (unsigned __int64)(v9 + 1) )
      v11 = v9 + 1;
    if ( (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL )
      v12 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v12 = v11;
    v17[4] = a1 + 28;
    if ( v12 )
      v13 = sub_10009A09C(a1 + 28);
    else
      v13 = 0LL;
    v14 = (_QWORD *)(v13 + 8 * v9);
    v17[0] = v13;
    v17[1] = v14;
    v17[3] = v13 + 8 * v12;
    *v14 = v4;
    v17[2] = v14 + 1;
    sub_10009A344(a1 + 26, v17);
    v7 = (_QWORD *)a1[27];
    sub_10009A4D8(v17);
  }
  else
  {
    *v6 = v4;
    v7 = v6 + 1;
    a1[27] = v7;
  }
  a1[27] = v7;
  return v4;
}