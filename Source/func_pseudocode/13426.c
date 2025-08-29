-[SFUCryptoInputStream enableSystemCaching]
void __cdecl -[SFUCryptoInputStream enableSystemCaching](SFUCryptoInputStream *self, SEL a2)
{
  -[SFUInputStream enableSystemCaching](self->mBaseStream, "enableSystemCaching");
}