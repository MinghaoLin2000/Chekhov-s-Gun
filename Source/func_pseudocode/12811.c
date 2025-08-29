-[SFUBufferedInputStream seekWithinBufferToOffset:]
bool __cdecl -[SFUBufferedInputStream seekWithinBufferToOffset:](
        SFUBufferedInputStream *self,
        SEL a2,
        signed __int64 a3)
{
  signed __int64 mBufferStart; // x8
  bool v4; // vf
  signed __int64 v5; // x8

  mBufferStart = self->mBufferStart;
  v4 = __OFSUB__(a3, mBufferStart);
  v5 = a3 - mBufferStart;
  if ( v5 < 0 != v4 || self->mBufferEnd < a3 )
    return 0;
  self->mBufferOffset = v5;
  return 1;
}