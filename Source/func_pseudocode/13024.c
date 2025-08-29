+[NSIndexSet tsu_indexSetWithIndices:count:]
id __cdecl +[NSIndexSet tsu_indexSetWithIndices:count:](id a1, SEL a2, unsigned __int64 *a3, unsigned __int64 a4)
{
  void *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSIndexSet), "tsu_initWithIndices:count:", a3, a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}