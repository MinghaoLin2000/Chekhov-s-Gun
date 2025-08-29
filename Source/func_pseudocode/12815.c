-[SFUBufferedInputStream enableSystemCaching]
void __cdecl -[SFUBufferedInputStream enableSystemCaching](SFUBufferedInputStream *self, SEL a2)
{
  -[SFUInputStream enableSystemCaching](self->mStream, "enableSystemCaching");
}