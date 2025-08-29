-[NSString tsu_tolerantStringByAppendingPathExtension:]
id __cdecl -[NSString tsu_tolerantStringByAppendingPathExtension:](NSString *self, SEL a2, id a3)
{
  id v4; // x19
  NSString *v5; // x0
  NSString *v6; // x20
  void *v8; // x21
  NSString *v9; // x0
  void *v10; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  if ( -[NSString isEqualToString:](self, "isEqualToString:", &stru_1001DFAA0)
    || (unsigned int)objc_msgSend(v4, "isEqualToString:", &stru_1001DFAA0) )
  {
    v5 = objc_retain(self);
LABEL_4:
    v6 = v5;
    goto LABEL_5;
  }
  if ( -[NSString isEqualToString:](self, "isEqualToString:", CFSTR("\\\\")) )
  {
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("\\"), "stringByAppendingPathExtension:", v4));
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("\\"), "stringByAppendingString:", v8));
  }
  else
  {
    if ( !-[NSString length](self, "length") || -[NSString characterAtIndex:](self, "characterAtIndex:", 0LL) != 126 )
    {
      v5 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathExtension:](self, "stringByAppendingPathExtension:", v4));
      goto LABEL_4;
    }
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("X"), "stringByAppendingString:", self));
    v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "stringByAppendingPathExtension:", v4));
    objc_release(v10);
    v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "substringFromIndex:", 1LL));
  }
  v6 = v9;
  objc_release(v8);
LABEL_5:
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}