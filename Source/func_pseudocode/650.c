-[FileSharingListItem removeChild:]
void __cdecl -[FileSharingListItem removeChild:](FileSharingListItem *self, SEL a2, id a3)
{
  id v4; // x21
  NSMutableArray *v5; // x22
  NSMutableArray *v6; // x23
  void *v7; // x20
  NSMutableArray *v8; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  v6 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  v7 = -[NSMutableArray indexOfObject:inSortedRange:options:usingComparator:](
         v5,
         "indexOfObject:inSortedRange:options:usingComparator:",
         v4,
         0LL,
         -[NSMutableArray count](v6, "count"),
         256LL,
         &stru_1000B8C58);
  objc_release(v4);
  objc_release(v6);
  objc_release(v5);
  if ( v7 != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
    -[NSMutableArray removeObjectAtIndex:](v8, "removeObjectAtIndex:", v7);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v8);
  }
}