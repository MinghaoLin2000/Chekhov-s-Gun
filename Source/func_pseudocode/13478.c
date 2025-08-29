-[NSString tsu_stringByExpandingTableFormatting]
id __cdecl -[NSString tsu_stringByExpandingTableFormatting](NSString *self, SEL a2)
{
  void *v3; // x25
  NSArray *v4; // x19
  void *v5; // x26
  NSArray *v6; // x27
  void *v7; // x0
  void *v8; // x22
  id v9; // x24
  __int64 v10; // x21
  void *i; // x23
  void *v12; // x20
  id v13; // x0
  void *v14; // x19
  void *v15; // x20
  void *v16; // x21
  void *v17; // x22
  _QWORD *v18; // x22
  unsigned __int64 v19; // x27
  int v20; // w8
  unsigned __int64 v21; // x19
  unsigned int v22; // w23
  __CFString *v23; // x28
  void *v24; // x20
  unsigned __int64 v25; // x21
  void *v26; // x0
  unsigned __int64 v27; // x8
  id v28; // x21
  void *v29; // x0
  void *v30; // x20
  __int64 v31; // x26
  void *j; // x27
  unsigned __int64 v33; // x25
  void *v34; // x0
  unsigned __int64 v35; // x8
  void *v36; // x0
  unsigned __int64 v37; // x20
  int v38; // w8
  void *v39; // x28
  unsigned __int64 v40; // x19
  int v41; // w9
  unsigned __int64 v42; // x21
  unsigned int v43; // w25
  __CFString *v44; // x20
  void *v45; // x26
  __CFString *v46; // x23
  void *v47; // x21
  void *v49; // x0
  NSArray *v51; // [xsp+8h] [xbp-218h]
  void *v52; // [xsp+10h] [xbp-210h]
  int v53; // [xsp+1Ch] [xbp-204h]
  int v54; // [xsp+1Ch] [xbp-204h]
  void *v55; // [xsp+20h] [xbp-200h]
  unsigned __int64 v56; // [xsp+28h] [xbp-1F8h]
  unsigned __int64 v57; // [xsp+28h] [xbp-1F8h]
  id v58; // [xsp+30h] [xbp-1F0h]
  int v59; // [xsp+30h] [xbp-1F0h]
  _QWORD *v60; // [xsp+38h] [xbp-1E8h]
  __int128 v61; // [xsp+40h] [xbp-1E0h] BYREF
  __int128 v62; // [xsp+50h] [xbp-1D0h]
  __int128 v63; // [xsp+60h] [xbp-1C0h]
  __int128 v64; // [xsp+70h] [xbp-1B0h]
  __int128 v65; // [xsp+80h] [xbp-1A0h] BYREF
  __int128 v66; // [xsp+90h] [xbp-190h]
  __int128 v67; // [xsp+A0h] [xbp-180h]
  __int128 v68; // [xsp+B0h] [xbp-170h]
  _BYTE v69[128]; // [xsp+C0h] [xbp-160h] BYREF
  _BYTE v70[128]; // [xsp+140h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+228h] [xbp+8h]

  v3 = objc_autoreleasePoolPush();
  v4 = objc_retainAutoreleasedReturnValue(-[NSString componentsSeparatedByString:](self, "componentsSeparatedByString:", CFSTR("$")));
  v5 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
  v65 = 0u;
  v66 = 0u;
  v67 = 0u;
  v68 = 0u;
  v6 = objc_retain(v4);
  v7 = -[NSArray countByEnumeratingWithState:objects:count:](
         v6,
         "countByEnumeratingWithState:objects:count:",
         &v65,
         v70,
         16LL);
  if ( v7 )
  {
    v8 = v7;
    v9 = 0LL;
    v10 = *(_QWORD *)v66;
    do
    {
      for ( i = 0LL; i != v8; i = (char *)i + 1 )
      {
        if ( *(_QWORD *)v66 != v10 )
          objc_enumerationMutation(v6);
        v12 = objc_retainAutoreleasedReturnValue(
                objc_msgSend(
                  *(id *)(*((_QWORD *)&v65 + 1) + 8LL * (_QWORD)i),
                  "componentsSeparatedByString:",
                  CFSTR("|")));
        objc_msgSend(v5, "addObject:", v12);
        v13 = objc_msgSend(v12, "count");
        if ( v9 <= v13 )
          v9 = v13;
        objc_release(v12);
      }
      v8 = -[NSArray countByEnumeratingWithState:objects:count:](
             v6,
             "countByEnumeratingWithState:objects:count:",
             &v65,
             v70,
             16LL);
    }
    while ( v8 );
  }
  else
  {
    v9 = 0LL;
  }
  objc_release(v6);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "lastObject"));
  if ( objc_msgSend(v14, "count") == (void *)1 )
  {
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "lastObject"));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "objectAtIndexedSubscript:", 0LL));
    v17 = objc_msgSend(v16, "length");
    objc_release(v16);
    objc_release(v15);
    objc_release(v14);
    if ( !v17 )
      objc_msgSend(v5, "removeLastObject");
  }
  else
  {
    objc_release(v14);
  }
  if ( v9 )
  {
    v51 = v6;
    v52 = v3;
    v18 = malloc_type_calloc(8uLL, (size_t)v9, 0x70F7E92DuLL);
    v60 = malloc_type_calloc(8uLL, (size_t)objc_msgSend(v5, "count"), 0x29950371uLL);
    v55 = v5;
    if ( objc_msgSend(v5, "count") )
    {
      v19 = 0LL;
      v20 = 0;
      do
      {
        v53 = v20;
        v56 = v19;
        v58 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectAtIndexedSubscript:", v19));
        v21 = 0LL;
        v22 = 0;
        do
        {
          v23 = &stru_1001DFAA0;
          if ( (unsigned __int64)objc_msgSend(v58, "count") > v21 )
            v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v58, "objectAtIndexedSubscript:", v21));
          v24 = objc_retainAutoreleasedReturnValue(-[__CFString componentsSeparatedByString:](v23, "componentsSeparatedByString:", CFSTR("\n")));
          v25 = v60[v19];
          v26 = objc_msgSend(v24, "count");
          if ( v25 <= (unsigned __int64)v26 )
            v27 = (unsigned __int64)v26;
          else
            v27 = v25;
          v60[v19] = v27;
          v61 = 0u;
          v62 = 0u;
          v63 = 0u;
          v64 = 0u;
          v28 = objc_retain(v24);
          v29 = objc_msgSend(v28, "countByEnumeratingWithState:objects:count:", &v61, v69, 16LL);
          if ( v29 )
          {
            v30 = v29;
            v31 = *(_QWORD *)v62;
            do
            {
              for ( j = 0LL; j != v30; j = (char *)j + 1 )
              {
                if ( *(_QWORD *)v62 != v31 )
                  objc_enumerationMutation(v28);
                v33 = v18[v21];
                v34 = objc_msgSend(*(id *)(*((_QWORD *)&v61 + 1) + 8LL * (_QWORD)j), "length");
                if ( v33 <= (unsigned __int64)v34 )
                  v35 = (unsigned __int64)v34;
                else
                  v35 = v33;
                v18[v21] = v35;
              }
              v30 = objc_msgSend(v28, "countByEnumeratingWithState:objects:count:", &v61, v69, 16LL);
            }
            while ( v30 );
          }
          objc_release(v28);
          objc_release(v28);
          objc_release(v23);
          v21 = ++v22;
          v19 = v56;
        }
        while ( (unsigned __int64)v9 > v22 );
        objc_release(v58);
        v19 = (unsigned int)(v53 + 1);
        v5 = v55;
        v36 = objc_msgSend(v55, "count");
        v20 = v53 + 1;
      }
      while ( (unsigned __int64)v36 > v19 );
    }
    v9 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableString);
    if ( objc_msgSend(v5, "count") )
    {
      v37 = 0LL;
      v38 = 0;
      do
      {
        v54 = v38;
        v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectAtIndexedSubscript:", v37));
        if ( v60[v37] )
        {
          v40 = 0LL;
          v41 = 0;
          v57 = v37;
          do
          {
            v59 = v41;
            if ( objc_msgSend(v39, "count") )
            {
              v42 = 0LL;
              v43 = 1;
              do
              {
                v44 = &stru_1001DFAA0;
                if ( (unsigned __int64)objc_msgSend(v39, "count") > v42 )
                  v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v39, "objectAtIndexedSubscript:", v42));
                v45 = objc_retainAutoreleasedReturnValue(-[__CFString componentsSeparatedByString:](v44, "componentsSeparatedByString:", CFSTR("\n")));
                v46 = &stru_1001DFAA0;
                if ( (unsigned __int64)objc_msgSend(v45, "count") > v40 )
                  v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v45, "objectAtIndexedSubscript:", v40));
                v47 = objc_retainAutoreleasedReturnValue(
                        -[__CFString stringByPaddingToLength:withString:startingAtIndex:](
                          v46,
                          "stringByPaddingToLength:withString:startingAtIndex:",
                          v18[v42] + 1LL,
                          CFSTR(" "),
                          0LL));
                objc_msgSend(v9, "appendString:", v47);
                objc_release(v47);
                objc_release(v46);
                objc_release(v45);
                objc_release(v44);
                v42 = v43;
              }
              while ( (unsigned __int64)objc_msgSend(v39, "count") > v43++ );
            }
            objc_msgSend(v9, "appendString:", CFSTR("\n"));
            v40 = (unsigned int)(v59 + 1);
            v41 = v59 + 1;
          }
          while ( v60[v57] > v40 );
        }
        objc_release(v39);
        v37 = (unsigned int)(v54 + 1);
        v5 = v55;
        v49 = objc_msgSend(v55, "count");
        v38 = v54 + 1;
      }
      while ( (unsigned __int64)v49 > v37 );
    }
    free(v60);
    free(v18);
    v6 = v51;
    v3 = v52;
  }
  objc_release(v5);
  objc_release(v6);
  objc_autoreleasePoolPop(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}