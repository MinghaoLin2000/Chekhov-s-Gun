-[CalenderLimitFormatter isPartialStringValid:newEditingString:errorDescription:]
bool __cdecl -[CalenderLimitFormatter isPartialStringValid:newEditingString:errorDescription:](
        CalenderLimitFormatter *self,
        SEL a2,
        id a3,
        id *a4,
        id *a5)
{
  id v7; // x19
  NSCharacterSet *v8; // x20
  NSCharacterSet *v9; // x21
  void *v10; // x0
  void *v11; // x8
  void *v12; // x20
  NSCharacterSet *v13; // x21
  bool v14; // w20

  v7 = objc_retain(a3);
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( !qword_1000DAA20 )
  {
    v8 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet decimalDigitCharacterSet](&OBJC_CLASS___NSCharacterSet, "decimalDigitCharacterSet"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSCharacterSet invertedSet](v8, "invertedSet"));
    v10 = -[NSCharacterSet mutableCopy](v9, "mutableCopy");
    v11 = (void *)qword_1000DAA20;
    qword_1000DAA20 = (__int64)v10;
    objc_release(v11);
    objc_release(v9);
    objc_release(v8);
    v12 = (void *)qword_1000DAA20;
    v13 = objc_retainAutoreleasedReturnValue(+[NSCharacterSet symbolCharacterSet](&OBJC_CLASS___NSCharacterSet, "symbolCharacterSet"));
    objc_msgSend(v12, "formUnionWithCharacterSet:", v13);
    objc_release(v13);
  }
  if ( objc_msgSend(v7, "length") )
    v14 = objc_msgSend(v7, "rangeOfCharacterFromSet:", qword_1000DAA20) == (void *)0x7FFFFFFFFFFFFFFFLL;
  else
    v14 = 1;
  objc_release(v7);
  return v14;
}