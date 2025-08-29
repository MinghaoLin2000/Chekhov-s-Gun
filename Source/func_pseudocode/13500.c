-[NSString tsu_stringWithPathRelativeTo:allowBacktracking:]
id __cdecl -[NSString tsu_stringWithPathRelativeTo:allowBacktracking:](NSString *self, SEL a2, id a3, bool a4)
{
  id v6; // x19
  NSString *v7; // x21
  NSArray *v8; // x20
  void *v9; // x22
  void *v10; // x21
  char *v11; // x22
  char *v12; // x0
  char *v13; // x24
  unsigned __int64 v14; // x28
  __int64 v15; // x25
  char *v16; // x23
  void *v17; // x26
  id v18; // x25
  unsigned int v19; // w27
  __CFString *v20; // x25
  signed __int64 v21; // x27
  __CFString *v22; // x26
  __CFString *v23; // x24
  id v24; // x26
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v6 = objc_retain(a3);
  if ( a4 )
  {
    v7 = objc_retainAutoreleasedReturnValue(-[NSString stringByStandardizingPath](self, "stringByStandardizingPath"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSString pathComponents](v7, "pathComponents"));
    objc_release(v7);
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "stringByStandardizingPath"));
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "pathComponents"));
    objc_release(v9);
    v11 = -[NSArray count](v8, "count");
    v12 = (char *)objc_msgSend(v10, "count");
    v13 = v12;
    if ( v12 >= v11 )
      v14 = (unsigned __int64)v11;
    else
      v14 = (unsigned __int64)v12;
    if ( v14 )
    {
      v15 = 0LL;
      v16 = 0LL;
      do
      {
        v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectAtIndexedSubscript:", v15));
        v18 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", v15));
        v19 = (unsigned int)objc_msgSend(v17, "isEqualToString:", v18);
        objc_release(v18);
        objc_release(v17);
        if ( !v19 )
          break;
        v15 = (unsigned int)++v16;
      }
      while ( v14 > (unsigned int)v16 );
    }
    else
    {
      v16 = 0LL;
    }
    v21 = v13 - v16;
    if ( v13 <= v16 )
    {
      v23 = &stru_1001DFAA0;
    }
    else
    {
      v22 = &stru_1001DFAA0;
      do
      {
        v23 = objc_retainAutoreleasedReturnValue(-[__CFString stringByAppendingPathComponent:](v22, "stringByAppendingPathComponent:", CFSTR("..")));
        objc_release(v22);
        v22 = v23;
        --v21;
      }
      while ( v21 );
    }
    if ( v16 >= v11 )
    {
      v20 = v23;
    }
    else
    {
      do
      {
        v24 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", v16));
        v20 = objc_retainAutoreleasedReturnValue(-[__CFString stringByAppendingPathComponent:](v23, "stringByAppendingPathComponent:", v24));
        objc_release(v23);
        objc_release(v24);
        ++v16;
        v23 = v20;
      }
      while ( v11 != v16 );
    }
    objc_release(v10);
    objc_release(v8);
  }
  else
  {
    v20 = (__CFString *)objc_retainAutoreleasedReturnValue(-[NSString tsu_stringWithPathRelativeTo:](self, "tsu_stringWithPathRelativeTo:", v6));
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v20);
}