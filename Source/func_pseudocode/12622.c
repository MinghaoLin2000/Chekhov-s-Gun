-[SFUOffsetInputStream seekToOffset:]
void __cdecl -[SFUOffsetInputStream seekToOffset:](SFUOffsetInputStream *self, SEL a2, signed __int64 a3)
{
  -[SFUInputStream seekToOffset:](self->mInputStream, "seekToOffset:", self->mInitialOffset + a3);
}