___29-[CGPDFDocumentImpl getInfo:]_block_invoke
void __fastcall __29__CGPDFDocumentImpl_getInfo___block_invoke(__int64 a1)
{
  void *v2; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = (void *)CGPDFDocumentCopyInfoDictionary(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL));
  (*(void (**)(void))(*(_QWORD *)(a1 + 40) + 16LL))();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}