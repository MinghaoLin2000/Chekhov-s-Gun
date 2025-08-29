+[TSUDescription descriptionWithCFType:format:]
id __cdecl +[TSUDescription descriptionWithCFType:format:](id a1, SEL a2, void *a3, id a4)
{
  id v5; // x21
  void *v6; // x20
  TSUDescription *v7; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]
  __int64 v10; // [xsp+40h] [xbp+10h] BYREF

  v5 = objc_retain(a4);
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", v5, &v10);
  objc_release(v5);
  v7 = -[TSUDescription initWithCFType:header:](
         objc_alloc(&OBJC_CLASS___TSUDescription),
         "initWithCFType:header:",
         a3,
         v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}