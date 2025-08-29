___47-[CGPDFDocumentImpl getPageAtIndex:completion:]_block_invoke
void __fastcall __47__CGPDFDocumentImpl_getPageAtIndex_completion___block_invoke(__int64 a1)
{
  __int64 v1; // x20
  void *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(a1 + 32), "getPageAtIndex:", *(_QWORD *)(a1 + 48)));
  (*(void (__fastcall **)(__int64, void *))(v1 + 16))(v1, v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}