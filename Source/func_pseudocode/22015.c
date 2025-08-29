__ZNSt3__112__hash_tableINS_17__hash_value_typeIN3mlc15function_kind_tENS_8functionIFbONS2_16xpc_auto_reply_tEPvEEEEENS_22__unordered_map_hasherIS3_SA_NS_4hashIS3_EENS_8equal_toIS3_EELb1EEENS_21__unordered_map_equalIS3_SA_SF_SD_Lb1EEENS_9allocatorISA_EEE25__emplace_unique_key_argsIS3_JRKNS_21piecewise_construct_tENS_5tupleIJRKS3_EEENSQ_IJEEEEEENS_4pairINS_15__hash_iteratorIPNS_11__hash_nodeISA_S7_EEEEbEERKT_DpOT0_
_QWORD *__fastcall std::__hash_table<std::__hash_value_type<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>,std::__unordered_map_hasher<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>,std::hash<mlc::function_kind_t>,std::equal_to<mlc::function_kind_t>,true>,std::__unordered_map_equal<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>,std::equal_to,std::hash,true>,std::allocator<std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>>::__emplace_unique_key_args<mlc::function_kind_t,std::piecewise_construct_t const&,std::tuple<mlc::function_kind_t const&>,std::piecewise_construct_t const&<>>(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 a3,
        _QWORD **a4)
{
  unsigned __int64 v4; // x25
  unsigned __int64 v7; // x23
  unsigned __int64 v8; // x22
  uint8x8_t v9; // d0
  _QWORD **v10; // x9
  _QWORD *i; // x20
  unsigned __int64 v12; // x10
  _QWORD *v13; // x24
  float v14; // s0
  float v15; // s1
  _BOOL8 v16; // x9
  unsigned __int64 v17; // x8
  unsigned __int64 v18; // x9
  size_t prime; // x21
  unsigned __int64 v20; // x0
  uint8x8_t v21; // d0
  __int64 v22; // x8
  __int64 v23; // x9
  _QWORD *v24; // x8
  unsigned __int64 v25; // x8

  v7 = *a2;
  v8 = a1[1];
  if ( v8 )
  {
    v9 = (uint8x8_t)vcnt_s8((int8x8_t)v8);
    v9.i16[0] = vaddlv_u8(v9);
    if ( v9.u32[0] > 1uLL )
    {
      v4 = *a2;
      if ( v7 >= v8 )
        v4 = v7 % v8;
    }
    else
    {
      v4 = (v8 - 1) & v7;
    }
    v10 = *(_QWORD ***)(*a1 + 8 * v4);
    if ( v10 )
    {
      for ( i = *v10; i; i = (_QWORD *)*i )
      {
        v12 = i[1];
        if ( v12 == v7 )
        {
          if ( i[2] == v7 )
            return i;
        }
        else
        {
          if ( v9.u32[0] > 1uLL )
          {
            if ( v12 >= v8 )
              v12 %= v8;
          }
          else
          {
            v12 &= v8 - 1;
          }
          if ( v12 != v4 )
            break;
        }
      }
    }
  }
  v13 = a1 + 2;
  i = operator new(0x38uLL);
  *i = 0LL;
  i[1] = v7;
  i[2] = **a4;
  i[6] = 0LL;
  v14 = (float)(unsigned __int64)(a1[3] + 1);
  v15 = *((float *)a1 + 8);
  if ( !v8 || (float)(v15 * (float)v8) < v14 )
  {
    v16 = 1LL;
    if ( v8 >= 3 )
      v16 = (v8 & (v8 - 1)) != 0;
    v17 = v16 | (2 * v8);
    v18 = vcvtps_u32_f32(v14 / v15);
    if ( v17 <= v18 )
      prime = v18;
    else
      prime = v17;
    if ( prime == 1 )
    {
      prime = 2LL;
    }
    else if ( (prime & (prime - 1)) != 0 )
    {
      prime = std::__next_prime(prime);
      v8 = a1[1];
    }
    if ( prime > v8 )
      goto LABEL_30;
    if ( prime < v8 )
    {
      v20 = vcvtps_u32_f32((float)(unsigned __int64)a1[3] / *((float *)a1 + 8));
      if ( v8 < 3 || (v21 = (uint8x8_t)vcnt_s8((int8x8_t)v8), v21.i16[0] = vaddlv_u8(v21), v21.u32[0] > 1uLL) )
      {
        v20 = std::__next_prime(v20);
      }
      else
      {
        v22 = 1LL << -(char)__clz(v20 - 1);
        if ( v20 >= 2 )
          v20 = v22;
      }
      if ( prime <= v20 )
        prime = v20;
      if ( prime < v8 )
LABEL_30:
        std::__hash_table<std::__hash_value_type<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>,std::__unordered_map_hasher<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>,std::hash<mlc::function_kind_t>,std::equal_to<mlc::function_kind_t>,true>,std::__unordered_map_equal<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>,std::equal_to,std::hash,true>,std::allocator<std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>>::__do_rehash<true>(
          a1,
          prime);
    }
    v8 = a1[1];
    if ( (v8 & (v8 - 1)) != 0 )
    {
      if ( v7 >= v8 )
        v4 = v7 % v8;
      else
        v4 = v7;
    }
    else
    {
      v4 = (v8 - 1) & v7;
    }
  }
  v23 = *a1;
  v24 = *(_QWORD **)(*a1 + 8 * v4);
  if ( v24 )
  {
    *i = *v24;
LABEL_55:
    *v24 = i;
    goto LABEL_56;
  }
  *i = *v13;
  *v13 = i;
  *(_QWORD *)(v23 + 8 * v4) = v13;
  if ( *i )
  {
    v25 = *(_QWORD *)(*i + 8LL);
    if ( (v8 & (v8 - 1)) != 0 )
    {
      if ( v25 >= v8 )
        v25 %= v8;
    }
    else
    {
      v25 &= v8 - 1;
    }
    v24 = (_QWORD *)(*a1 + 8 * v25);
    goto LABEL_55;
  }
LABEL_56:
  ++a1[3];
  return i;
}