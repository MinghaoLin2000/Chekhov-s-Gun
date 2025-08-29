-[CGPDFServiceListener run]
void __cdecl -[CGPDFServiceListener run](CGPDFServiceListener *self, SEL a2)
{
  NSXPCListener *v2; // x19
  NSRunLoop *v3; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_retainAutoreleasedReturnValue(-[CGPDFServiceListener listener](self, "listener"));
  -[NSXPCListener resume](v2, "resume");
  objc_release(v2);
  v3 = objc_retainAutoreleasedReturnValue(+[NSRunLoop currentRunLoop](&OBJC_CLASS___NSRunLoop, "currentRunLoop"));
  -[NSRunLoop run](v3, "run");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v3);
}