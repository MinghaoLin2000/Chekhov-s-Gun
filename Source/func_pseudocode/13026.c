-[NSIndexSet tsu_indexSetByAddingIndex:]
id __cdecl -[NSIndexSet tsu_indexSetByAddingIndex:](NSIndexSet *self, SEL a2, unsigned __int64 a3)
{
  void *v4; // x19
  void *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = -[NSIndexSet mutableCopy](self, "mutableCopy");
  objc_msgSend(v4, "addIndex:", a3);
  v5 = objc_msgSend(v4, "copy");
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}