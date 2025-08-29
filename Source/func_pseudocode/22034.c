__ZNSt3__117bad_function_callD0Ev
void __cdecl std::bad_function_call::~bad_function_call(std::bad_function_call *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  std::exception::~exception(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x81C40B8603338LL);
}