-[NSArray tsu_arrayByAddingNonContainedObjectsFromArray:]
id __cdecl -[NSArray tsu_arrayByAddingNonContainedObjectsFromArray:](NSArray *self, SEL a2, id a3)
{
  char *v5; // x0
  char *v6; // x21
  __int64 v7; // x22
  NSMutableArray *v8; // x23
  void *v9; // x24

  if ( a3 && (v5 = (char *)objc_msgSend(a3, "count")) != 0LL )
  {
    v6 = v5;
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      v9 = objc_msgSend(a3, "objectAtIndex:", v7);
      if ( !-[NSArray containsObject:](self, "containsObject:", v9) )
      {
        if ( !v8 )
        {
          v8 = +[NSMutableArray arrayWithCapacity:](
                 &OBJC_CLASS___NSMutableArray,
                 "arrayWithCapacity:",
                 &v6[-[NSArray count](self, "count")]);
          -[NSMutableArray addObjectsFromArray:](v8, "addObjectsFromArray:", self);
        }
        -[NSMutableArray addObject:](v8, "addObject:", v9);
      }
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
    return v8;
  else
    return self;
}