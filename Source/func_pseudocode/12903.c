-[SFUMemoryInputStream readToOwnBuffer:size:]
unsigned __int64 __cdecl -[SFUMemoryInputStream readToOwnBuffer:size:](
        SFUMemoryInputStream *self,
        SEL a2,
        const char **a3,
        unsigned __int64 a4)
{
  const char *mCurrent; // x9
  unsigned __int64 v5; // x8

  mCurrent = self->mCurrent;
  v5 = self->mEnd - mCurrent;
  if ( v5 >= a4 )
    v5 = a4;
  *a3 = mCurrent;
  self->mCurrent += v5;
  return v5;
}