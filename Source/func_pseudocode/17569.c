-[CGPDFServiceListener initForXPCService]
id __cdecl -[CGPDFServiceListener initForXPCService](CGPDFServiceListener *self, SEL a2)
{
  NSXPCListener *v3; // x20
  CGPDFServiceListener *v4; // x19

  v3 = objc_retainAutoreleasedReturnValue(+[NSXPCListener serviceListener](&OBJC_CLASS___NSXPCListener, "serviceListener"));
  v4 = -[CGPDFServiceListener initWithListener:](self, "initWithListener:", v3);
  objc_release(v3);
  return v4;
}