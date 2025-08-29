-[ImageConversionService run]
void __cdecl -[ImageConversionService run](ImageConversionService *self, SEL a2)
{
  NSXPCListener *v3; // x20
  NSXPCListener *v4; // x20
  NSXPCListener *v5; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSXPCListener serviceListener](&OBJC_CLASS___NSXPCListener, "serviceListener"));
  -[ImageConversionService setListener:](self, "setListener:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(-[ImageConversionService listener](self, "listener"));
  -[NSXPCListener setDelegate:](v4, "setDelegate:", self);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(-[ImageConversionService listener](self, "listener"));
  -[NSXPCListener resume](v5, "resume");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}