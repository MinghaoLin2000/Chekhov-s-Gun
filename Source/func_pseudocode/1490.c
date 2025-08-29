-[LoadingViewController init]
LoadingViewController *__cdecl -[LoadingViewController init](LoadingViewController *self, SEL a2)
{
  LoadingViewController *result; // x0
  objc_super v3; // [xsp+0h] [xbp-10h] BYREF

  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___LoadingViewController;
  result = -[LoadingViewController init](&v3, "init");
  if ( result )
    result->_autoShowDelay = 1.0;
  return result;
}