-[SFUBufferedInputStream canSeek]
bool __cdecl -[SFUBufferedInputStream canSeek](SFUBufferedInputStream *self, SEL a2)
{
  return (unsigned __int8)-[SFUInputStream canSeek](self->mStream, "canSeek");
}