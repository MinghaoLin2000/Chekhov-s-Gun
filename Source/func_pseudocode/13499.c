-[NSString tsu_stringWithPathRelativeTo:]
id __cdecl -[NSString tsu_stringWithPathRelativeTo:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  NSString *v6; // x22
  NSArray *v7; // x21
  void *v8; // x23
  void *v9; // x22
  char *v10; // x24
  char *v11; // x0
  unsigned __int64 v12; // x23
  __int64 v13; // x25
  unsigned int v14; // w20
  void *v15; // x26
  id v16; // x27
  unsigned __int8 v17; // w28
  __CFString *v19; // x23
  NSArray *v21; // x24
  void *v22; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( v4 )
  {
    v5 = objc_autoreleasePoolPush();
    v6 = objc_retainAutoreleasedReturnValue(-[NSString stringByStandardizingPath](self, "stringByStandardizingPath"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSString pathComponents](v6, "pathComponents"));
    objc_release(v6);
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByStandardizingPath"));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "pathComponents"));
    objc_release(v8);
    v10 = -[NSArray count](v7, "count");
    v11 = (char *)objc_msgSend(v9, "count");
    if ( v10 < v11 )
      goto LABEL_10;
    v12 = (unsigned __int64)v11;
    if ( !v11 )
      goto LABEL_8;
    v22 = v5;
    v13 = 0LL;
    v14 = 1;
    do
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "objectAtIndexedSubscript:", v13));
      v16 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v7, "objectAtIndexedSubscript:", v13));
      v17 = (unsigned __int8)objc_msgSend(v15, "isEqualToString:", v16);
      objc_release(v16);
      objc_release(v15);
      if ( (v17 & 1) == 0 )
        break;
      v13 = v14;
    }
    while ( v12 > v14++ );
    v5 = v22;
    if ( v12 != v13 )
    {
LABEL_10:
      v19 = 0LL;
    }
    else
    {
LABEL_8:
      if ( v10 == (char *)v12 )
      {
        v19 = &stru_1001DFAA0;
      }
      else
      {
        v21 = objc_retainAutoreleasedReturnValue(-[NSArray subarrayWithRange:](v7, "subarrayWithRange:", v12, &v10[-v12]));
        v19 = objc_retainAutoreleasedReturnValue(+[NSString pathWithComponents:](&OBJC_CLASS___NSString, "pathWithComponents:", v21));
        objc_release(v21);
      }
    }
    objc_release(v9);
    objc_release(v7);
    objc_autoreleasePoolPop(v5);
  }
  else
  {
    v19 = 0LL;
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}