-[SFUZipInflateInputStream close]
void __cdecl -[SFUZipInflateInputStream close](SFUZipInflateInputStream *self, SEL a2)
{
  SFUBufferedInputStream *mInput; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[SFUZipInflateInputStream closeLocalStream](self, "closeLocalStream");
  mInput = self->mInput;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[SFUBufferedInputStream close](mInput, "close");
}