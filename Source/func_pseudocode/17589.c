___36-[CGPDFDocumentImpl getIsEncrypted:]_block_invoke
__int64 __fastcall __36__CGPDFDocumentImpl_getIsEncrypted___block_invoke(__int64 a1)
{
  __int64 v1; // x19
  _BOOL8 IsEncrypted; // x1
  __int64 (__fastcall *v3)(__int64, _BOOL8); // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = *(_QWORD *)(a1 + 40);
  IsEncrypted = CGPDFDocumentIsEncrypted(*(CGPDFDocumentRef *)(*(_QWORD *)(a1 + 32) + 24LL));
  v3 = *(__int64 (__fastcall **)(__int64, _BOOL8))(v1 + 16);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v3(v1, IsEncrypted);
}