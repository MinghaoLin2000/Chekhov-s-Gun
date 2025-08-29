-[NSArray tsu_indexOfSmallestObject]
unsigned __int64 __cdecl -[NSArray tsu_indexOfSmallestObject](NSArray *self, SEL a2)
{
  NSUInteger v3; // x0
  NSUInteger v4; // x21
  unsigned __int64 v5; // x22
  id v6; // x23
  unsigned __int64 v7; // x20
  id v8; // x0
  id v9; // x24

  v3 = -[NSArray count](self, "count");
  if ( !v3 )
    return 0x7FFFFFFFFFFFFFFFLL;
  v4 = v3;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  do
  {
    v8 = -[NSArray objectAtIndex:](self, "objectAtIndex:", v5);
    v9 = v8;
    if ( !v6 || objc_msgSend(v8, "compare:", v6) == (void *)-1LL )
    {
      v7 = v5;
      v6 = v9;
    }
    ++v5;
  }
  while ( v4 != v5 );
  return v7;
}