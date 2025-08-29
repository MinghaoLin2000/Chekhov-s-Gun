-[TSUUUIDLogContext init]
TSUUUIDLogContext *__cdecl -[TSUUUIDLogContext init](TSUUUIDLogContext *self, SEL a2)
{
  TSUUUIDLogContext *v2; // x19
  NSUUID *v3; // x20
  NSString *v4; // x0
  NSString *publicString; // x8
  NSString *privateString; // x0
  objc_super v8; // [xsp+0h] [xbp-20h] BYREF

  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___TSUUUIDLogContext;
  v2 = -[TSUUUIDLogContext init](&v8, "init");
  if ( v2 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
    v4 = objc_retainAutoreleasedReturnValue(-[NSUUID UUIDString](v3, "UUIDString"));
    publicString = v2->_publicString;
    v2->_publicString = v4;
    objc_release(publicString);
    objc_release(v3);
    privateString = v2->_privateString;
    v2->_privateString = (NSString *)&stru_1001DFAA0;
    objc_release(privateString);
  }
  return v2;
}