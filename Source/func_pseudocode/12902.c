-[SFUMemoryInputStream seekToOffset:]
void __cdecl -[SFUMemoryInputStream seekToOffset:](SFUMemoryInputStream *self, SEL a2, signed __int64 a3)
{
  const char *mEnd; // x8
  const char *mStart; // x9

  mEnd = self->mEnd;
  mStart = self->mStart;
  if ( mEnd - mStart >= a3 )
    mEnd = &mStart[a3];
  self->mCurrent = mEnd;
}