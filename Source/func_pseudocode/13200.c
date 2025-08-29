-[SFUZipInflateInputStream readToOwnBuffer:size:]
unsigned __int64 __cdecl -[SFUZipInflateInputStream readToOwnBuffer:size:](
        SFUZipInflateInputStream *self,
        SEL a2,
        const char **a3,
        unsigned __int64 a4)
{
  char *mOutBuffer; // x0
  char *v8; // x2
  unsigned __int64 mOutBufferSize; // x3
  __int64 vars8; // [xsp+28h] [xbp+8h]

  mOutBuffer = self->mOutBuffer;
  if ( !mOutBuffer )
  {
    mOutBuffer = (char *)malloc_type_malloc(self->mOutBufferSize, 0x8B2E508uLL);
    self->mOutBuffer = mOutBuffer;
    if ( !mOutBuffer )
    {
      +[SFUZipException raise:format:](
        &OBJC_CLASS___SFUZipException,
        "raise:format:",
        CFSTR("SFUZipInflateError"),
        CFSTR("Could not create inflate buffer"));
      mOutBuffer = self->mOutBuffer;
    }
  }
  *a3 = mOutBuffer;
  v8 = self->mOutBuffer;
  if ( a4 - 1 >= self->mOutBufferSize )
    mOutBufferSize = self->mOutBufferSize;
  else
    mOutBufferSize = a4;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUZipInflateInputStream readToBuffer:size:](self, "readToBuffer:size:", v8, mOutBufferSize);
}