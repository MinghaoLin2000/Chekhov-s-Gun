+[NSString tsu_unRedactedStringWithFormat:arguments:]
id __cdecl +[NSString tsu_unRedactedStringWithFormat:arguments:](id a1, SEL a2, id a3, char *a4)
{
  id v5; // x21
  void *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "tsu_initUnRedactedWithFormat:arguments:", v5, a4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}