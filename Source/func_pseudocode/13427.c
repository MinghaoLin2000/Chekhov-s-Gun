-[SFUCryptoInputStream close]
void __cdecl -[SFUCryptoInputStream close](SFUCryptoInputStream *self, SEL a2)
{
  -[SFUInputStream close](self->mBaseStream, "close");
}