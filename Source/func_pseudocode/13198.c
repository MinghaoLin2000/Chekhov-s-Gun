-[SFUZipInflateInputStream initWithInput:]
SFUZipInflateInputStream *__cdecl -[SFUZipInflateInputStream initWithInput:](
        SFUZipInflateInputStream *self,
        SEL a2,
        id a3)
{
  SFUZipInflateInputStream *v4; // x0
  SFUZipInflateInputStream *v5; // x19
  objc_super v7; // [xsp+0h] [xbp-20h] BYREF

  v7.receiver = self;
  v7.super_class = (Class)&OBJC_CLASS___SFUZipInflateInputStream;
  v4 = -[SFUZipInflateInputStream init](&v7, "init");
  v5 = v4;
  if ( v4 )
  {
    *(_WORD *)&v4->mReachedEnd = 0;
    v4->mOffset = 0LL;
    v4->mInput = -[SFUBufferedInputStream initWithStream:](
                   objc_alloc(&OBJC_CLASS___SFUBufferedInputStream),
                   "initWithStream:",
                   a3);
    v5->mOutBufferSize = 0x40000LL;
    -[SFUZipInflateInputStream setupInflateStream](v5, "setupInflateStream");
  }
  return v5;
}