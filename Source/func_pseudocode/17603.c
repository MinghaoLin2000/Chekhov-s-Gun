__ZNSt3__114__split_bufferIU8__strongP13CGPDFPageImplRNS_9allocatorIS3_EEED2Ev
__int64 __fastcall std::__split_buffer<CGPDFPageImpl * {__strong}>::~__split_buffer(__int64 a1)
{
  __int64 i; // x8
  __int64 v3; // x20

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = *(_QWORD *)(a1 + 16); i != v3; i = *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 16) = i - 8;
    objc_release(*(id *)(i - 8));
  }
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}