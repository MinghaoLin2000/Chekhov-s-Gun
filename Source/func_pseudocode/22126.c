____ZL23MTLServiceHandleMessagePU24objcproto13OS_xpc_object8NSObject_block_invoke.29
__int64 __fastcall ___ZL23MTLServiceHandleMessagePU24objcproto13OS_xpc_object8NSObject_block_invoke_29(__int64 a1)
{
  std::string *v2; // x0
  __int128 v3; // q0
  std::string *v4; // x0
  __int128 v5; // q0
  int v6; // w8
  const char *v7; // x10
  const char *v8; // x11
  const std::string::value_type *v9; // x1
  std::string *v10; // x0
  __int128 v11; // q0
  __int128 *v12; // x8
  __int128 *v13; // x2
  __int64 result; // x0
  std::string v15; // [xsp+8h] [xbp-88h] BYREF
  std::string v16; // [xsp+20h] [xbp-70h] BYREF
  __int128 v17; // [xsp+40h] [xbp-50h] BYREF
  signed __int64 v18; // [xsp+50h] [xbp-40h]
  std::string v19; // [xsp+60h] [xbp-30h] BYREF

  dispatch_source_cancel((dispatch_source_t)gTimer);
  (*(void (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
  std::string::basic_string[abi:ne180100]<0>((int)&v15, "Compiler service plugin hung while serving ");
  v2 = std::string::append(&v15, *(const std::string::value_type **)(a1 + 40));
  v3 = *(_OWORD *)&v2->__r_.__value_.__l.__data_;
  v16.__r_.__value_.__r.__words[2] = v2->__r_.__value_.__r.__words[2];
  *(_OWORD *)&v16.__r_.__value_.__l.__data_ = v3;
  v2->__r_.__value_.__l.__size_ = 0LL;
  v2->__r_.__value_.__r.__words[2] = 0LL;
  v2->__r_.__value_.__r.__words[0] = 0LL;
  v4 = std::string::append(&v16, ". Timeout type was ");
  v5 = *(_OWORD *)&v4->__r_.__value_.__l.__data_;
  v19.__r_.__value_.__r.__words[2] = v4->__r_.__value_.__r.__words[2];
  *(_OWORD *)&v19.__r_.__value_.__l.__data_ = v5;
  v4->__r_.__value_.__l.__size_ = 0LL;
  v4->__r_.__value_.__r.__words[2] = 0LL;
  v4->__r_.__value_.__r.__words[0] = 0LL;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = "API Specified";
  v8 = "Unknown";
  if ( v6 == 2 )
    v8 = "Environment Variable";
  if ( v6 != 1 )
    v7 = v8;
  if ( v6 )
    v9 = v7;
  else
    v9 = "Default";
  v10 = std::string::append(&v19, v9);
  v11 = *(_OWORD *)&v10->__r_.__value_.__l.__data_;
  v18 = v10->__r_.__value_.__r.__words[2];
  v17 = v11;
  v10->__r_.__value_.__l.__size_ = 0LL;
  v10->__r_.__value_.__r.__words[2] = 0LL;
  v10->__r_.__value_.__r.__words[0] = 0LL;
  if ( SHIBYTE(v19.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v19.__r_.__value_.__l.__data_);
  if ( SHIBYTE(v16.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v16.__r_.__value_.__l.__data_);
  if ( SHIBYTE(v15.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v15.__r_.__value_.__l.__data_);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_FAULT) )
  {
    v12 = &v17;
    if ( v18 < 0 )
      v12 = (__int128 *)v17;
    LODWORD(v19.__r_.__value_.__l.__data_) = 136315138;
    *(std::string::size_type *)((char *)v19.__r_.__value_.__r.__words + 4) = (std::string::size_type)v12;
    _os_log_fault_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_FAULT,
      "%s",
      (uint8_t *)&v19,
      0xCu);
  }
  if ( v18 >= 0 )
    v13 = &v17;
  else
    v13 = (__int128 *)v17;
  result = abort_with_reason(21LL, 2LL, v13, 0LL);
  __break(1u);
  return result;
}