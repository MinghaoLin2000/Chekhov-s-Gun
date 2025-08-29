-[IPPURL initWithSession:url:]
IPPURL *__cdecl -[IPPURL initWithSession:url:](IPPURL *self, SEL a2, id a3, id a4)
{
  id v7; // x19
  id v8; // x21
  IPPURL *v9; // x0
  IPPURL *v10; // x23
  objc_super v12; // [xsp+0h] [xbp-40h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v12.receiver = self;
  v12.super_class = (Class)&OBJC_CLASS___IPPURL;
  v9 = -[IPPURL init](&v12, "init");
  v10 = v9;
  if ( v9 )
  {
    objc_storeStrong((id *)&v9->_session, a3);
    objc_storeStrong((id *)&v10->_url, a4);
  }
  objc_release(v8);
  objc_release(v7);
  return v10;
}