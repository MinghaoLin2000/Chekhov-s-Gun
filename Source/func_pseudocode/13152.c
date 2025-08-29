+[TSUWarning warningWithKind:message:]
id __cdecl +[TSUWarning warningWithKind:message:](id a1, SEL a2, signed __int64 a3, id a4)
{
  id v6; // x21
  void *v7; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_msgSend(objc_alloc((Class)a1), "initWithKind:message:", a3, v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}