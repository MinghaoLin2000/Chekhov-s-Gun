-[NSMutableArray tsu_insertObject:usingComparator:]
unsigned __int64 __cdecl -[NSMutableArray tsu_insertObject:usingComparator:](
        NSMutableArray *self,
        SEL a2,
        id a3,
        id a4)
{
  void *v6; // x19

  v6 = -[NSMutableArray indexOfObject:inSortedRange:options:usingComparator:](
         self,
         "indexOfObject:inSortedRange:options:usingComparator:",
         a3,
         0LL,
         -[NSMutableArray count](self, "count"),
         1024LL,
         a4);
  -[NSMutableArray insertObject:atIndex:](self, "insertObject:atIndex:", a3, v6);
  return (unsigned __int64)v6;
}