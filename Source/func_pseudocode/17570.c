-[CGPDFServiceListener initForLoopback]
id __cdecl -[CGPDFServiceListener initForLoopback](CGPDFServiceListener *self, SEL a2)
{
  NSXPCListener *v3; // x20
  CGPDFServiceListener *v4; // x19

  v3 = objc_retainAutoreleasedReturnValue(+[NSXPCListener anonymousListener](&OBJC_CLASS___NSXPCListener, "anonymousListener"));
  v4 = -[CGPDFServiceListener initWithListener:](self, "initWithListener:", v3);
  objc_release(v3);
  return v4;
}