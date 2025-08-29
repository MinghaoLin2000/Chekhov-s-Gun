-[SFUOffsetInputStream readToBuffer:size:]
unsigned __int64 __cdecl -[SFUOffsetInputStream readToBuffer:size:](
        SFUOffsetInputStream *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  return (unsigned __int64)-[SFUInputStream readToBuffer:size:](self->mInputStream, "readToBuffer:size:", a3, a4);
}