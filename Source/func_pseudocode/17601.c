__ZNSt3__119__allocate_at_leastB8ne180100INS_9allocatorIU8__strongP13CGPDFPageImplEEEENS_19__allocation_resultINS_16allocator_traitsIT_E7pointerEEERS8_m
void *__fastcall std::__allocate_at_least[abi:ne180100]<std::allocator<CGPDFPageImpl * {__strong}>>(
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 >> 61 )
    std::__throw_bad_array_new_length[abi:ne180100]();
  return operator new(8 * a2);
}