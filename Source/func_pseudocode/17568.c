-[CGPDFServiceListener initWithListener:]
CGPDFServiceListener *__cdecl -[CGPDFServiceListener initWithListener:](CGPDFServiceListener *self, SEL a2, id a3)
{
  id v5; // x19
  CGPDFServiceListener *v6; // x0
  CGPDFServiceListener *v7; // x21
  objc_super v9; // [xsp+0h] [xbp-30h] BYREF

  v5 = objc_retain(a3);
  v9.receiver = self;
  v9.super_class = (Class)&OBJC_CLASS___CGPDFServiceListener;
  v6 = -[CGPDFServiceListener init](&v9, "init");
  v7 = v6;
  if ( v6 )
  {
    objc_storeStrong((id *)&v6->_listener, a3);
    -[NSXPCListener setDelegate:](v7->_listener, "setDelegate:", v7);
  }
  objc_release(v5);
  return v7;
}