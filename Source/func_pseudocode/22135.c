____ZN25SandboxExtensionContainer10SetSandboxEPU24objcproto13OS_xpc_object8NSObject_block_invoke_2
__int64 __fastcall ___ZN25SandboxExtensionContainer10SetSandboxEPU24objcproto13OS_xpc_object8NSObject_block_invoke_2(
        __int64 a1,
        int a2,
        xpc_object_t xstring)
{
  SandboxExtensionContainer *v3; // x19
  const char *string_ptr; // x1
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = *(SandboxExtensionContainer **)(a1 + 32);
  string_ptr = xpc_string_get_string_ptr(xstring);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return SandboxExtensionContainer::ExtendSandbox(v3, string_ptr);
}