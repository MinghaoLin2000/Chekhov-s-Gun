-[RemoteViewController initWithServiceIdentifier:]
RemoteViewController *__cdecl -[RemoteViewController initWithServiceIdentifier:](
        RemoteViewController *self,
        SEL a2,
        id a3)
{
  id v5; // x20
  RemoteViewController *v6; // x0
  RemoteViewController *v7; // x21
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___RemoteViewController;
  v6 = -[RemoteViewController initWithNibName:bundle:](&v9, "initWithNibName:bundle:", 0LL, 0LL);
  v7 = v6;
  if ( v6 )
    objc_storeStrong((id *)&v6->_serviceIdentifier, a3);
  objc_release(v5);
  return v7;
}