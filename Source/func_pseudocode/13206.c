-[SFUZipInflateInputStream enableSystemCaching]
void __cdecl -[SFUZipInflateInputStream enableSystemCaching](SFUZipInflateInputStream *self, SEL a2)
{
  -[SFUBufferedInputStream enableSystemCaching](self->mInput, "enableSystemCaching");
}