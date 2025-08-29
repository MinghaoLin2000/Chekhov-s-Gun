-[SFUBufferedInputStream offset]
signed __int64 __cdecl -[SFUBufferedInputStream offset](SFUBufferedInputStream *self, SEL a2)
{
  return self->mBufferOffset + self->mBufferStart;
}