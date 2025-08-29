+[TSPDocumentProperties shareIdentifierRelativePath]
id __cdecl +[TSPDocumentProperties shareIdentifierRelativePath](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_1001F74A8 != -1 )
    dispatch_once(&qword_1001F74A8, &stru_1001D35C8);
  v2 = (void *)qword_1001F74A0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}