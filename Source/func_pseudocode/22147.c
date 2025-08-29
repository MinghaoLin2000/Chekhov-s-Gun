__ZNKSt3__129_AllocatorDestroyRangeReverseINS_9allocatorINS_12basic_stringIcNS_11char_traitsIcEENS1_IcEEEEEENS_16reverse_iteratorIPS6_EEEclB8ne180100Ev
void __fastcall std::_AllocatorDestroyRangeReverse<std::allocator<std::string>,std::reverse_iterator<std::string*>>::operator()[abi:ne180100](
        __int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x20

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  while ( v1 != v2 )
  {
    if ( *(char *)(v1 + 23) < 0 )
      operator delete(*(void **)v1);
    v1 += 24LL;
  }
}