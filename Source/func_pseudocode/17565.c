___29-[CGPDFPageImpl getPageText:]_block_invoke
void __fastcall __29__CGPDFPageImpl_getPageText___block_invoke(__int64 a1)
{
  __int64 v1; // x20
  void *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (void *)CGPDFPageCopyString(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
  (*(void (__fastcall **)(__int64, void *))(v1 + 16))(v1, v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}