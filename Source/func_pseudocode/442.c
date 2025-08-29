-[SheetViewController viewDidLoad]
void __cdecl -[SheetViewController viewDidLoad](SheetViewController *self, SEL a2)
{
  NSViewController *v3; // x19
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___SheetViewController;
  -[SheetViewController viewDidLoad](&v4, "viewDidLoad");
  v3 = objc_retainAutoreleasedReturnValue(-[SheetViewController subviewController](self, "subviewController"));
  -[NSViewController viewDidLoad](v3, "viewDidLoad");
  objc_release(v3);
}