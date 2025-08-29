-[SFUBufferedInputStream readToBuffer:size:]
unsigned __int64 __cdecl -[SFUBufferedInputStream readToBuffer:size:](
        SFUBufferedInputStream *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  size_t v5; // x20
  void *__src; // [xsp+8h] [xbp-18h] BYREF

  __src = 0LL;
  v5 = -[SFUBufferedInputStream readToOwnBuffer:size:](self, "readToOwnBuffer:size:", &__src, a4);
  memcpy(a3, __src, v5);
  return v5;
}