__ZNSt3__120__throw_length_errorB8ne180100EPKc
void __fastcall __noreturn std::__throw_length_error[abi:ne180100](__int64 a1)
{
  void *exception; // x19

  exception = __cxa_allocate_exception(0x10uLL);
  std::length_error::length_error[abi:ne180100](exception, a1);
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (__fastcall *)(void *))&std::length_error::~length_error);
}