__ZN6google8protobuf14DescriptorPool6Tables9AddSymbolERKNSt3__112basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEENS0_6SymbolE
__int64 __fastcall google::protobuf::DescriptorPool::Tables::AddSymbol(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v6; // x21
  _QWORD *v8; // x23
  char v9; // w1
  char v10; // w20
  char *v11; // x23
  unsigned __int64 v12; // x8
  char **v13; // x22
  _QWORD *v14; // x22
  __int64 v15; // x9
  __int64 v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x1
  __int64 v20; // x0
  char **v21; // x9
  __int64 v22; // x8
  char *v23; // x0
  char *v24; // x10
  char *v25; // t1
  __int128 v27; // [xsp+0h] [xbp-60h] BYREF
  __int128 v28; // [xsp+10h] [xbp-50h] BYREF
  __int64 v29; // [xsp+20h] [xbp-40h]
  __int64 v30; // [xsp+28h] [xbp-38h]

  v6 = a2;
  v8 = a1 + 38;
  if ( a2[23] < 0 )
    a2 = *(char **)a2;
  sub_1000965F4((int)&v27, a2);
  v28 = v27;
  v29 = a3;
  v30 = a4;
  sub_10009B170(v8, &v28, &v28);
  v10 = v9;
  if ( (v9 & 1) != 0 )
  {
    if ( v6[23] >= 0 )
      v11 = v6;
    else
      v11 = *(char **)v6;
    v13 = (char **)a1[55];
    v12 = a1[56];
    if ( (unsigned __int64)v13 >= v12 )
    {
      v15 = a1[54];
      v16 = ((__int64)v13 - v15) >> 3;
      if ( (unsigned __int64)(v16 + 1) >> 61 )
        sub_100097888(a1 + 54);
      v17 = v12 - v15;
      v18 = v17 >> 2;
      if ( v17 >> 2 <= (unsigned __int64)(v16 + 1) )
        v18 = v16 + 1;
      if ( (unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL )
        v19 = 0x1FFFFFFFFFFFFFFFLL;
      else
        v19 = v18;
      if ( v19 )
        v20 = sub_10009A09C(a1 + 56);
      else
        v20 = 0LL;
      v21 = (char **)(v20 + 8 * v16);
      v22 = v20 + 8 * v19;
      *v21 = v11;
      v14 = v21 + 1;
      v24 = (char *)a1[54];
      v23 = (char *)a1[55];
      if ( v23 != v24 )
      {
        do
        {
          v25 = (char *)*((_QWORD *)v23 - 1);
          v23 -= 8;
          *--v21 = v25;
        }
        while ( v23 != v24 );
        v23 = (char *)a1[54];
      }
      a1[54] = v21;
      a1[55] = v14;
      a1[56] = v22;
      if ( v23 )
        operator delete(v23);
    }
    else
    {
      *v13 = v11;
      v14 = v13 + 1;
    }
    a1[55] = v14;
  }
  return v10 & 1;
}