+[TSPDocumentRevision revisionWithSequence:identifier:]
// local variable allocation has failed, the output may be wrong!
id __cdecl +[TSPDocumentRevision revisionWithSequence:identifier:](id a1, SEL a2, int a3, id a4)
{
  __int64 v4; // x20
  id v6; // x19
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(_QWORD *)&a3;
  v6 = objc_retain(a4);
  v7 = objc_msgSend(objc_alloc((Class)a1), "initWithSequence:identifier:", v4, v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}