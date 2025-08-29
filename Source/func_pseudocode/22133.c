__ZNSt3__16vectorINS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEENS4_IS6_EEE16__destroy_vectorclB8ne180100Ev
void __fastcall std::vector<std::string>::__destroy_vector::operator()[abi:ne180100](void ***a1)
{
  void **v2; // x0
  void *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = *a1;
  if ( *v2 )
  {
    std::vector<std::string>::__clear[abi:ne180100]((__int64 *)v2);
    v3 = **a1;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(v3);
  }
}