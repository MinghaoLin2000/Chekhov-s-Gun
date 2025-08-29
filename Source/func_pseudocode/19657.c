-[IPPSessionDelegate initWithClientID:]
IPPSessionDelegate *__cdecl -[IPPSessionDelegate initWithClientID:](IPPSessionDelegate *self, SEL a2, int a3)
{
  IPPSessionDelegate *result; // x0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___IPPSessionDelegate;
  result = -[IPPSessionDelegate init](&v5, "init");
  if ( result )
    result->_clientID = a3;
  return result;
}