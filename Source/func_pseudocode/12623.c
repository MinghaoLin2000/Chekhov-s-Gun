-[SFUOffsetInputStream disableSystemCaching]
void __cdecl -[SFUOffsetInputStream disableSystemCaching](SFUOffsetInputStream *self, SEL a2)
{
  -[SFUInputStream disableSystemCaching](self->mInputStream, "disableSystemCaching");
}