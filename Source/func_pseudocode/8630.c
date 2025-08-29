-[MXMTargetQueue init]
MXMTargetQueue *__cdecl -[MXMTargetQueue init](MXMTargetQueue *self, SEL a2)
{
  MXMTargetQueue *v2; // x0
  MXMTargetQueue *v3; // x19
  NSMutableArray *v4; // x20
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS___MXMTargetQueue;
  v2 = -[MXMTargetQueue init](&v6, "init");
  v3 = v2;
  if ( v2 )
  {
    -[MXMTargetQueue setSize:](v2, "setSize:", 8LL);
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSMutableArray arrayWithCapacity:](
             &OBJC_CLASS___NSMutableArray,
             "arrayWithCapacity:",
             -[MXMTargetQueue size](v3, "size")));
    -[MXMTargetQueue setQueue:](v3, "setQueue:", v4);
    objc_release(v4);
    -[MXMTargetQueue setTotal:](v3, "setTotal:", 0LL);
    -[MXMTargetQueue setTarget:](v3, "setTarget:", 0.0);
    -[MXMTargetQueue setTargetHits:](v3, "setTargetHits:", 0LL);
    -[MXMTargetQueue setHalfTargetHits:](v3, "setHalfTargetHits:", 0LL);
  }
  return v3;
}