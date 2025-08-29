-[SFUBufferedInputStream disableSystemCaching]
void __cdecl -[SFUBufferedInputStream disableSystemCaching](SFUBufferedInputStream *self, SEL a2)
{
  -[SFUInputStream disableSystemCaching](self->mStream, "disableSystemCaching");
}