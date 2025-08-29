-[NSString compareTrackString:]
signed __int64 __cdecl -[NSString compareTrackString:](NSString *self, SEL a2, id a3)
{
  id v4; // x21
  id v5; // x19
  void *v6; // x20
  NSCharacterSet *v7; // x0
  void *v8; // x8
  unsigned int v9; // w21
  void *v10; // x0
  signed __int64 v11; // x21

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[NSString stringByTrimmingIgnoredLeadingCharacters](self, "stringByTrimmingIgnoredLeadingCharacters"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringByTrimmingIgnoredLeadingCharacters"));
  objc_release(v4);
  if ( !qword_1000DAA50 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet decimalDigitCharacterSet](&OBJC_CLASS___NSCharacterSet, "decimalDigitCharacterSet"));
    v8 = (void *)qword_1000DAA50;
    qword_1000DAA50 = (__int64)v7;
    objc_release(v8);
  }
  if ( objc_msgSend(v5, "length") )
    v9 = (unsigned int)objc_msgSend(
                         (id)qword_1000DAA50,
                         "characterIsMember:",
                         objc_msgSend(v5, "characterAtIndex:", 0LL));
  else
    v9 = 0;
  v10 = objc_msgSend(v6, "length");
  if ( v10 )
    LODWORD(v10) = (unsigned int)objc_msgSend(
                                   (id)qword_1000DAA50,
                                   "characterIsMember:",
                                   objc_msgSend(v6, "characterAtIndex:", 0LL));
  if ( !v9 || (_DWORD)v10 )
  {
    if ( (v9 | (unsigned int)v10 ^ 1) == 1 )
      v11 = (signed __int64)objc_msgSend(v5, "compare:options:", v6, 193LL);
    else
      v11 = -1LL;
  }
  else
  {
    v11 = 1LL;
  }
  objc_release(v6);
  objc_release(v5);
  return v11;
}