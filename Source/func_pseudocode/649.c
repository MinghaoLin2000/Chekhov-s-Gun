-[FileSharingListItem addChild:]
void __cdecl -[FileSharingListItem addChild:](FileSharingListItem *self, SEL a2, id a3)
{
  id v4; // x19
  NSMutableArray *v5; // x22
  NSMutableArray *v6; // x23
  void *v7; // x21
  NSMutableArray *v8; // x22
  NSMutableArray *v9; // x23
  void *v10; // x24
  void *v11; // x25
  NSMutableArray *v12; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  v6 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  v7 = -[NSMutableArray indexOfObject:inSortedRange:options:usingComparator:](
         v5,
         "indexOfObject:inSortedRange:options:usingComparator:",
         v4,
         0LL,
         -[NSMutableArray count](v6, "count"),
         1024LL,
         &stru_1000B8C38);
  objc_release(v6);
  objc_release(v5);
  v8 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  if ( v7 >= -[NSMutableArray count](v8, "count") )
  {
    objc_release(v8);
  }
  else
  {
    v9 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
    v10 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectAtIndex:](v9, "objectAtIndex:", v7));
    v11 = objc_msgSend(v4, "compareNames:", v10);
    objc_release(v10);
    objc_release(v9);
    objc_release(v8);
    if ( !v11 )
    {
      v12 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
      -[NSMutableArray replaceObjectAtIndex:withObject:](v12, "replaceObjectAtIndex:withObject:", v7, v4);
      goto LABEL_6;
    }
  }
  v12 = objc_retainAutoreleasedReturnValue(-[FileSharingListItem children](self, "children"));
  -[NSMutableArray insertObject:atIndex:](v12, "insertObject:atIndex:", v4, v7);
LABEL_6:
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}