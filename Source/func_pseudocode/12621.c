-[SFUOffsetInputStream canSeek]
bool __cdecl -[SFUOffsetInputStream canSeek](SFUOffsetInputStream *self, SEL a2)
{
  return (unsigned __int8)-[SFUInputStream canSeek](self->mInputStream, "canSeek");
}