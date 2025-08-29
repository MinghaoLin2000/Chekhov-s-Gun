+[TSUDescription descriptionWithObject:class:format:]
id __cdecl +[TSUDescription descriptionWithObject:class:format:](id a1, SEL a2, id a3, Class a4, id a5)
{
  id v7; // x22
  id v8; // x20
  TSUDescription *v9; // x19
  __int64 vars8; // [xsp+38h] [xbp+8h]
  __int64 v12; // [xsp+40h] [xbp+10h] BYREF

  v7 = objc_retain(a5);
  v8 = objc_retain(a3);
  v9 = -[TSUDescription initWithObject:class:format:arguments:](
         objc_alloc(&OBJC_CLASS___TSUDescription),
         "initWithObject:class:format:arguments:",
         v8,
         a4,
         v7,
         &v12);
  objc_release(v7);
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}