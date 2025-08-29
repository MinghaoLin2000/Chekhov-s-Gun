-[TSPTemporaryObjectContextDelegate persistenceWarningsForData:flags:]
id __cdecl -[TSPTemporaryObjectContextDelegate persistenceWarningsForData:flags:](
        TSPTemporaryObjectContextDelegate *self,
        SEL a2,
        id a3,
        unsigned __int64 a4)
{
  char v4; // w20
  id v5; // x0
  void *v6; // x19
  void *v7; // x0
  void *v8; // x21
  const __CFString *v9; // x8
  NSString *v10; // x20
  TSUWarning *v11; // x22
  NSSet *v12; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = a4;
  v5 = objc_retain(a3);
  v6 = v5;
  if ( (v4 & 1) != 0 )
  {
    v12 = objc_retainAutoreleasedReturnValue(+[NSSet set](&OBJC_CLASS___NSSet, "set"));
  }
  else
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "filename"));
    v8 = v7;
    v9 = CFSTR("External");
    if ( (v4 & 2) == 0 )
      v9 = CFSTR("Package");
    v10 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("%@ data %@ is missing."),
              v9,
              v7));
    objc_release(v8);
    v11 = objc_retainAutoreleasedReturnValue(+[TSUWarning warningWithMessage:](&OBJC_CLASS___TSUWarning, "warningWithMessage:", v10));
    v12 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObject:](&OBJC_CLASS___NSSet, "setWithObject:", v11));
    objc_release(v11);
    objc_release(v10);
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v12);
}