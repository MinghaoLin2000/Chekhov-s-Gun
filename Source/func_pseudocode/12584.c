-[SFUCryptoOutputStream close]
void __cdecl -[SFUCryptoOutputStream close](SFUCryptoOutputStream *self, SEL a2)
{
  SFUOutputStream *mBaseStream; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[SFUCryptoOutputStream closeLocalStream](self, "closeLocalStream");
  mBaseStream = self->mBaseStream;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SFUOutputStream close](mBaseStream, "close");
}