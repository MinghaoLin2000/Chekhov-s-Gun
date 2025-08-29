-[TSUDescription addField:format:]
void __cdecl -[TSUDescription addField:format:](TSUDescription *self, SEL a2, id a3, id a4)
{
  id v6; // x22
  id v7; // x19
  void *v8; // x21
  __int64 v9; // [xsp+40h] [xbp+10h] BYREF

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v8 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", v6, &v9);
  objc_release(v6);
  -[TSUDescription addField:value:](self, "addField:value:", v7, v8);
  objc_release(v7);
  objc_release(v8);
}