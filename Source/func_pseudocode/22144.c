__ZNSt3__119__allocate_at_leastB8ne180100INS_9allocatorINS_12basic_stringIcNS_11char_traitsIcEENS1_IcEEEEEEEENS_19__allocation_resultINS_16allocator_traitsIT_E7pointerEEERSA_m
void *__fastcall std::__allocate_at_least[abi:ne180100]<std::allocator<std::string>>(__int64 a1, unsigned __int64 a2)
{
  if ( a2 >= 0xAAAAAAAAAAAAAABLL )
    std::__throw_bad_array_new_length[abi:ne180100]();
  return operator new(24 * a2);
}