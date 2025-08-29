-[TSUDescription addFieldWithFormat:]
void __cdecl -[TSUDescription addFieldWithFormat:](TSUDescription *self, SEL a2, id a3)
{
  id v4; // x21
  void *v5; // x20
  __int64 v6; // [xsp+40h] [xbp+10h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", v4, &v6);
  objc_release(v4);
  -[TSUDescription addField:value:](self, "addField:value:", 0LL, v5);
  objc_release(v5);
}