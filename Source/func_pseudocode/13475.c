+[NSString tsu_stringByIndentingString:times:]
id __cdecl +[NSString tsu_stringByIndentingString:times:](id a1, SEL a2, id a3, unsigned __int64 a4)
{
  id v5; // x23
  void *v6; // x0
  void *v7; // x24
  void *v8; // x23
  id v9; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_msgSend(v5, "length");
  if ( a4 && v6 )
  {
    do
    {
      v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "stringByReplacingOccurrencesOfString:withString:", CFSTR("\n"), CFSTR("\n  ")));
      objc_release(v5);
      if ( (unsigned int)objc_msgSend(v7, "hasSuffix:", CFSTR("\n  ")) )
      {
        v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "substringToIndex:", (char *)objc_msgSend(v7, "length") - 2));
        objc_release(v7);
        v7 = v8;
      }
      v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("  "), "stringByAppendingString:", v7));
      objc_release(v7);
      --a4;
    }
    while ( a4 );
  }
  v9 = objc_retain(v5);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}