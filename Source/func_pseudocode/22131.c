__ZN25SandboxExtensionContainer12ResetSandboxEv
__int64 __fastcall SandboxExtensionContainer::ResetSandbox(SandboxExtensionContainer *this)
{
  __int64 *v2; // x20
  __int64 *v3; // x21
  __int64 v4; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = (__int64 *)*((_QWORD *)this + 3);
  v3 = (__int64 *)*((_QWORD *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *v2++;
      sandbox_extension_release(v4);
    }
    while ( v2 != v3 );
    v2 = (__int64 *)*((_QWORD *)this + 3);
  }
  *((_QWORD *)this + 4) = v2;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return std::vector<std::string>::__clear[abi:ne180100](this);
}