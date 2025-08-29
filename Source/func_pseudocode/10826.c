__ZN6google8protobuf20FileDescriptorTables19AddAliasUnderParentEPKvRKNSt3__112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEENS0_6SymbolE
__int64 __fastcall google::protobuf::FileDescriptorTables::AddAliasUnderParent(
        float *a1,
        __int64 a2,
        char *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // x23
  char *v9; // x8
  __int64 v10; // x9
  char *v11; // x10
  __int64 v12; // t1
  unsigned __int64 v13; // x22
  unsigned __int64 v14; // x21
  uint8x8_t v15; // d0
  unsigned __int64 v16; // x24
  _QWORD *v17; // x8
  _QWORD *v18; // x25
  unsigned __int64 v19; // x8
  _QWORD *v20; // x20
  __int128 v21; // q1
  float v22; // s0
  float v23; // s1
  _BOOL8 v24; // x9
  unsigned __int64 v25; // x8
  unsigned __int64 v26; // x9
  size_t v27; // x1
  __int64 v28; // x9
  _QWORD *v29; // x8
  unsigned __int64 v30; // x8
  __int128 v32; // [xsp+8h] [xbp-88h] BYREF
  __int64 v33; // [xsp+18h] [xbp-78h]
  __int128 v34; // [xsp+20h] [xbp-70h] BYREF
  __int128 v35; // [xsp+30h] [xbp-60h]
  __int64 v36; // [xsp+40h] [xbp-50h]

  if ( a3[23] >= 0 )
    v9 = a3;
  else
    v9 = *(char **)a3;
  *(_QWORD *)&v32 = a2;
  sub_1000965F4((int)&v32 + 8, v9);
  v34 = v32;
  *(_QWORD *)&v35 = v33;
  *((_QWORD *)&v35 + 1) = a4;
  v36 = a5;
  if ( v33 < 1 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v11 = (char *)*((_QWORD *)&v34 + 1);
    do
    {
      v12 = *v11++;
      v10 = 5 * v10 + v12;
    }
    while ( (unsigned __int64)v11 < *((_QWORD *)&v34 + 1) + v33 );
  }
  v13 = v10 ^ (16777619 * v32);
  v14 = *((_QWORD *)a1 + 1);
  if ( v14 )
  {
    v15 = (uint8x8_t)vcnt_s8((int8x8_t)v14);
    v15.i16[0] = vaddlv_u8(v15);
    v16 = v15.u32[0];
    if ( v15.u32[0] > 1uLL )
    {
      v5 = v10 ^ (16777619 * v32);
      if ( v13 >= v14 )
        v5 = v13 % v14;
    }
    else
    {
      v5 = (v14 - 1) & v13;
    }
    v17 = *(_QWORD **)(*(_QWORD *)a1 + 8 * v5);
    if ( v17 )
    {
      v18 = (_QWORD *)*v17;
      if ( *v17 )
      {
        do
        {
          v19 = v18[1];
          if ( v19 == v13 )
          {
            if ( (sub_1000968EC(a1 + 8, v18 + 2, &v34) & 1) != 0 )
              return 0LL;
          }
          else
          {
            if ( v16 > 1 )
            {
              if ( v19 >= v14 )
                v19 %= v14;
            }
            else
            {
              v19 &= v14 - 1;
            }
            if ( v19 != v5 )
              break;
          }
          v18 = (_QWORD *)*v18;
        }
        while ( v18 );
      }
    }
  }
  v20 = operator new(0x38uLL);
  *v20 = 0LL;
  v20[1] = v13;
  v21 = v35;
  *((_OWORD *)v20 + 1) = v34;
  *((_OWORD *)v20 + 2) = v21;
  v20[6] = v36;
  v22 = (float)(unsigned __int64)(*((_QWORD *)a1 + 3) + 1LL);
  v23 = a1[8];
  if ( !v14 || (float)(v23 * (float)v14) < v22 )
  {
    v24 = 1LL;
    if ( v14 >= 3 )
      v24 = (v14 & (v14 - 1)) != 0;
    v25 = v24 | (2 * v14);
    v26 = vcvtps_u32_f32(v22 / v23);
    if ( v25 <= v26 )
      v27 = v26;
    else
      v27 = v25;
    sub_1000995E0((int)a1, v27);
    v14 = *((_QWORD *)a1 + 1);
    if ( (v14 & (v14 - 1)) != 0 )
    {
      if ( v13 >= v14 )
        v5 = v13 % v14;
      else
        v5 = v13;
    }
    else
    {
      v5 = (v14 - 1) & v13;
    }
  }
  v28 = *(_QWORD *)a1;
  v29 = *(_QWORD **)(*(_QWORD *)a1 + 8 * v5);
  if ( v29 )
  {
    *v20 = *v29;
LABEL_46:
    *v29 = v20;
    goto LABEL_47;
  }
  *v20 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = v20;
  *(_QWORD *)(v28 + 8 * v5) = a1 + 4;
  if ( *v20 )
  {
    v30 = *(_QWORD *)(*v20 + 8LL);
    if ( (v14 & (v14 - 1)) != 0 )
    {
      if ( v30 >= v14 )
        v30 %= v14;
    }
    else
    {
      v30 &= v14 - 1;
    }
    v29 = (_QWORD *)(*(_QWORD *)a1 + 8 * v30);
    goto LABEL_46;
  }
LABEL_47:
  ++*((_QWORD *)a1 + 3);
  return 1LL;
}