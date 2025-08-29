-[IPPSession dealloc]
void __cdecl -[IPPSession dealloc](IPPSession *self, SEL a2)
{
  NSURLSession *URLSession; // x0
  objc_super v4; // [xsp+10h] [xbp-20h] BYREF

  -[NSURLSession invalidateAndCancel](self->_URLSession, "invalidateAndCancel");
  URLSession = self->_URLSession;
  self->_URLSession = 0LL;
  objc_release(URLSession);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___IPPSession;
  -[IPPSession dealloc](&v4, "dealloc");
}