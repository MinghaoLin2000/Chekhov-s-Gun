-[IPXLibraryChooserService dealloc]
void __cdecl -[IPXLibraryChooserService dealloc](IPXLibraryChooserService *self, SEL a2)
{
  NSNotificationCenter *v3; // x20
  objc_super v4; // [xsp+0h] [xbp-20h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(+[NSNotificationCenter defaultCenter](&OBJC_CLASS___NSNotificationCenter, "defaultCenter"));
  -[NSNotificationCenter removeObserver:](v3, "removeObserver:", self);
  objc_release(v3);
  v4.receiver = self;
  v4.super_class = (Class)&OBJC_CLASS___IPXLibraryChooserService;
  -[IPXLibraryChooserService dealloc](&v4, "dealloc");
}