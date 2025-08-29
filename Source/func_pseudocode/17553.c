___29-[CGPDFPageImpl getRotation:]_block_invoke
__int64 __fastcall __29__CGPDFPageImpl_getRotation___block_invoke(__int64 a1)
{
  __int64 v1; // x19
  void *v2; // x1
  __int64 (__fastcall *v3)(__int64, void *); // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = objc_msgSend(*(id *)(a1 + 32), "rotation");
  v3 = *(__int64 (__fastcall **)(__int64, void *))(v1 + 16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v3(v1, v2);
}