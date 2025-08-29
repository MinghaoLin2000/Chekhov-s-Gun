____ZN25SandboxExtensionContainer10SetSandboxEPU24objcproto13OS_xpc_object8NSObject_block_invoke
bool __fastcall ___ZN25SandboxExtensionContainer10SetSandboxEPU24objcproto13OS_xpc_object8NSObject_block_invoke(
        __int64 a1,
        unsigned __int64 a2,
        xpc_object_t xstring)
{
  _QWORD *v4; // x21
  const char *string_ptr; // x0
  const char *v6; // x19
  _QWORD *v7; // x20
  size_t v8; // x0

  v4 = *(_QWORD **)(a1 + 32);
  string_ptr = xpc_string_get_string_ptr(xstring);
  if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4[1] - *v4) >> 3) > a2 )
  {
    v6 = string_ptr;
    v7 = (_QWORD *)(*v4 + 24 * a2);
    v8 = strlen(string_ptr);
    if ( *((char *)v7 + 23) < 0 )
    {
      if ( v8 == v7[1] )
      {
        if ( v8 == -1LL )
          goto LABEL_11;
        v7 = (_QWORD *)*v7;
        return memcmp(v7, v6, v8) == 0;
      }
    }
    else if ( v8 == *((unsigned __int8 *)v7 + 23) )
    {
      if ( v8 == -1LL )
LABEL_11:
        std::string::__throw_out_of_range[abi:ne180100](v7);
      return memcmp(v7, v6, v8) == 0;
    }
  }
  return 0LL;
}