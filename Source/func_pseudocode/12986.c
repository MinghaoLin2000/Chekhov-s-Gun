+[TSUDescription descriptionWithObject:format:]
id __cdecl +[TSUDescription descriptionWithObject:format:](id a1, SEL a2, id a3, id a4)
{
  id v5; // x21
  id v6; // x19
  TSUDescription *v7; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]
  __int64 v10; // [xsp+40h] [xbp+10h] BYREF

  v5 = objc_retain(a4);
  v6 = objc_retain(a3);
  v7 = -[TSUDescription initWithObject:class:format:arguments:](
         objc_alloc(&OBJC_CLASS___TSUDescription),
         "initWithObject:class:format:arguments:",
         v6,
         object_getClass(v6),
         v5,
         &v10);
  objc_release(v5);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}