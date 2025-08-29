-[NSMutableArray tsu_trimObjectsFromIndex:]
void __cdecl -[NSMutableArray tsu_trimObjectsFromIndex:](NSMutableArray *self, SEL a2, unsigned __int64 a3)
{
  char *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = (char *)-[NSMutableArray count](self, "count");
  if ( (unsigned __int64)v5 > a3 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[NSMutableArray removeObjectsInRange:](self, "removeObjectsInRange:", a3, &v5[-a3]);
  }
}