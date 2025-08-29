+[TSUWarning missingMediaWarningWithMessage:data:]
id __cdecl +[TSUWarning missingMediaWarningWithMessage:data:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x22
  void *v8; // x20
  NSSet *v9; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_msgSend(objc_alloc((Class)a1), "initWithKind:message:", 2LL, v7);
  objc_release(v7);
  if ( v6 )
  {
    v9 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObject:](&OBJC_CLASS___NSSet, "setWithObject:", v6));
    objc_msgSend(v8, "setAffectedObjects:", v9);
    objc_release(v9);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}