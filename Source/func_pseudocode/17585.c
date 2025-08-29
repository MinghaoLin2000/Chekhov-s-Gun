___32-[CGPDFDocumentImpl getVersion:]_block_invoke
__int64 __fastcall __32__CGPDFDocumentImpl_getVersion___block_invoke(__int64 a1)
{
  int minorVersion[2]; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)minorVersion = 0LL;
  CGPDFDocumentGetVersion(*(CGPDFDocumentRef *)(*(_QWORD *)(a1 + 32) + 24LL), &minorVersion[1], minorVersion);
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 40) + 16LL))();
}