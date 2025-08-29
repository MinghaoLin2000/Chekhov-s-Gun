__ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE24__emplace_back_slow_pathIJRPKcEEEPS6_DpOT_
__int64 __fastcall std::vector<std::string>::__emplace_back_slow_path<char const*&>(__int64 a1, char **a2)
{
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x10
  __int64 v6; // x1
  std::string *v7; // x0
  __int64 v8; // x19
  std::__split_buffer<std::string> __v; // [xsp+8h] [xbp-48h] BYREF

  v3 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v4 = v3 + 1;
  if ( v3 + 1 > 0xAAAAAAAAAAAAAAALL )
    std::vector<long long>::__throw_length_error[abi:ne180100]();
  if ( 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) > v4 )
    v4 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3) >= 0x555555555555555LL )
    v6 = 0xAAAAAAAAAAAAAAALL;
  else
    v6 = v4;
  __v.__end_cap_.__value_ = (std::allocator<std::string> *)(a1 + 16);
  if ( v6 )
    v7 = (std::string *)std::__allocate_at_least[abi:ne180100]<std::allocator<std::string>>();
  else
    v7 = 0LL;
  __v.__first_ = v7;
  __v.__begin_ = v7 + v3;
  __v.__end_ = __v.__begin_;
  __v.__end_cap_.__value_ = &v7[v6];
  std::string::basic_string[abi:ne180100]<0>((_DWORD)v7 + 24 * v3, *a2);
  __v.__end_ = __v.__begin_ + 1;
  std::vector<std::string>::__swap_out_circular_buffer((std::vector<std::string> *)a1, &__v);
  v8 = *(_QWORD *)(a1 + 8);
  std::__split_buffer<std::string>::~__split_buffer(&__v);
  return v8;
}