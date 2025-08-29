-[SFUOffsetInputStream close]
void __cdecl -[SFUOffsetInputStream close](SFUOffsetInputStream *self, SEL a2)
{
  -[SFUInputStream close](self->mInputStream, "close");
}