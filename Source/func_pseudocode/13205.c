-[SFUZipInflateInputStream disableSystemCaching]
void __cdecl -[SFUZipInflateInputStream disableSystemCaching](SFUZipInflateInputStream *self, SEL a2)
{
  -[SFUBufferedInputStream disableSystemCaching](self->mInput, "disableSystemCaching");
}