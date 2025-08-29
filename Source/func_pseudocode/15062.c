-[NSString atx_phoneNumberFromTelURLString]
id __cdecl -[NSString atx_phoneNumberFromTelURLString](NSString *self, SEL a2)
{
  NSString *v2; // x19
  __int64 v3; // x2
  NSString *v4; // x20
  NSString *v5; // x20
  NSString *v6; // x21
  void *v7; // x0
  NSString *v8; // x19
  void *v9; // x20
  NSString *v10; // x20
  NSString *v11; // x20
  char *v12; // x0
  __int64 v13; // x1
  NSString *v14; // x21
  NSString *v15; // x22
  NSString *v16; // x21
  NSString *v17; // x22
  char *v18; // x21
  char *v19; // x0
  NSString *v20; // x0
  NSString *v21; // x21
  NSString *v22; // x22
  NSArray *v23; // x21
  NSString *v24; // x23
  _QWORD v26[2]; // [xsp+8h] [xbp-48h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v2 = objc_retain(self);
  if ( -[NSString hasPrefix:](v2, "hasPrefix:", CFSTR("tel://")) )
  {
    v3 = 6LL;
  }
  else
  {
    if ( !-[NSString hasPrefix:](v2, "hasPrefix:", CFSTR("tel:")) )
      goto LABEL_6;
    v3 = 4LL;
  }
  v4 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v2, "substringFromIndex:", v3));
  objc_release(v2);
  v2 = v4;
LABEL_6:
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByReplacingOccurrencesOfString:withString:](
           v2,
           "stringByReplacingOccurrencesOfString:withString:",
           CFSTR("p"),
           CFSTR(",")));
  objc_release(v2);
  v6 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByReplacingOccurrencesOfString:withString:](
           v5,
           "stringByReplacingOccurrencesOfString:withString:",
           CFSTR("w"),
           CFSTR(";")));
  objc_release(v5);
  v7 = -[NSString rangeOfString:options:](v6, "rangeOfString:options:", CFSTR(";"), 2LL);
  if ( v7 == (void *)0x7FFFFFFFFFFFFFFFLL )
  {
    v8 = 0LL;
  }
  else
  {
    v9 = v7;
    v8 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v6, "substringFromIndex:", v7));
    v10 = objc_retainAutoreleasedReturnValue(-[NSString substringToIndex:](v6, "substringToIndex:", v9));
    objc_release(v6);
    v6 = v10;
  }
  v11 = objc_retainAutoreleasedReturnValue(-[NSString stringByRemovingPercentEncoding](v6, "stringByRemovingPercentEncoding"));
  objc_release(v6);
  if ( v8 )
  {
    v12 = (char *)-[NSString rangeOfString:options:](v8, "rangeOfString:options:", CFSTR(";ext="), 2LL);
    if ( v12 == (char *)0x7FFFFFFFFFFFFFFFLL )
    {
      v14 = objc_retainAutoreleasedReturnValue(-[NSString stringByRemovingPercentEncoding](v8, "stringByRemovingPercentEncoding"));
      v15 = objc_retainAutoreleasedReturnValue(
              -[NSString stringByReplacingOccurrencesOfString:withString:](
                v14,
                "stringByReplacingOccurrencesOfString:withString:",
                CFSTR("p"),
                CFSTR(",")));
      objc_release(v14);
      v16 = objc_retainAutoreleasedReturnValue(
              -[NSString stringByReplacingOccurrencesOfString:withString:](
                v15,
                "stringByReplacingOccurrencesOfString:withString:",
                CFSTR("w"),
                CFSTR(";")));
      objc_release(v15);
      v17 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingString:](v11, "stringByAppendingString:", v16));
      objc_release(v11);
      objc_release(v16);
      v11 = v17;
    }
    else
    {
      v18 = &v12[v13];
      v19 = (char *)-[NSString rangeOfString:options:range:](
                      v8,
                      "rangeOfString:options:range:",
                      CFSTR(";"),
                      2LL,
                      v18,
                      (_BYTE *)-[NSString length](v8, "length") - v18);
      if ( v19 == (char *)0x7FFFFFFFFFFFFFFFLL )
        v20 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v8, "substringFromIndex:", v18));
      else
        v20 = objc_retainAutoreleasedReturnValue(-[NSString substringWithRange:](v8, "substringWithRange:", v18, v19 - v18));
      v21 = v20;
      v22 = objc_retainAutoreleasedReturnValue(-[NSString stringByRemovingPercentEncoding](v20, "stringByRemovingPercentEncoding"));
      objc_release(v21);
      v26[0] = v11;
      v26[1] = v22;
      v23 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v26, 2LL));
      v24 = objc_retainAutoreleasedReturnValue(-[NSArray componentsJoinedByString:](v23, "componentsJoinedByString:", CFSTR(",")));
      objc_release(v11);
      objc_release(v23);
      objc_release(v22);
      v11 = v24;
    }
  }
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}