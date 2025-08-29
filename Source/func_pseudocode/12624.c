-[SFUOffsetInputStream enableSystemCaching]
void __cdecl -[SFUOffsetInputStream enableSystemCaching](SFUOffsetInputStream *self, SEL a2)
{
  -[SFUInputStream enableSystemCaching](self->mInputStream, "enableSystemCaching");
}