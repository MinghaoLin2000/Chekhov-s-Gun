-[NSString tsu_isChildOfPath:]
bool __cdecl -[NSString tsu_isChildOfPath:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  NSArray *v5; // x21
  void *v6; // x20
  void *v7; // x22
  void *v8; // x21
  void *v9; // x23
  unsigned int v10; // w24
  void *v11; // x23
  unsigned int v12; // w24
  char *v13; // x25
  char *v14; // x24
  unsigned __int8 v15; // w23
  void *v16; // x0
  unsigned __int64 v17; // x22
  __int64 v18; // x24
  unsigned int v19; // w26
  void *v20; // x25
  void *v21; // x24

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString pathComponents](self, "pathComponents"));
  v6 = -[NSArray mutableCopy](v5, "mutableCopy");
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "pathComponents"));
  v8 = objc_msgSend(v7, "mutableCopy");
  objc_release(v7);
  if ( (unsigned __int64)objc_msgSend(v6, "count") >= 2 )
  {
    do
    {
      v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "lastObject"));
      v10 = (unsigned int)objc_msgSend(v9, "isEqualToString:", CFSTR("/"));
      objc_release(v9);
      if ( !v10 )
        break;
      objc_msgSend(v6, "removeObjectAtIndex:", (char *)objc_msgSend(v6, "count") - 1);
    }
    while ( (unsigned __int64)objc_msgSend(v6, "count") > 1 );
  }
  if ( (unsigned __int64)objc_msgSend(v8, "count") >= 2 )
  {
    do
    {
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "lastObject"));
      v12 = (unsigned int)objc_msgSend(v11, "isEqualToString:", CFSTR("/"));
      objc_release(v11);
      if ( !v12 )
        break;
      objc_msgSend(v8, "removeObjectAtIndex:", (char *)objc_msgSend(v8, "count") - 1);
    }
    while ( (unsigned __int64)objc_msgSend(v8, "count") > 1 );
  }
  v13 = (char *)objc_msgSend(v8, "count") + 1;
  v14 = (char *)objc_msgSend(v6, "count");
  v15 = v13 == v14;
  v16 = objc_msgSend(v8, "count");
  if ( v16 && v13 == v14 )
  {
    v17 = (unsigned __int64)v16;
    v18 = 0LL;
    v19 = 1;
    do
    {
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", v18));
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectAtIndexedSubscript:", v18));
      v15 = (unsigned __int8)objc_msgSend(v20, "isEqualToString:", v21);
      objc_release(v21);
      objc_release(v20);
      if ( v17 <= v19 )
        break;
      v18 = v19++;
    }
    while ( (v15 & 1) != 0 );
  }
  objc_release(v8);
  objc_release(v6);
  objc_release(v4);
  return v15;
}