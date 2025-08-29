__ZNK3mlc14xpc_dispatch_t6handleEPvP17_xpc_connection_s
__int64 __fastcall mlc::xpc_dispatch_t::handle(os_log_s **this, void *a2, _xpc_connection_s *a3)
{
  __int64 v6; // x22
  int8x8_t v7; // x8
  uint8x8_t v8; // d0
  __int64 v9; // x10
  _QWORD *v10; // x11
  _QWORD *v11; // x23
  unsigned __int64 v12; // x12
  os_log_s *v13; // x20
  __int64 v14; // x19
  __int64 v16; // x0
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  char v18; // [xsp+10h] [xbp-60h]
  __int64 v19; // [xsp+18h] [xbp-58h] BYREF
  __int128 buf; // [xsp+20h] [xbp-50h] BYREF

  mlc::xpc_dispatch_t::handle_xpc_call(this, a2, (__int64)v17);
  if ( !v18 )
    return 0LL;
  v6 = v17[0];
  v7 = (int8x8_t)this[2];
  if ( !*(_QWORD *)&v7 )
    goto LABEL_18;
  v8 = (uint8x8_t)vcnt_s8(v7);
  v8.i16[0] = vaddlv_u8(v8);
  if ( v8.u32[0] > 1uLL )
  {
    v9 = v17[0];
    if ( v17[0] >= *(_QWORD *)&v7 )
      v9 = v17[0] % *(_QWORD *)&v7;
  }
  else
  {
    v9 = (*(_QWORD *)&v7 - 1LL) & v17[0];
  }
  v10 = (_QWORD *)*((_QWORD *)this[1] + v9);
  if ( !v10 || (v11 = (_QWORD *)*v10) == 0LL )
  {
LABEL_18:
    v13 = *this;
    v14 = 0LL;
    if ( !os_log_type_enabled(*this, OS_LOG_TYPE_DEFAULT) )
      return v14;
    LODWORD(buf) = 134217984;
    *(_QWORD *)((char *)&buf + 4) = v6;
    _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEFAULT, "Unknown function: %llu", (uint8_t *)&buf, 0xCu);
    return 0LL;
  }
  while ( 1 )
  {
    v12 = v11[1];
    if ( v17[0] == v12 )
      break;
    if ( v8.u32[0] > 1uLL )
    {
      if ( v12 >= *(_QWORD *)&v7 )
        v12 %= *(_QWORD *)&v7;
    }
    else
    {
      v12 &= *(_QWORD *)&v7 - 1LL;
    }
    if ( v12 != v9 )
      goto LABEL_18;
LABEL_11:
    v11 = (_QWORD *)*v11;
    if ( !v11 )
      goto LABEL_18;
  }
  if ( v11[2] != v17[0] )
    goto LABEL_11;
  *(_QWORD *)&buf = xpc_dictionary_create_reply(a2);
  *((_QWORD *)&buf + 1) = a3;
  v19 = v17[1];
  v16 = v11[6];
  if ( !v16 )
    std::__throw_bad_function_call[abi:ne180100]();
  v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v16 + 48LL))(v16, &buf, &v19);
  if ( (_QWORD)buf )
    xpc_release((xpc_object_t)buf);
  return v14;
}