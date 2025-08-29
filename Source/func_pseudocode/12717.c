-[TSUExtendedAttribute initWithName:value:]
TSUExtendedAttribute *__cdecl -[TSUExtendedAttribute initWithName:value:](
        TSUExtendedAttribute *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  TSUExtendedAttribute *v8; // x21
  NSString *v9; // x0
  NSString *name; // x8
  NSData *v11; // x0
  NSData *value; // x8
  objc_super v14; // [xsp+0h] [xbp-30h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v14.receiver = self;
  v14.super_class = (Class)&OBJC_CLASS___TSUExtendedAttribute;
  v8 = -[TSUExtendedAttribute init](&v14, "init");
  if ( v8 )
  {
    v9 = (NSString *)objc_msgSend(v6, "copy");
    name = v8->_name;
    v8->_name = v9;
    objc_release(name);
    v11 = (NSData *)objc_msgSend(v7, "copy");
    value = v8->_value;
    v8->_value = v11;
    objc_release(value);
  }
  objc_release(v7);
  objc_release(v6);
  return v8;
}