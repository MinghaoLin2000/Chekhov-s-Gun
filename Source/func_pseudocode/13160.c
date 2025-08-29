+[TSUWarning fontWarningWithMessage:fontNames:]
id __cdecl +[TSUWarning fontWarningWithMessage:fontNames:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x22
  void *v8; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_msgSend(objc_alloc((Class)a1), "initWithKind:message:", 1LL, v7);
  objc_release(v7);
  if ( objc_msgSend(v6, "count") )
    objc_msgSend(v8, "setAffectedObjects:", v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}