__ZSt28__throw_bad_array_new_lengthB8ne180100v
void __noreturn std::__throw_bad_array_new_length[abi:ne180100]()
{
  std::bad_array_new_length *exception; // x0
  std::bad_array_new_length *v1; // x0

  exception = (std::bad_array_new_length *)__cxa_allocate_exception(8uLL);
  v1 = std::bad_array_new_length::bad_array_new_length(exception);
  __cxa_throw(
    v1,
    (struct type_info *)&`typeinfo for'std::bad_array_new_length,
    (void (__fastcall *)(void *))&std::bad_array_new_length::~bad_array_new_length);
}