+[TSUWarning warningWithMessage:affectedObject:]
id __cdecl +[TSUWarning warningWithMessage:affectedObject:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( a4 )
    a4 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObject:](&OBJC_CLASS___NSSet, "setWithObject:", a4));
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "warningWithMessage:affectedObjects:", v6, a4));
  objc_release(a4);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}