-[NSString tsu_substringWithTrailingQuoteIfNeededByTruncatingToSize:forAttributes:]
id __cdecl -[NSString tsu_substringWithTrailingQuoteIfNeededByTruncatingToSize:forAttributes:](
        NSString *self,
        SEL a2,
        CGSize a3,
        id a4)
{
  double height; // d8
  double width; // d9
  NSString *v7; // x20
  id v8; // x24
  id v9; // x21
  void *v10; // x19
  NSString *v11; // x21
  unsigned int v12; // w23
  id v13; // x22
  void *v14; // x20
  __int64 vars8; // [xsp+48h] [xbp+8h]

  height = a3.height;
  width = a3.width;
  v7 = objc_retain(self);
  v8 = objc_retain(a4);
  v9 = objc_retainAutoreleasedReturnValue(SFUMainBundle());
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "localizedStringForKey:value:table:", CFSTR("”"), &stru_1001DFAA0, CFSTR("TSUtility")));
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](v7, "substringFromIndex:", (char *)-[NSString length](v7, "length") - 1));
  v12 = -[NSString isEqualToString:](v11, "isEqualToString:", v10);
  v13 = objc_retainAutoreleasedReturnValue(
          -[NSString tsu_substringByTruncatingToSize:forAttributes:](
            v7,
            "tsu_substringByTruncatingToSize:forAttributes:",
            v8,
            width,
            height));
  objc_release(v7);
  objc_release(v8);
  if ( ((unsigned int)objc_msgSend(v13, "isEqualToString:", v7) & 1) == 0 && v12 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "stringByAppendingString:", v10));
    objc_release(v13);
    v13 = v14;
  }
  objc_release(v11);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}