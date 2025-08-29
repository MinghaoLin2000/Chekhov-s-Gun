-[TSUDescription initWithObject:class:header:]
TSUDescription *__cdecl -[TSUDescription initWithObject:class:header:](
        TSUDescription *self,
        SEL a2,
        id a3,
        Class a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  TSUDescription *v10; // x0
  TSUDescription *v11; // x22
  NSString *v12; // x0
  NSString *header; // x8
  objc_super v15; // [xsp+0h] [xbp-30h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  +[TSUDescription pushDescriptionDepth](&OBJC_CLASS___TSUDescription, "pushDescriptionDepth");
  v15.receiver = self;
  v15.super_class = (Class)&OBJC_CLASS___TSUDescription;
  v10 = -[TSUDescription init](&v15, "init");
  v11 = v10;
  if ( v10 )
  {
    objc_storeWeak((id *)&v10->_object, v8);
    v11->_class = a4;
    v12 = (NSString *)objc_msgSend(v9, "copy");
    header = v11->_header;
    v11->_header = v12;
    objc_release(header);
  }
  objc_release(v9);
  objc_release(v8);
  return v11;
}