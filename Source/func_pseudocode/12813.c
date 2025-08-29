-[SFUBufferedInputStream seekToOffset:]
void __cdecl -[SFUBufferedInputStream seekToOffset:](SFUBufferedInputStream *self, SEL a2, signed __int64 a3)
{
  signed __int64 mBufferStart; // x8
  bool v6; // vf
  signed __int64 v7; // x8
  __int64 v8; // x9

  if ( !-[SFUBufferedInputStream canSeek](self, "canSeek") )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      CFSTR("SFUBufferedInputStreamError"),
      CFSTR("Can't seek"));
  mBufferStart = self->mBufferStart;
  v6 = __OFSUB__(a3, mBufferStart);
  v7 = a3 - mBufferStart;
  if ( v7 < 0 != v6 || self->mBufferEnd < a3 )
  {
    self->mBufferOffset = 0LL;
    self->mBufferStart = a3;
    v8 = 48LL;
  }
  else
  {
    v8 = 32LL;
    a3 = v7;
  }
  *(Class *)((char *)&self->super.isa + v8) = (Class)a3;
}