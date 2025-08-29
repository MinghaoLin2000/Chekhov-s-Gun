__ZNSt3__142__uninitialized_allocator_move_if_noexceptB8ne180100INS_9allocatorINS_12basic_stringIcNS_11char_traitsIcEENS1_IcEEEEEENS_16reverse_iteratorIPS6_EESA_SA_EET2_RT_T0_T1_SB_
__int64 __fastcall std::__uninitialized_allocator_move_if_noexcept[abi:ne180100]<std::allocator<std::string>,std::reverse_iterator<std::string*>,std::reverse_iterator<std::string*>,std::reverse_iterator<std::string*>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // x19
  __int64 v9; // x8
  __int128 v10; // q0
  _QWORD v12[3]; // [xsp+0h] [xbp-50h] BYREF
  char v13; // [xsp+18h] [xbp-38h]
  __int128 v14; // [xsp+20h] [xbp-30h] BYREF
  __int128 v15; // [xsp+30h] [xbp-20h] BYREF

  v7 = a7;
  *(_QWORD *)&v15 = a6;
  *((_QWORD *)&v15 + 1) = a7;
  v14 = v15;
  v12[0] = a1;
  v12[1] = &v14;
  v12[2] = &v15;
  if ( a3 != a5 )
  {
    v9 = a7;
    do
    {
      v10 = *(_OWORD *)(a3 - 24);
      *(_QWORD *)(v9 - 8) = *(_QWORD *)(a3 - 8);
      *(_OWORD *)(v9 - 24) = v10;
      v9 -= 24LL;
      *(_QWORD *)(a3 - 16) = 0LL;
      *(_QWORD *)(a3 - 8) = 0LL;
      *(_QWORD *)(a3 - 24) = 0LL;
      v7 -= 24LL;
      a3 -= 24LL;
    }
    while ( a3 != a5 );
    *((_QWORD *)&v15 + 1) = v9;
  }
  v13 = 1;
  std::__exception_guard_exceptions<std::_AllocatorDestroyRangeReverse<std::allocator<std::string>,std::reverse_iterator<std::string*>>>::~__exception_guard_exceptions[abi:ne180100](v12);
  return a6;
}