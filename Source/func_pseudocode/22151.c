__ZN16MTLConnectionCtxC2EiRKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
__int64 __fastcall MTLConnectionCtx::MTLConnectionCtx(__int64 a1, int a2, __int64 a3)
{
  CompilerPluginInterface *v6; // x21

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = a2;
  v6 = (CompilerPluginInterface *)operator new(48LL, 0x1080C407D05813FLL);
  CompilerPluginInterface::CompilerPluginInterface(v6, a2);
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = (*((__int64 (__fastcall **)(__int64))v6 + 1))(a3);
  return a1;
}