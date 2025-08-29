__ZNSt3__112__hash_tableINS_17__hash_value_typeIN3mlc15function_kind_tENS_8functionIFbONS2_16xpc_auto_reply_tEPvEEEEENS_22__unordered_map_hasherIS3_SA_NS_4hashIS3_EENS_8equal_toIS3_EELb1EEENS_21__unordered_map_equalIS3_SA_SF_SD_Lb1EEENS_9allocatorISA_EEE11__do_rehashILb1EEEvm
void __fastcall std::__hash_table<std::__hash_value_type<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>,std::__unordered_map_hasher<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>,std::hash<mlc::function_kind_t>,std::equal_to<mlc::function_kind_t>,true>,std::__unordered_map_equal<mlc::function_kind_t,std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>,std::equal_to,std::hash,true>,std::allocator<std::function<bool ()(mlc::xpc_auto_reply_t &&,void *)>>>::__do_rehash<true>(
        __int64 a1,
        unsigned __int64 a2)
{
  void *v4; // x8
  void *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x8
  unsigned __int64 v8; // x10
  uint8x8_t v9; // d0
  void *v10; // x0
  _QWORD *v11; // x11
  __int64 v12; // x13
  unsigned __int64 v13; // x13

  if ( a2 )
  {
    if ( a2 >> 61 )
      std::__throw_bad_array_new_length[abi:ne180100]();
    v4 = operator new(8 * a2);
    v5 = *(void **)a1;
    *(_QWORD *)a1 = v4;
    if ( v5 )
      operator delete(v5);
    v6 = 0LL;
    *(_QWORD *)(a1 + 8) = a2;
    do
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v6++) = 0LL;
    while ( a2 != v6 );
    v7 = *(_QWORD **)(a1 + 16);
    if ( v7 )
    {
      v8 = v7[1];
      v9 = (uint8x8_t)vcnt_s8((int8x8_t)a2);
      v9.i16[0] = vaddlv_u8(v9);
      if ( v9.u32[0] > 1uLL )
      {
        if ( v8 >= a2 )
          v8 %= a2;
      }
      else
      {
        v8 &= a2 - 1;
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = a1 + 16;
      v11 = (_QWORD *)*v7;
      if ( *v7 )
      {
        do
        {
          v13 = v11[1];
          if ( v9.u32[0] > 1uLL )
          {
            if ( v13 >= a2 )
              v13 %= a2;
          }
          else
          {
            v13 &= a2 - 1;
          }
          if ( v13 != v8 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v13) )
            {
              *(_QWORD *)(*(_QWORD *)a1 + 8 * v13) = v7;
              goto LABEL_19;
            }
            *v7 = *v11;
            v12 = 8 * v13;
            *v11 = **(_QWORD **)(*(_QWORD *)a1 + v12);
            **(_QWORD **)(*(_QWORD *)a1 + v12) = v11;
            v11 = v7;
          }
          v13 = v8;
LABEL_19:
          v7 = v11;
          v11 = (_QWORD *)*v11;
          v8 = v13;
        }
        while ( v11 );
      }
    }
  }
  else
  {
    v10 = *(void **)a1;
    *(_QWORD *)a1 = 0LL;
    if ( v10 )
      operator delete(v10);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}