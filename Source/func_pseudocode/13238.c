-[SFUZipArchive commonRootDirectoryIgnoringCase:]
id __cdecl -[SFUZipArchive commonRootDirectoryIgnoringCase:](SFUZipArchive *self, SEL a2, bool a3)
{
  _BOOL4 v3; // w24
  id v5; // x21
  void *v6; // x0
  void *v7; // x22
  NSMutableArray *v8; // x20
  __int64 v9; // x23
  __int64 v10; // x24
  void *v11; // x26
  char *v12; // x27
  NSString *v13; // x20
  void *context; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = a3;
  context = objc_autoreleasePoolPush();
  v5 = -[SFUZipArchive allEntryNames](self, "allEntryNames");
  v6 = objc_msgSend(v5, "count");
  if ( v6 )
  {
    v7 = v6;
    v8 = 0LL;
    v9 = 0LL;
    v10 = v3 | 2LL;
    while ( 1 )
    {
      v11 = objc_msgSend(objc_msgSend(v5, "objectAtIndex:", v9), "pathComponents");
      if ( (unsigned __int64)objc_msgSend(v11, "count") < 2
        || ((unsigned int)objc_msgSend(objc_msgSend(v11, "objectAtIndex:", 0LL), "isEqualToString:", CFSTR("__MACOSX")) & 1) == 0 )
      {
        if ( v8 )
        {
          v12 = 0LL;
          if ( -[NSMutableArray count](v8, "count") )
          {
            do
            {
              if ( v12 >= objc_msgSend(v11, "count") )
                break;
              if ( objc_msgSend(
                     -[NSMutableArray objectAtIndexedSubscript:](v8, "objectAtIndexedSubscript:", v12),
                     "compare:options:",
                     objc_msgSend(v11, "objectAtIndexedSubscript:", v12),
                     v10) )
              {
                break;
              }
              ++v12;
            }
            while ( v12 < -[NSMutableArray count](v8, "count") );
            if ( v12 == (char *)0x7FFFFFFFFFFFFFFFLL )
              break;
          }
          if ( v12 != (char *)-[NSMutableArray count](v8, "count") + 1 )
            -[NSMutableArray removeObjectsInRange:](
              v8,
              "removeObjectsInRange:",
              v12,
              (_BYTE *)-[NSMutableArray count](v8, "count") - v12);
        }
        else
        {
          v8 = +[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", v11);
          -[NSMutableArray removeLastObject](v8, "removeLastObject");
        }
      }
      if ( (void *)++v9 == v7 )
        goto LABEL_17;
    }
  }
  v8 = 0LL;
LABEL_17:
  if ( -[NSMutableArray count](v8, "count") )
    v13 = objc_retain(+[NSString pathWithComponents:](&OBJC_CLASS___NSString, "pathWithComponents:", v8));
  else
    v13 = 0LL;
  objc_autoreleasePoolPop(context);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v13);
}