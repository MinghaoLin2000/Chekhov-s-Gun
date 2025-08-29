-[SFUMemoryInputStream readToBuffer:size:]
unsigned __int64 __cdecl -[SFUMemoryInputStream readToBuffer:size:](
        SFUMemoryInputStream *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  const char *mCurrent; // x1
  size_t v6; // x20

  mCurrent = self->mCurrent;
  if ( self->mEnd - mCurrent >= a4 )
    v6 = a4;
  else
    v6 = self->mEnd - mCurrent;
  memcpy(a3, mCurrent, v6);
  self->mCurrent += v6;
  return v6;
}