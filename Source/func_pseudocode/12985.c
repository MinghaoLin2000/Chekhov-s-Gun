+[TSUDescription descriptionWithObject:class:]
id __cdecl +[TSUDescription descriptionWithObject:class:](id a1, SEL a2, id a3, Class a4)
{
  id v5; // x21
  TSUDescription *v6; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = -[TSUDescription initWithObject:class:format:](
         objc_alloc(&OBJC_CLASS___TSUDescription),
         "initWithObject:class:format:",
         v5,
         a4,
         &stru_1001DFAA0);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}