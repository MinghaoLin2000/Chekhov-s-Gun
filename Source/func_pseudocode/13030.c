-[NSIndexSet tsu_indexSetByInsertingIndexes:inRange:]
id __cdecl -[NSIndexSet tsu_indexSetByInsertingIndexes:inRange:](NSIndexSet *self, SEL a2, id a3, _NSRange a4)
{
  NSUInteger length; // x22
  NSUInteger location; // x21
  id v7; // x19
  void *v8; // x20
  void *v9; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  length = a4.length;
  location = a4.location;
  v7 = objc_retain(a3);
  if ( v7 && length )
  {
    v8 = -[NSIndexSet mutableCopy](self, "mutableCopy");
    objc_msgSend(v8, "shiftIndexesStartingAtIndex:by:", location, length);
    v9 = objc_msgSend(v7, "mutableCopy");
    objc_msgSend(v9, "shiftIndexesStartingAtIndex:by:", 0LL, location);
    objc_msgSend(v8, "addIndexes:", v9);
    objc_release(v9);
  }
  else
  {
    v8 = -[NSIndexSet copy](self, "copy");
  }
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}