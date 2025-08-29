-[NSString tsu_isDescendantOfPath:]
bool __cdecl -[NSString tsu_isDescendantOfPath:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  NSArray *v5; // x20
  void *v6; // x21
  char *v7; // x22
  char *v8; // x24
  void *v9; // x25
  unsigned int v10; // w26
  char *v11; // x0
  unsigned __int8 v12; // w23
  __int64 v13; // x24
  unsigned int v14; // w26
  id v15; // x25
  void *v16; // x24

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString pathComponents](self, "pathComponents"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "pathComponents"));
  v7 = (char *)objc_msgSend(v6, "count");
  if ( v7 )
  {
    do
    {
      v8 = v7 - 1;
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", v7 - 1));
      v10 = (unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("/"));
      objc_release(v9);
      if ( !v10 )
        break;
      --v7;
    }
    while ( v8 );
  }
  v11 = -[NSArray count](v5, "count");
  v12 = v7 <= v11;
  if ( v7 - 1 < v11 )
  {
    v13 = 0LL;
    v14 = 1;
    do
    {
      v15 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v5, "objectAtIndexedSubscript:", v13));
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", v13));
      v12 = (unsigned __int8)objc_msgSend(v15, "isEqualToString:", v16);
      objc_release(v16);
      objc_release(v15);
      if ( (unsigned __int64)v7 <= v14 )
        break;
      v13 = v14++;
    }
    while ( (v12 & 1) != 0 );
  }
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  return v12;
}