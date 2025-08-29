__ZNSt3__120__throw_out_of_rangeB8ne180100EPKc
void __fastcall __noreturn std::__throw_out_of_range[abi:ne180100](__int64 a1)
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x10uLL);
  std::out_of_range::out_of_range[abi:ne180100](exception, a1);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::out_of_range,
    (void (__fastcall *)(void *))&std::out_of_range::~out_of_range);
}