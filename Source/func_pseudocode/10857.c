__ZNK6google8protobuf14EnumDescriptor15FindValueByNameERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__int64 __fastcall google::protobuf::EnumDescriptor::FindValueByName(__int64 a1, __int64 a2)
{
  _QWORD *v3; // x21
  char *v4; // x9
  __int64 v5; // x8
  __int64 v6; // t1
  int8x8_t v7; // x20
  unsigned __int64 v8; // x22
  uint8x8_t v9; // d0
  unsigned __int64 v10; // x23
  __int64 v11; // x24
  __int64 **v12; // x8
  __int64 *v13; // x25
  unsigned __int64 v14; // x8
  char *v16; // [xsp+8h] [xbp-68h] BYREF
  __int64 v17; // [xsp+10h] [xbp-60h]
  _QWORD v18[3]; // [xsp+18h] [xbp-58h] BYREF

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 144LL);
  sub_10007A644(&v16, a2);
  v4 = v16;
  v18[0] = a1;
  v18[1] = v16;
  v18[2] = v17;
  if ( v17 < 1 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
    do
    {
      v6 = *v4++;
      v5 = 5 * v5 + v6;
    }
    while ( v4 < &v16[v17] );
  }
  v7 = (int8x8_t)v3[1];
  if ( !*(_QWORD *)&v7 )
    return 0LL;
  v8 = v5 ^ (16777619 * a1);
  v9 = (uint8x8_t)vcnt_s8(v7);
  v9.i16[0] = vaddlv_u8(v9);
  v10 = v9.u32[0];
  if ( v9.u32[0] > 1uLL )
  {
    v11 = v5 ^ (16777619 * a1);
    if ( v8 >= *(_QWORD *)&v7 )
      v11 = v8 % *(_QWORD *)&v7;
  }
  else
  {
    v11 = (*(_QWORD *)&v7 - 1LL) & v8;
  }
  v12 = *(__int64 ***)(*v3 + 8 * v11);
  if ( !v12 )
    return 0LL;
  v13 = *v12;
  if ( !*v12 )
    return 0LL;
  while ( 1 )
  {
    v14 = v13[1];
    if ( v8 == v14 )
      break;
    if ( v10 > 1 )
    {
      if ( v14 >= *(_QWORD *)&v7 )
        v14 %= *(_QWORD *)&v7;
    }
    else
    {
      v14 &= *(_QWORD *)&v7 - 1LL;
    }
    if ( v14 != v11 )
      return 0LL;
LABEL_21:
    v13 = (__int64 *)*v13;
    if ( !v13 )
      return 0LL;
  }
  if ( (sub_1000968EC(v3 + 4, v13 + 2, v18) & 1) == 0 )
    goto LABEL_21;
  if ( *((_DWORD *)v13 + 10) == 5 )
    return v13[6];
  else
    return 0LL;
}