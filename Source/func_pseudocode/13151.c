+[TSUWarning warningWithMessage:affectedObjects:]
id __cdecl +[TSUWarning warningWithMessage:affectedObjects:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x19
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "warningWithMessage:", a3));
  if ( objc_msgSend(v6, "count") )
    objc_msgSend(v7, "setAffectedObjects:", v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}