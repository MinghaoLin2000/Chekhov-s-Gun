-[NSIndexSet tsu_indexSetByExcludingIndexes:]
id __cdecl -[NSIndexSet tsu_indexSetByExcludingIndexes:](NSIndexSet *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  void *v6; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = -[NSIndexSet mutableCopy](self, "mutableCopy");
  objc_msgSend(v5, "removeIndexes:", v4);
  v6 = objc_msgSend(v5, "copy");
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}