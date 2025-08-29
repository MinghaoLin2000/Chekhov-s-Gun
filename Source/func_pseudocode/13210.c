-[SFUZipInflateInputStream setupInflateStream]
void __cdecl -[SFUZipInflateInputStream setupInflateStream](SFUZipInflateInputStream *self, SEL a2)
{
  z_stream_s *p_mStream; // x0
  __int64 v3; // x0

  self->mStream.next_in = 0LL;
  p_mStream = &self->mStream;
  p_mStream->avail_in = 0;
  p_mStream->zfree = 0LL;
  p_mStream->opaque = 0LL;
  p_mStream->zalloc = 0LL;
  v3 = inflateInit2_(p_mStream, -15, "1.2.12", 112);
  if ( (_DWORD)v3 )
    +[SFUZipException raise:format:](
      &OBJC_CLASS___SFUZipException,
      "raise:format:",
      CFSTR("SFUZipInflateError"),
      CFSTR("inflateInit2() failed: %d"),
      v3);
}