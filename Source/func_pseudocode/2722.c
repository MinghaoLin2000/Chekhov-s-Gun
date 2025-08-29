-[NSString stringByTrimmingIgnoredLeadingCharacters]
id __cdecl -[NSString stringByTrimmingIgnoredLeadingCharacters](NSString *self, SEL a2)
{
  __int64 v3; // x0
  void *v4; // x8
  void *v5; // x20
  NSCharacterSet *v6; // x21
  void *v7; // x20
  NSCharacterSet *v8; // x21
  void *v9; // x20
  NSCharacterSet *v10; // x21
  void *v11; // x20
  NSCharacterSet *v12; // x21
  NSUInteger v13; // x0
  NSUInteger v14; // x21
  NSUInteger v15; // x20
  NSString *v16; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( !qword_1000DAA48 )
  {
    v3 = objc_opt_new(&OBJC_CLASS___NSMutableCharacterSet, a2);
    v4 = (void *)qword_1000DAA48;
    qword_1000DAA48 = v3;
    objc_release(v4);
    v5 = (void *)qword_1000DAA48;
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSCharacterSet whitespaceAndNewlineCharacterSet](
             &OBJC_CLASS___NSCharacterSet,
             "whitespaceAndNewlineCharacterSet"));
    objc_msgSend(v5, "formUnionWithCharacterSet:", v6);
    objc_release(v6);
    v7 = (void *)qword_1000DAA48;
    v8 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet punctuationCharacterSet](&OBJC_CLASS___NSCharacterSet, "punctuationCharacterSet"));
    objc_msgSend(v7, "formUnionWithCharacterSet:", v8);
    objc_release(v8);
    v9 = (void *)qword_1000DAA48;
    v10 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet symbolCharacterSet](&OBJC_CLASS___NSCharacterSet, "symbolCharacterSet"));
    objc_msgSend(v9, "formUnionWithCharacterSet:", v10);
    objc_release(v10);
    v11 = (void *)qword_1000DAA48;
    v12 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet controlCharacterSet](&OBJC_CLASS___NSCharacterSet, "controlCharacterSet"));
    objc_msgSend(v11, "formUnionWithCharacterSet:", v12);
    objc_release(v12);
  }
  v13 = -[NSString length](self, "length");
  if ( !v13 )
    goto LABEL_10;
  v14 = v13;
  v15 = 0LL;
  while ( (unsigned int)objc_msgSend(
                          (id)qword_1000DAA48,
                          "characterIsMember:",
                          -[NSString characterAtIndex:](self, "characterAtIndex:", v15)) )
  {
    if ( v14 == ++v15 )
    {
      v15 = v14;
      break;
    }
  }
  if ( v15 )
    v16 = objc_retainAutoreleasedReturnValue(-[NSString substringFromIndex:](self, "substringFromIndex:", v15));
  else
LABEL_10:
    v16 = objc_retain(self);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v16);
}