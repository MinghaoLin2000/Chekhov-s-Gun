-[NSMutableIndexSet tsu_moveIndexesInRange:toOffset:]
void __cdecl -[NSMutableIndexSet tsu_moveIndexesInRange:toOffset:](
        NSMutableIndexSet *self,
        SEL a2,
        _NSRange a3,
        unsigned __int64 a4)
{
  NSUInteger length; // x20
  NSUInteger location; // x23
  unsigned __int64 v8; // x22
  NSUInteger v9; // x8
  unsigned __int64 v10; // x24
  id v11; // x21
  void **v12; // [xsp+0h] [xbp-70h] BYREF
  __int64 v13; // [xsp+8h] [xbp-68h]
  __int64 (__fastcall *v14)(); // [xsp+10h] [xbp-60h]
  void *v15; // [xsp+18h] [xbp-58h]
  id v16; // [xsp+20h] [xbp-50h]
  NSUInteger v17; // [xsp+28h] [xbp-48h]
  NSUInteger v18; // [xsp+30h] [xbp-40h]
  unsigned __int64 v19; // [xsp+38h] [xbp-38h]

  length = a3.length;
  location = a3.location;
  if ( a4 < a3.location || a4 - a3.location >= a3.length )
  {
    v8 = a3.location + a3.length;
    if ( a3.location + a3.length != a4
      && -[NSMutableIndexSet firstIndex](self, "firstIndex") != (void *)0x7FFFFFFFFFFFFFFFLL )
    {
      if ( v8 >= a4 )
        v9 = 0LL;
      else
        v9 = length;
      v10 = a4 - v9;
      v12 = _NSConcreteStackBlock;
      v13 = 3254779904LL;
      v14 = sub_1001463B4;
      v15 = &unk_1001DE2C8;
      v11 = objc_retain(objc_alloc_init((Class)&OBJC_CLASS___NSMutableIndexSet));
      v16 = v11;
      v17 = location;
      v18 = length;
      v19 = v10;
      -[NSMutableIndexSet enumerateRangesInRange:options:usingBlock:](
        self,
        "enumerateRangesInRange:options:usingBlock:",
        location,
        length,
        0LL,
        &v12);
      -[NSMutableIndexSet shiftIndexesStartingAtIndex:by:](
        self,
        "shiftIndexesStartingAtIndex:by:",
        location + length,
        -(__int64)length,
        v12,
        v13,
        v14,
        v15);
      -[NSMutableIndexSet shiftIndexesStartingAtIndex:by:](self, "shiftIndexesStartingAtIndex:by:", v10, length);
      -[NSMutableIndexSet addIndexes:](self, "addIndexes:", v11);
      objc_release(v16);
      objc_release(v11);
    }
  }
}