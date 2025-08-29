-[NSMutableIndexSet tsu_intersectionWithIndexSet:]
void __cdecl -[NSMutableIndexSet tsu_intersectionWithIndexSet:](NSMutableIndexSet *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( -[NSMutableIndexSet count](self, "count") )
  {
    v5 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMutableIndexSet),
           "initWithIndexesInRange:",
           -[NSMutableIndexSet firstIndex](self, "firstIndex"),
           (_BYTE *)-[NSMutableIndexSet lastIndex](self, "lastIndex")
         - (_BYTE *)-[NSMutableIndexSet firstIndex](self, "firstIndex")
         + 1);
    objc_msgSend(v5, "removeIndexes:", v4);
    -[NSMutableIndexSet removeIndexes:](self, "removeIndexes:", v5);
    objc_release(v5);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}