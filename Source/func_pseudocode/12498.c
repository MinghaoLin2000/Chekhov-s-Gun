-[NSPointerArray tsu_removeRange:]
void __cdecl -[NSPointerArray tsu_removeRange:](NSPointerArray *self, SEL a2, _NSRange a3)
{
  NSUInteger length; // x21
  char *location; // x20
  NSUInteger v6; // x0
  NSUInteger v7; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  length = a3.length;
  location = (char *)a3.location;
  if ( a3.location < -[NSPointerArray count](self, "count") )
  {
    if ( &location[length] < (char *)-[NSPointerArray count](self, "count") )
    {
      v6 = -[NSPointerArray count](self, "count");
      if ( (unsigned __int64)&location[length] < v6 )
      {
        v7 = v6;
        do
        {
          -[NSPointerArray replacePointerAtIndex:withPointer:](
            self,
            "replacePointerAtIndex:withPointer:",
            location,
            -[NSPointerArray pointerAtIndex:](self, "pointerAtIndex:", &location[length]));
          ++location;
        }
        while ( (unsigned __int64)&location[length] < v7 );
      }
      location = (char *)-[NSPointerArray count](self, "count") - length;
    }
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[NSPointerArray setCount:](self, "setCount:", location);
  }
}