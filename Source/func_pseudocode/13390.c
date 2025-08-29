-[SFUFileInputStream offset]
signed __int64 __cdecl -[SFUFileInputStream offset](SFUFileInputStream *self, SEL a2)
{
  return self->mCurrentOffset - self->mStartOffset;
}