-[TSUDescription descriptionString]
NSString *__cdecl -[TSUDescription descriptionString](TSUDescription *self, SEL a2)
{
  void **p_cache; // x24
  id WeakRetained; // x20
  char v5; // w22
  id v6; // x20
  NSMutableString *v7; // x19
  id v8; // x20
  NSMutableArray *v9; // x28
  char *v10; // x0
  char *v11; // x23
  __int64 v12; // x19
  char *v13; // x20
  __CFString *v14; // x26
  __int64 v15; // x24
  char *v16; // x22
  char *v17; // x20
  __CFString *v18; // x27
  __int64 v19; // x23
  __int64 v20; // x25
  NSMutableArray *v21; // x24
  void *v22; // x28
  void *v23; // x19
  void *v24; // x26
  __CFString *v25; // x28
  __CFString *v26; // x0
  const char *v27; // x9
  NSMutableString *v29; // [xsp+28h] [xbp-148h]
  char *v30; // [xsp+30h] [xbp-140h]
  void *v31; // [xsp+38h] [xbp-138h]
  char *v32; // [xsp+40h] [xbp-130h]
  char *v33; // [xsp+48h] [xbp-128h]
  __int128 v34; // [xsp+50h] [xbp-120h] BYREF
  __int128 v35; // [xsp+60h] [xbp-110h]
  __int128 v36; // [xsp+70h] [xbp-100h]
  __int128 v37; // [xsp+80h] [xbp-F0h]
  _BYTE v38[128]; // [xsp+90h] [xbp-E0h] BYREF
  __int64 vars8; // [xsp+178h] [xbp+8h]

  p_cache = &OBJC_METACLASS___TSUSystemInfo.cache;
  if ( !self->_fields )
    goto LABEL_5;
  if ( +[TSUDescription peekDescriptionDepth](&OBJC_CLASS___TSUDescription, "peekDescriptionDepth") < 5 )
  {
    v8 = objc_retainAutoreleasedReturnValue(-[TSUDescription p_header](self, "p_header"));
    v7 = objc_retainAutoreleasedReturnValue(+[NSMutableString stringWithFormat:](&OBJC_CLASS___NSMutableString, "stringWithFormat:", CFSTR("%@ {"), v8));
    objc_release(v8);
    v6 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableString);
    v34 = 0u;
    v35 = 0u;
    v36 = 0u;
    v37 = 0u;
    v9 = objc_retain(self->_fieldOrder);
    v10 = (char *)-[NSMutableArray countByEnumeratingWithState:objects:count:](
                    v9,
                    "countByEnumeratingWithState:objects:count:",
                    &v34,
                    v38,
                    16LL);
    if ( v10 )
    {
      v11 = v10;
      v31 = v6;
      v29 = v7;
      v12 = 0LL;
      v13 = 0LL;
      v14 = &stru_1001DFAA0;
      v15 = *(_QWORD *)v35;
      do
      {
        v16 = 0LL;
        v30 = v13;
        v17 = v13 + 1;
        v18 = v14;
        v32 = v17;
        v33 = v11;
        do
        {
          if ( *(_QWORD *)v35 != v15 )
            objc_enumerationMutation(v9);
          if ( &v16[(_QWORD)v17] > (char *)0x63 )
          {
            ++v12;
          }
          else
          {
            v19 = v15;
            v20 = v12;
            v21 = v9;
            v22 = *(void **)(*((_QWORD *)&v34 + 1) + 8LL * (_QWORD)v16);
            v23 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKey:](self->_fields, "objectForKey:", v22));
            v24 = objc_msgSend(v23, "mutableCopy");
            objc_release(v23);
            v25 = objc_retain(v22);
            objc_msgSend(v24, "tsu_indentBy:", self->_fieldNameWidth);
            if ( (unsigned int)-[__CFString hasPrefix:](v25, "hasPrefix:", CFSTR("$$$")) )
            {
              objc_release(v25);
              v25 = &stru_1001DFAA0;
            }
            objc_msgSend(v24, "replaceCharactersInRange:withString:", 0LL, -[__CFString length](v25, "length"), v25);
            objc_msgSend(v31, "appendFormat:", CFSTR("%@%@"), v18, v24);
            objc_release(v25);
            objc_release(v24);
            v9 = v21;
            v12 = v20;
            v15 = v19;
            v17 = v32;
            v11 = v33;
          }
          if ( self->_commaSeparated )
            v26 = CFSTR(",\n");
          else
            v26 = CFSTR("\n");
          v14 = objc_retain(v26);
          objc_release(v18);
          ++v16;
          v18 = v14;
        }
        while ( v11 != v16 );
        v13 = &v11[(_QWORD)v30];
        v11 = (char *)-[NSMutableArray countByEnumeratingWithState:objects:count:](
                        v9,
                        "countByEnumeratingWithState:objects:count:",
                        &v34,
                        v38,
                        16LL);
      }
      while ( v11 );
      objc_release(v9);
      if ( v12 )
      {
        v27 = "";
        if ( v12 != 1 )
          v27 = "s";
        v6 = v31;
        objc_msgSend(
          v31,
          "appendFormat:",
          CFSTR("%@...omitting %lu field%s (set to truncate after %lu field%s)"),
          v14,
          v12,
          v27,
          99LL,
          "s");
        p_cache = (void **)(&OBJC_METACLASS___TSUSystemInfo + 16);
        v7 = v29;
      }
      else
      {
        p_cache = &OBJC_METACLASS___TSUSystemInfo.cache;
        v7 = v29;
        v6 = v31;
      }
    }
    else
    {
      objc_release(v9);
      v14 = &stru_1001DFAA0;
    }
    while ( ((unsigned int)objc_msgSend(v6, "hasSuffix:", CFSTR("\n")) & 1) != 0
         || (unsigned int)objc_msgSend(v6, "hasSuffix:", CFSTR(" ")) )
      objc_msgSend(v6, "deleteCharactersInRange:", (char *)objc_msgSend(v6, "length") - 1, 1LL);
    objc_msgSend(v6, "tsu_indentBy:", 2LL);
    -[NSMutableString appendFormat:](v7, "appendFormat:", CFSTR("\n%@\n}"), v6);
    objc_release(v14);
    goto LABEL_31;
  }
  WeakRetained = objc_loadWeakRetained((id *)&self->_object);
  v5 = objc_opt_respondsToSelector(WeakRetained, "shortDescription");
  objc_release(WeakRetained);
  if ( (v5 & 1) == 0 )
  {
LABEL_5:
    v7 = (NSMutableString *)objc_retainAutoreleasedReturnValue(-[TSUDescription p_header](self, "p_header"));
    goto LABEL_32;
  }
  v6 = objc_loadWeakRetained((id *)&self->_object);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "shortDescription"));
LABEL_31:
  objc_release(v6);
LABEL_32:
  objc_msgSend(p_cache + 118, "popDescriptionDepth");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_autoreleaseReturnValue(v7);
}