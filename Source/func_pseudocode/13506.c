-[NSString tsu_parseBaseTitleWithLocalizedCopyString:firstCopyFormatString:generalCopyFormatString:outNumber:]
id __cdecl -[NSString tsu_parseBaseTitleWithLocalizedCopyString:firstCopyFormatString:generalCopyFormatString:outNumber:](
        NSString *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int64 *a6)
{
  id v10; // x19
  id v11; // x20
  id v12; // x21
  void *v13; // x22
  void *v14; // x24
  void *v15; // x26
  void *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x26
  void *v19; // x0
  __int64 v20; // x1
  NSString *v21; // x27
  void *v22; // x0
  __int64 v23; // x1
  NSString *v24; // x26
  unsigned __int64 v25; // x28
  NSString *v26; // x0
  void *v27; // x27
  __int64 v28; // x2
  void *v29; // x0
  __int64 v30; // x1
  id v32; // [xsp+8h] [xbp-58h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a5);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "tsu_regexForTitleParsingWithLocalizedCopyString:isFirstCopyFormatString:", v10, 0LL));
  if ( !v13 )
  {
    v21 = objc_retain(self);
    goto LABEL_23;
  }
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "firstMatchInString:options:range:", self, 0LL, 0LL, -[NSString length](self, "length")));
  if ( v14 )
  {
    v15 = objc_msgSend(v12, "rangeOfString:", CFSTR("%1$@"));
    v16 = objc_msgSend(v12, "rangeOfString:", CFSTR("%3$@"));
    if ( v15 < v16 )
      v17 = 1LL;
    else
      v17 = 2LL;
    if ( v15 >= v16 )
      v18 = 1LL;
    else
      v18 = 2LL;
    v19 = objc_msgSend(v14, "rangeAtIndex:", v17);
    v21 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](self, "substringWithRange:", v19, v20));
    v22 = objc_msgSend(v14, "rangeAtIndex:", v18);
    v24 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](self, "substringWithRange:", v22, v23));
    v25 = -[NSString integerValue](v24, "integerValue");
    goto LABEL_20;
  }
  v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "tsu_regexForTitleParsingWithLocalizedCopyString:isFirstCopyFormatString:", v10, 1LL));
  if ( v26 )
  {
    v24 = v26;
    v32 = objc_retainAutoreleasedReturnValue(
            -[NSString firstMatchInString:options:range:](
              v26,
              "firstMatchInString:options:range:",
              self,
              0LL,
              0LL,
              -[NSString length](self, "length")));
    if ( v32 )
    {
      v27 = objc_msgSend(v11, "rangeOfString:", CFSTR("%1$@"));
      v25 = 1LL;
      if ( v27 < objc_msgSend(v11, "rangeOfString:", CFSTR("%3$@")) )
        v28 = 1LL;
      else
        v28 = 2LL;
      v29 = objc_msgSend(v32, "rangeAtIndex:", v28);
      v21 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](self, "substringWithRange:", v29, v30));
    }
    else
    {
      v21 = (NSString *)-[NSString copy](self, "copy");
      v25 = 0LL;
    }
    objc_release(v32);
LABEL_20:
    objc_release(v24);
    if ( a6 )
      *a6 = v25;
    goto LABEL_22;
  }
  v21 = objc_retain(self);
LABEL_22:
  objc_release(v14);
LABEL_23:
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v21);
}