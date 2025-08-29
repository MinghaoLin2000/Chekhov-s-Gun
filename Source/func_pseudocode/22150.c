____ZL3ctxiRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE_block_invoke
__int64 __fastcall ___ZL3ctxiRKNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE_block_invoke(__int64 a1)
{
  __int64 v2; // x19
  __int64 result; // x0

  v2 = operator new(24LL, 0x10A0C4036B0EFECLL);
  result = MTLConnectionCtx::MTLConnectionCtx(v2, *(unsigned int *)(a1 + 40), *(_QWORD *)(a1 + 32));
  ctx(int,std::string const&)::context = v2;
  return result;
}