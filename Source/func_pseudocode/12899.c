-[SFUMemoryInputStream offset]
signed __int64 __cdecl -[SFUMemoryInputStream offset](SFUMemoryInputStream *self, SEL a2)
{
  return self->mCurrent - self->mStart;
}