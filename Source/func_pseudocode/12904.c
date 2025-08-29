-[SFUMemoryInputStream seekWithinBufferToOffset:]
bool __cdecl -[SFUMemoryInputStream seekWithinBufferToOffset:](SFUMemoryInputStream *self, SEL a2, signed __int64 a3)
{
  signed __int64 v4; // x20

  v4 = self->mEnd - self->mStart;
  if ( v4 >= a3 )
    -[SFUMemoryInputStream seekToOffset:](self, "seekToOffset:", a3);
  return v4 >= a3;
}