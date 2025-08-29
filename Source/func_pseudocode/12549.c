-[NSArray tsu_objectPriorToObject:]
id __cdecl -[NSArray tsu_objectPriorToObject:](NSArray *self, SEL a2, id a3)
{
  NSUInteger v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = -[NSArray indexOfObject:](self, "indexOfObject:", a3);
  if ( !v4 || v4 == 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSArray objectAtIndex:](self, "objectAtIndex:", v4 - 1);
}