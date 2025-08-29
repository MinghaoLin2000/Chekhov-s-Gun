-[NSPointerArray tsu_insertRange:]
void __cdecl -[NSPointerArray tsu_insertRange:](NSPointerArray *self, SEL a2, _NSRange a3)
{
  NSUInteger length; // x21
  signed __int64 location; // x20
  signed __int64 v6; // x22
  signed __int64 i; // x23
  signed __int64 v8; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  length = a3.length;
  location = a3.location;
  if ( a3.location >= -[NSPointerArray count](self, "count") )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[NSPointerArray setCount:](self, "setCount:", location + length);
  }
  else
  {
    v6 = -[NSPointerArray count](self, "count");
    -[NSPointerArray setCount:](self, "setCount:", (char *)-[NSPointerArray count](self, "count") + length);
    for ( i = v6 - 1; i >= location; --i )
      -[NSPointerArray replacePointerAtIndex:withPointer:](
        self,
        "replacePointerAtIndex:withPointer:",
        length + i,
        -[NSPointerArray pointerAtIndex:](self, "pointerAtIndex:", i));
    if ( (__int64)(location + length) >= v6 )
      v8 = v6;
    else
      v8 = location + length;
    if ( location < v8 )
    {
      do
        -[NSPointerArray replacePointerAtIndex:withPointer:](
          self,
          "replacePointerAtIndex:withPointer:",
          location++,
          0LL);
      while ( v8 != location );
    }
  }
}