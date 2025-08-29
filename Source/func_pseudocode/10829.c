__ZN6google8protobuf20FileDescriptorTables16AddFieldByNumberEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::FileDescriptorTables::AddFieldByNumber(
        google::protobuf::FileDescriptorTables *this,
        const google::protobuf::FieldDescriptor *a2)
{
  __int64 v2; // x25
  __int64 v5; // x26
  int v6; // w27
  __int64 *v7; // x20
  unsigned __int64 v8; // x24
  unsigned __int64 v9; // x23
  uint8x8_t v10; // d0
  __int64 **v11; // x9
  __int64 *i; // x9
  unsigned __int64 v13; // x11
  _QWORD *v15; // x21
  float v16; // s0
  float v17; // s1
  _BOOL8 v18; // x9
  unsigned __int64 v19; // x8
  unsigned __int64 v20; // x9
  size_t v21; // x1
  __int64 v22; // x9
  _QWORD *v23; // x8
  unsigned __int64 v24; // x8

  v5 = *((_QWORD *)a2 + 10);
  v6 = *((_DWORD *)a2 + 17);
  v7 = (__int64 *)((char *)this + 152);
  v8 = (16777619LL * v6) ^ (16777499 * v5);
  v9 = *((_QWORD *)this + 20);
  if ( v9 )
  {
    v10 = (uint8x8_t)vcnt_s8((int8x8_t)v9);
    v10.i16[0] = vaddlv_u8(v10);
    if ( v10.u32[0] > 1uLL )
    {
      v2 = (16777619LL * v6) ^ (16777499 * v5);
      if ( v8 >= v9 )
        v2 = v8 % v9;
    }
    else
    {
      v2 = v8 & (v9 - 1);
    }
    v11 = *(__int64 ***)(*v7 + 8 * v2);
    if ( v11 )
    {
      for ( i = *v11; i; i = (__int64 *)*i )
      {
        v13 = i[1];
        if ( v13 == v8 )
        {
          if ( i[2] == v5 && *((_DWORD *)i + 6) == v6 )
            return 0LL;
        }
        else
        {
          if ( v10.u32[0] > 1uLL )
          {
            if ( v13 >= v9 )
              v13 %= v9;
          }
          else
          {
            v13 &= v9 - 1;
          }
          if ( v13 != v2 )
            break;
        }
      }
    }
  }
  v15 = operator new(0x28uLL);
  *v15 = 0LL;
  v15[1] = v8;
  v15[2] = v5;
  *((_DWORD *)v15 + 6) = v6;
  v15[4] = a2;
  v16 = (float)(unsigned __int64)(*((_QWORD *)this + 22) + 1LL);
  v17 = *((float *)this + 46);
  if ( !v9 || (float)(v17 * (float)v9) < v16 )
  {
    v18 = 1LL;
    if ( v9 >= 3 )
      v18 = (v9 & (v9 - 1)) != 0;
    v19 = v18 | (2 * v9);
    v20 = vcvtps_u32_f32(v16 / v17);
    if ( v19 <= v20 )
      v21 = v20;
    else
      v21 = v19;
    sub_1000995E0((int)v7, v21);
    v9 = *((_QWORD *)this + 20);
    if ( (v9 & (v9 - 1)) != 0 )
    {
      if ( v8 >= v9 )
        v2 = v8 % v9;
      else
        v2 = (16777619LL * v6) ^ (16777499 * v5);
    }
    else
    {
      v2 = (v9 - 1) & v8;
    }
  }
  v22 = *v7;
  v23 = *(_QWORD **)(*v7 + 8 * v2);
  if ( v23 )
  {
    *v15 = *v23;
LABEL_42:
    *v23 = v15;
    goto LABEL_43;
  }
  *v15 = *((_QWORD *)this + 21);
  *((_QWORD *)this + 21) = v15;
  *(_QWORD *)(v22 + 8 * v2) = (char *)this + 168;
  if ( *v15 )
  {
    v24 = *(_QWORD *)(*v15 + 8LL);
    if ( (v9 & (v9 - 1)) != 0 )
    {
      if ( v24 >= v9 )
        v24 %= v9;
    }
    else
    {
      v24 &= v9 - 1;
    }
    v23 = (_QWORD *)(*v7 + 8 * v24);
    goto LABEL_42;
  }
LABEL_43:
  ++*((_QWORD *)this + 22);
  return 1LL;
}