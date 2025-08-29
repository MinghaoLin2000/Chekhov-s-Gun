-[ProgressViewController viewDidAppear]
void __cdecl -[ProgressViewController viewDidAppear](ProgressViewController *self, SEL a2)
{
  NSProgressIndicator *v3; // x20
  unsigned int v4; // w21
  NSProgressIndicator *v5; // x19
  objc_super v6; // [xsp+0h] [xbp-30h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___ProgressViewController;
  -[ProgressViewController viewDidAppear](&v6, "viewDidAppear");
  v3 = objc_retainAutoreleasedReturnValue(-[ProgressViewController progressBar](self, "progressBar"));
  v4 = -[NSProgressIndicator isIndeterminate](v3, "isIndeterminate");
  objc_release(v3);
  if ( v4 )
  {
    v5 = objc_retainAutoreleasedReturnValue(-[ProgressViewController progressBar](self, "progressBar"));
    -[NSProgressIndicator startAnimation:](v5, "startAnimation:", 0LL);
    objc_release(v5);
  }
}