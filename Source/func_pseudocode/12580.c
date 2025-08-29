-[SFUCryptoOutputStream offset]
signed __int64 __cdecl -[SFUCryptoOutputStream offset](SFUCryptoOutputStream *self, SEL a2)
{
  return (signed __int64)-[SFUOutputStream offset](self->mBaseStream, "offset");
}