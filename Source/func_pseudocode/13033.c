-[NSIndexSet tsu_indexSetByExcludingIndex:]
id __cdecl -[NSIndexSet tsu_indexSetByExcludingIndex:](NSIndexSet *self, SEL a2, unsigned __int64 a3)
{
  NSIndexSet *v4; // x19
  id v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(+[NSIndexSet indexSetWithIndex:](&OBJC_CLASS___NSIndexSet, "indexSetWithIndex:", a3));
  v5 = objc_retainAutoreleasedReturnValue(-[NSIndexSet tsu_indexSetByExcludingIndexes:](self, "tsu_indexSetByExcludingIndexes:", v4));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}