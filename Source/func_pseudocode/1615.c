-[BarChoice initWithTitle:]
BarChoice *__cdecl -[BarChoice initWithTitle:](BarChoice *self, SEL a2, id a3)
{
  id v4; // x19
  BarChoice *v5; // x0
  BarChoice *v6; // x20
  id v7; // x21
  void *v8; // x21
  objc_super v10; // [xsp+0h] [xbp-30h] BYREF

  v4 = objc_retain(a3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___BarChoice;
  v5 = -[BarChoice init](&v10, "init");
  v6 = v5;
  if ( v5 )
  {
    -[BarChoice setTitle:](v5, "setTitle:", v4);
    v7 = objc_retainAutoreleasedReturnValue(+[NSButton scopedButtonWithTitle:](&OBJC_CLASS___NSButton, "scopedButtonWithTitle:", v4));
    -[BarChoice setButtonRepresentation:](v6, "setButtonRepresentation:", v7);
    objc_release(v7);
    v8 = objc_msgSend(
           objc_alloc((Class)&OBJC_CLASS___NSMenuItem),
           "initWithTitle:action:keyEquivalent:",
           v4,
           0LL,
           &stru_1000BA220);
    -[BarChoice setMenuRepresentation:](v6, "setMenuRepresentation:", v8);
    objc_release(v8);
  }
  objc_release(v4);
  return v6;
}