___39-[CGPDFPageImpl getBoxRect:completion:]_block_invoke
__int64 __fastcall __39__CGPDFPageImpl_getBoxRect_completion___block_invoke(__int64 a1)
{
  __int64 v1; // x19
  __int64 (__fastcall *v2)(__int64); // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = *(_QWORD *)(a1 + 40);
  objc_msgSend(*(id *)(a1 + 32), "rectForBox:", *(unsigned int *)(a1 + 48));
  v2 = *(__int64 (__fastcall **)(__int64))(v1 + 16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v2(v1);
}