__ZNSt3__16vectorIU8__strongP13CGPDFPageImplNS_9allocatorIS3_EEE16__destroy_vectorclB8ne180100Ev
void __fastcall std::vector<CGPDFPageImpl * {__strong}>::__destroy_vector::operator()[abi:ne180100](void ***a1)
{
  void **v1; // x20
  char *v2; // x21
  char *v4; // x22
  void *v5; // x0
  void *v6; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v1 = *a1;
  v2 = (char *)**a1;
  if ( v2 )
  {
    v4 = (char *)v1[1];
    v5 = **a1;
    if ( v4 != v2 )
    {
      do
      {
        v6 = (void *)*((_QWORD *)v4 - 1);
        v4 -= 8;
        objc_release(v6);
      }
      while ( v4 != v2 );
      v5 = **a1;
    }
    v1[1] = v2;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    operator delete(v5);
  }
}