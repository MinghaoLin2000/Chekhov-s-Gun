-[TSUDescription initWithObject:format:]
TSUDescription *__cdecl -[TSUDescription initWithObject:format:](TSUDescription *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x19
  TSUDescription *v8; // x20
  __int64 v10; // [xsp+40h] [xbp+10h] BYREF

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = -[TSUDescription initWithObject:class:format:arguments:](
         self,
         "initWithObject:class:format:arguments:",
         v7,
         object_getClass(v7),
         v6,
         &v10);
  objc_release(v6);
  objc_release(v7);
  return v8;
}