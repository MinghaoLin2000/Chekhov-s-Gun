-[NSArray tsu_rangeCheckedObjectAtIndex:]
id __cdecl -[NSArray tsu_rangeCheckedObjectAtIndex:](NSArray *self, SEL a2, unsigned __int64 a3)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[NSArray count](self, "count") <= a3 )
    return 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[NSArray objectAtIndex:](self, "objectAtIndex:", a3);
}