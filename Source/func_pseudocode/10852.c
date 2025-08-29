__ZNK6google8protobuf10Descriptor17FindFieldByNumberEi
__int64 __fastcall google::protobuf::Descriptor::FindFieldByNumber(google::protobuf::Descriptor *this, int a2)
{
  int8x8_t *v2; // x12
  int8x8_t v3; // x8
  unsigned __int64 v4; // x9
  uint8x8_t v5; // d0
  __int64 v6; // x11
  __int64 **v7; // x12
  __int64 *v8; // x12
  unsigned __int64 v9; // x14
  __int64 v12; // x8

  v2 = *(int8x8_t **)(*((_QWORD *)this + 2) + 144LL);
  v3 = v2[20];
  if ( !*(_QWORD *)&v3 )
    return 0LL;
  v4 = (16777619LL * a2) ^ (16777499LL * (_QWORD)this);
  v5 = (uint8x8_t)vcnt_s8(v3);
  v5.i16[0] = vaddlv_u8(v5);
  if ( v5.u32[0] > 1uLL )
  {
    v6 = (16777619LL * a2) ^ (16777499LL * (_QWORD)this);
    if ( v4 >= *(_QWORD *)&v3 )
      v6 = v4 % *(_QWORD *)&v3;
  }
  else
  {
    v6 = (*(_QWORD *)&v3 - 1LL) & v4;
  }
  v7 = *(__int64 ***)(*(_QWORD *)&v2[19] + 8 * v6);
  if ( !v7 )
    return 0LL;
  v8 = *v7;
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    v9 = v8[1];
    if ( v4 == v9 )
      break;
    if ( v5.u32[0] > 1uLL )
    {
      if ( v9 >= *(_QWORD *)&v3 )
        v9 %= *(_QWORD *)&v3;
    }
    else
    {
      v9 &= *(_QWORD *)&v3 - 1LL;
    }
    if ( v9 != v6 )
      return 0LL;
LABEL_20:
    v8 = (__int64 *)*v8;
    if ( !v8 )
      return 0LL;
  }
  if ( (google::protobuf::Descriptor *)v8[2] != this || *((_DWORD *)v8 + 6) != a2 )
    goto LABEL_20;
  v12 = v8[4];
  if ( !v12 )
    return 0LL;
  if ( *(_BYTE *)(v12 + 67) )
    return 0LL;
  else
    return v8[4];
}