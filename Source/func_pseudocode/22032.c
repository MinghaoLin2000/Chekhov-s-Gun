__ZNSt3__125__throw_bad_function_callB8ne180100Ev
void __noreturn std::__throw_bad_function_call[abi:ne180100]()
{
  _QWORD *exception; // x0

  exception = __cxa_allocate_exception(8uLL);
  *exception = &`vtable for'std::bad_function_call.~bad_function_call;
  __cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_function_call,
    (void (__fastcall *)(void *))std::bad_function_call::~bad_function_call);
}