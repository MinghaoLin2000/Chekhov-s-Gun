-[NSURL tsp_queryDictionary]
id __cdecl -[NSURL tsp_queryDictionary](NSURL *self, SEL a2)
{
  NSString *v2; // x20
  NSArray *v3; // x19
  void *v4; // x20
  NSArray *v5; // x21
  void *v6; // x0
  void *v7; // x23
  __int64 v8; // x28
  void *i; // x19
  void *v10; // x24
  void *v11; // x25
  void *v12; // x26
  void *v13; // x26
  void *v14; // x27
  NSArray *v16; // [xsp+8h] [xbp-128h]
  __int128 v17; // [xsp+10h] [xbp-120h] BYREF
  __int128 v18; // [xsp+20h] [xbp-110h]
  __int128 v19; // [xsp+30h] [xbp-100h]
  __int128 v20; // [xsp+40h] [xbp-F0h]
  _BYTE v21[128]; // [xsp+50h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+138h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[NSURL query](self, "query"));
  v3 = objc_retainAutoreleasedReturnValue(-[NSString componentsSeparatedByString:](v2, "componentsSeparatedByString:", CFSTR("&")));
  objc_release(v2);
  v4 = -[NSArray count](v3, "count");
  if ( v4 )
  {
    v4 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", v4);
    v17 = 0u;
    v18 = 0u;
    v19 = 0u;
    v20 = 0u;
    v16 = v3;
    v5 = objc_retain(v3);
    v6 = -[NSArray countByEnumeratingWithState:objects:count:](
           v5,
           "countByEnumeratingWithState:objects:count:",
           &v17,
           v21,
           16LL);
    if ( v6 )
    {
      v7 = v6;
      v8 = *(_QWORD *)v18;
      do
      {
        for ( i = 0LL; i != v7; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v18 != v8 )
            objc_enumerationMutation(v5);
          v10 = objc_retainAutoreleasedReturnValue(
                  objc_msgSend(
                    *(id *)(*((_QWORD *)&v17 + 1) + 8LL * (_QWORD)i),
                    "componentsSeparatedByString:",
                    CFSTR("=")));
          if ( objc_msgSend(v10, "count") == (void *)2 )
          {
            v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectAtIndexedSubscript:", 0LL));
            v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "objectForKeyedSubscript:", v11));
            objc_release(v12);
            if ( !v12 )
            {
              v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "objectAtIndexedSubscript:", 1LL));
              v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "stringByRemovingPercentEncoding"));
              objc_msgSend(v4, "setObject:forKeyedSubscript:", v14, v11);
              objc_release(v14);
              objc_release(v13);
            }
            objc_release(v11);
          }
          objc_release(v10);
        }
        v7 = -[NSArray countByEnumeratingWithState:objects:count:](
               v5,
               "countByEnumeratingWithState:objects:count:",
               &v17,
               v21,
               16LL);
      }
      while ( v7 );
    }
    objc_release(v5);
    v3 = v16;
  }
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}