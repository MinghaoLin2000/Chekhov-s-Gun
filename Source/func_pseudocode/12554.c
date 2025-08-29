-[NSArray tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:]
id __cdecl -[NSArray tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:](NSArray *self, SEL a2, id a3)
{
  char *v5; // x0
  char *v6; // x21
  char *v7; // x22
  NSMutableArray *v8; // x24
  NSMutableArray *v9; // x23
  void *v10; // x25
  void *v11; // x0
  void *i; // x26

  v5 = (char *)objc_msgSend(a3, "count");
  if ( !v5 )
    return self;
  v6 = v5;
  v7 = 0LL;
  v8 = 0LL;
  v9 = (NSMutableArray *)self;
  do
  {
    v10 = objc_msgSend(a3, "objectAtIndex:", v7);
    v11 = -[NSMutableArray indexOfObjectIdenticalTo:](v9, "indexOfObjectIdenticalTo:", v10);
    if ( v11 != (void *)0x7FFFFFFFFFFFFFFFLL )
    {
      for ( i = v11;
            i != (void *)0x7FFFFFFFFFFFFFFFLL;
            i = -[NSMutableArray indexOfObjectIdenticalTo:](v9, "indexOfObjectIdenticalTo:", v10) )
      {
        if ( !v8 )
        {
          v9 = +[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", self);
          v8 = v9;
        }
        -[NSMutableArray removeObjectAtIndex:](v8, "removeObjectAtIndex:", i);
      }
    }
    ++v7;
  }
  while ( v7 != v6 );
  return v9;
}