__ZNSt3__114__split_bufferINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEERNS4_IS6_EEE17__destruct_at_endB8ne180100EPS6_
void __fastcall std::__split_buffer<std::string>::__destruct_at_end[abi:ne180100](__int64 a1, void **a2)
{
  void **v2; // x9
  void **v5; // x8

  v2 = *(void ***)(a1 + 16);
  if ( v2 != a2 )
  {
    do
    {
      v5 = v2 - 3;
      *(_QWORD *)(a1 + 16) = v2 - 3;
      if ( *((char *)v2 - 1) < 0 )
      {
        operator delete(*v5);
        v5 = *(void ***)(a1 + 16);
      }
      v2 = v5;
    }
    while ( v5 != a2 );
  }
}