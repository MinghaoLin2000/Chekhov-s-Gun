-[NSArray tsu_localizedList]
id __cdecl -[NSArray tsu_localizedList](NSArray *self, SEL a2)
{
  void *v3; // x20
  NSUInteger v4; // x0
  unsigned __int64 v5; // x26
  __int64 v6; // x28
  unsigned __int64 i; // x21
  void *v8; // x0
  void *v9; // x0
  const __CFString *v10; // x2
  const __CFString *v11; // x3
  void *v12; // x0
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = +[NSMutableString string](&OBJC_CLASS___NSMutableString, "string");
  v4 = -[NSArray count](self, "count");
  if ( v4 )
  {
    v5 = v4;
    v6 = 2LL;
    for ( i = v4; i; --i )
    {
      v8 = objc_msgSend(
             v3,
             "appendFormat:",
             CFSTR("%@"),
             objc_msgSend(
               -[NSArray objectAtIndexedSubscript:](self, "objectAtIndexedSubscript:", v6 - 2),
               "description"));
      if ( i < 3 )
      {
        if ( v5 >= 3 && i == 2 )
        {
          v9 = (void *)SFUMainBundle(v8);
          v10 = CFSTR("TSU_LIST_SEPARATOR_FINAL");
          v11 = CFSTR(", and ");
        }
        else
        {
          if ( v5 != 2 || v6 != 2 )
            goto LABEL_12;
          v9 = (void *)SFUMainBundle(v8);
          v10 = CFSTR("TSU_LIST_SEPARATOR_TWO_ITEMS");
          v11 = CFSTR(" and ");
        }
      }
      else
      {
        v9 = (void *)SFUMainBundle(v8);
        v10 = CFSTR("TSU_LIST_SEPARATOR");
        v11 = CFSTR(", ");
      }
      objc_msgSend(
        v3,
        "appendFormat:",
        CFSTR("%@"),
        objc_msgSend(v9, "localizedStringForKey:value:table:", v10, v11, CFSTR("TSUtility")));
LABEL_12:
      ++v6;
    }
  }
  v12 = objc_msgSend(v3, "copy");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v12);
}