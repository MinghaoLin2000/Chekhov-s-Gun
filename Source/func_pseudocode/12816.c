-[SFUBufferedInputStream close]
void __cdecl -[SFUBufferedInputStream close](SFUBufferedInputStream *self, SEL a2)
{
  -[SFUInputStream close](self->mStream, "close");
}