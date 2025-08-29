-[NSString tsu_appendJSONStringToString:]
void __cdecl -[NSString tsu_appendJSONStringToString:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  NSUInteger v5; // x20
  unsigned __int16 *v6; // x27
  unsigned __int16 *v7; // x21
  __int64 v8; // x8
  int v9; // t1
  void *v10; // x0
  const __CFString *v11; // x2
  NSString *v12; // x0
  NSString *v13; // x24
  __int16 v14; // [xsp+Eh] [xbp-52h] BYREF

  v4 = objc_retain(a3);
  if ( qword_1001F8068 != -1 )
    dispatch_once(&qword_1001F8068, &stru_1001DF568);
  objc_msgSend(v4, "appendString:", CFSTR("\""));
  if ( -[NSString rangeOfCharacterFromSet:](self, "rangeOfCharacterFromSet:", qword_1001F8060) != (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v5 = -[NSString length](self, "length");
    v6 = (unsigned __int16 *)malloc_type_malloc(2 * v5, 0x1000040BDFB0063uLL);
    -[NSString getCharacters:](self, "getCharacters:", v6);
    if ( !v5 )
    {
LABEL_30:
      free(v6);
      goto LABEL_31;
    }
    v7 = v6;
    while ( 1 )
    {
      v9 = *v7++;
      v8 = (unsigned int)v9;
      v14 = v9;
      if ( v9 <= 33 )
      {
        switch ( (int)v8 )
        {
          case 8:
            v10 = v4;
            v11 = CFSTR("\\b");
            goto LABEL_23;
          case 9:
            v10 = v4;
            v11 = CFSTR("\\t");
            goto LABEL_23;
          case 10:
            v10 = v4;
            v11 = CFSTR("\\n");
            goto LABEL_23;
          case 12:
            v10 = v4;
            v11 = CFSTR("\\f");
            goto LABEL_23;
          case 13:
            v10 = v4;
            v11 = CFSTR("\\r");
            goto LABEL_23;
          default:
            goto LABEL_26;
        }
      }
      if ( (int)v8 > 8231 )
      {
        if ( (_DWORD)v8 == 8232 )
        {
          v10 = v4;
          v11 = CFSTR("\\u2028");
        }
        else
        {
          if ( (_DWORD)v8 != 8233 )
          {
LABEL_26:
            if ( (unsigned int)v8 < 0x20 )
              v12 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("\\u%.4x"), v8));
            else
              v12 = objc_retainAutoreleasedReturnValue(
                      +[NSString stringWithCharacters:length:](
                        &OBJC_CLASS___NSString,
                        "stringWithCharacters:length:",
                        &v14,
                        1LL));
            v13 = v12;
            objc_msgSend(v4, "appendString:", v12);
            objc_release(v13);
            goto LABEL_24;
          }
          v10 = v4;
          v11 = CFSTR("\\u2029");
        }
      }
      else if ( (_DWORD)v8 == 34 )
      {
        v10 = v4;
        v11 = CFSTR("\\\"");
      }
      else
      {
        if ( (_DWORD)v8 != 92 )
          goto LABEL_26;
        v10 = v4;
        v11 = CFSTR("\\\\");
      }
LABEL_23:
      objc_msgSend(v10, "appendString:", v11);
LABEL_24:
      if ( !--v5 )
        goto LABEL_30;
    }
  }
  objc_msgSend(v4, "appendString:", self);
LABEL_31:
  objc_msgSend(v4, "appendString:", CFSTR("\""));
  objc_release(v4);
}