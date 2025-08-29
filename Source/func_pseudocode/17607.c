___49-[CGPDFService newPDFDocumentWithData:withReply:]_block_invoke
void __fastcall __49__CGPDFService_newPDFDocumentWithData_withReply___block_invoke(_QWORD *a1)
{
  CGPDFDocumentImpl *v2; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = -[CGPDFDocumentImpl initWithData:requestQueue:](
         objc_alloc(&OBJC_CLASS___CGPDFDocumentImpl),
         "initWithData:requestQueue:",
         a1[4],
         *(_QWORD *)(a1[5] + 8LL));
  (*(void (**)(void))(a1[6] + 16LL))();
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}