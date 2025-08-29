__ZN25SandboxExtensionContainer10SetSandboxEPU24objcproto13OS_xpc_object8NSObject
bool __fastcall SandboxExtensionContainer::SetSandbox(SandboxExtensionContainer *this, xpc_object_t xarray)
{
  _QWORD v5[5]; // [xsp+0h] [xbp-80h] BYREF
  _QWORD applier[5]; // [xsp+28h] [xbp-58h] BYREF

  if ( xarray )
  {
    applier[0] = _NSConcreteStackBlock;
    applier[1] = 3221225472LL;
    applier[2] = ___ZN25SandboxExtensionContainer10SetSandboxEPU24objcproto13OS_xpc_object8NSObject_block_invoke;
    applier[3] = &__block_descriptor_40_e36_B24__0Q8__NSObject_OS_xpc_object__16l;
    applier[4] = this;
    if ( !xpc_array_apply(xarray, applier) )
    {
      SandboxExtensionContainer::ResetSandbox(this);
      v5[0] = _NSConcreteStackBlock;
      v5[1] = 3221225472LL;
      v5[2] = ___ZN25SandboxExtensionContainer10SetSandboxEPU24objcproto13OS_xpc_object8NSObject_block_invoke_2;
      v5[3] = &__block_descriptor_40_e36_B24__0Q8__NSObject_OS_xpc_object__16l;
      v5[4] = this;
      return xpc_array_apply(xarray, v5);
    }
  }
  else if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
  {
    SandboxExtensionContainer::ResetSandbox(this);
  }
  return 1LL;
}