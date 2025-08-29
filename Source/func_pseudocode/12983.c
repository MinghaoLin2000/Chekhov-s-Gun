-[TSUDescription initWithObject:]
TSUDescription *__cdecl -[TSUDescription initWithObject:](TSUDescription *self, SEL a2, id a3)
{
  id v4; // x20
  TSUDescription *v5; // x19

  v4 = objc_retain(a3);
  v5 = -[TSUDescription initWithObject:class:format:](
         self,
         "initWithObject:class:format:",
         v4,
         object_getClass(v4),
         &stru_1001DFAA0);
  objc_release(v4);
  return v5;
}