__ZNSt12length_errorC1B8ne180100EPKc
std::logic_error *__fastcall std::length_error::length_error[abi:ne180100](std::logic_error *a1, const char *a2)
{
  std::logic_error *result; // x0

  result = std::logic_error::logic_error(a1, a2);
  result->__vftable = (std::logic_error_vtbl *)&`vtable for'std::length_error.~length_error;
  return result;
}