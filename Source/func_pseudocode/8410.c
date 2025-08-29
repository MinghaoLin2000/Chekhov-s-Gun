-[AuthorizationController init]
AuthorizationController *__cdecl -[AuthorizationController init](AuthorizationController *self, SEL a2)
{
  AuthorizationController *result; // x0
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___AuthorizationController;
  result = -[AuthorizationController init](&v3, "init");
  result->_authorization = 0LL;
  return result;
}