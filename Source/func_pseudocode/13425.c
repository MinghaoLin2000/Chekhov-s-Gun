-[SFUCryptoInputStream disableSystemCaching]
void __cdecl -[SFUCryptoInputStream disableSystemCaching](SFUCryptoInputStream *self, SEL a2)
{
  -[SFUInputStream disableSystemCaching](self->mBaseStream, "disableSystemCaching");
}