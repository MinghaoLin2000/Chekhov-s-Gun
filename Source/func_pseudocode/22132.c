__ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE7__clearB8ne180100Ev
void __fastcall std::vector<std::string>::__clear[abi:ne180100](__int64 *a1)
{
  __int64 v2; // x20
  __int64 i; // x21

  v2 = *a1;
  for ( i = a1[1]; i != v2; i -= 24LL )
  {
    if ( *(char *)(i - 1) < 0 )
      operator delete(*(void **)(i - 24));
  }
  a1[1] = v2;
}