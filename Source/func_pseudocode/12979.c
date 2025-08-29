-[TSUDescription initWithCFType:header:]
TSUDescription *__cdecl -[TSUDescription initWithCFType:header:](TSUDescription *self, SEL a2, void *a3, id a4)
{
  id v6; // x19
  TSUDescription *v7; // x0
  TSUDescription *v8; // x21
  NSString *v9; // x0
  NSString *header; // x8
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v6 = objc_retain(a4);
  +[TSUDescription pushDescriptionDepth](&OBJC_CLASS___TSUDescription, "pushDescriptionDepth");
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSUDescription;
  v7 = -[TSUDescription init](&v12, "init");
  v8 = v7;
  if ( v7 )
  {
    v7->_cfType = a3;
    v9 = (NSString *)objc_msgSend(v6, "copy");
    header = v8->_header;
    v8->_header = v9;
    objc_release(header);
  }
  objc_release(v6);
  return v8;
}