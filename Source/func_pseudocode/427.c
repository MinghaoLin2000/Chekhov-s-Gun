-[FileEventObserver initWithPath:]
FileEventObserver *__cdecl -[FileEventObserver initWithPath:](FileEventObserver *self, SEL a2, id a3)
{
  id v4; // x19
  FileEventObserver *v5; // x0
  FileEventObserver *v6; // x20
  objc_super v8; // [xsp+0h] [xbp-20h] BYREF

  v4 = objc_retain(a3);
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___FileEventObserver;
  v5 = -[FileEventObserver init](&v8, "init");
  v6 = v5;
  if ( v5 )
    -[FileEventObserver setPath:](v5, "setPath:", v4);
  objc_release(v4);
  return v6;
}