-[ProgressViewController dealloc]
void __cdecl -[ProgressViewController dealloc](ProgressViewController *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  -[ProgressViewController setProgress:](self, "setProgress:", 0LL);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___ProgressViewController;
  -[ProgressViewController dealloc](&v3, "dealloc");
}