-[TSUDescription initWithObject:class:format:arguments:]
TSUDescription *__cdecl -[TSUDescription initWithObject:class:format:arguments:](
        TSUDescription *self,
        SEL a2,
        id a3,
        Class a4,
        id a5,
        char *a6)
{
  id v10; // x24
  id v11; // x21
  void *v12; // x19
  TSUDescription *v13; // x20

  v10 = objc_retain(a5);
  v11 = objc_retain(a3);
  v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", v10, a6);
  objc_release(v10);
  v13 = -[TSUDescription initWithObject:class:header:](self, "initWithObject:class:header:", v11, a4, v12);
  objc_release(v11);
  objc_release(v12);
  return v13;
}