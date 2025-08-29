__ZNSt3__16vectorIU8__strongP13CGPDFPageImplNS_9allocatorIS3_EEE6resizeEmRU8__strongKS2_
void __fastcall std::vector<CGPDFPageImpl * {__strong}>::resize(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // x20
  unsigned __int64 v4; // x9
  __int64 v5; // x21
  void *v6; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = a1[1];
  v4 = (v3 - *a1) >> 3;
  if ( a2 <= v4 )
  {
    if ( a2 < v4 )
    {
      v5 = *a1 + 8 * a2;
      while ( v3 != v5 )
      {
        v6 = *(void **)(v3 - 8);
        v3 -= 8LL;
        objc_release(v6);
      }
      a1[1] = v5;
    }
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    std::vector<CGPDFPageImpl * {__strong}>::__append();
  }
}