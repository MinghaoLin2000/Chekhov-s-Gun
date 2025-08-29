-[TSUWarning initWithKind:message:]
TSUWarning *__cdecl -[TSUWarning initWithKind:message:](TSUWarning *self, SEL a2, signed __int64 a3, id a4)
{
  id v6; // x19
  TSUWarning *v7; // x0
  TSUWarning *v8; // x21
  NSString *v9; // x0
  NSString *message; // x8
  objc_super v12; // [xsp+0h] [xbp-30h] BYREF

  v6 = objc_retain(a4);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___TSUWarning;
  v7 = -[TSUWarning init](&v12, "init");
  v8 = v7;
  if ( v7 )
  {
    v7->_kind = a3;
    v9 = (NSString *)objc_msgSend(v6, "copy");
    message = v8->_message;
    v8->_message = v9;
    objc_release(message);
  }
  objc_release(v6);
  return v8;
}