-[SFUMemoryInputStream initWithData:]
SFUMemoryInputStream *__cdecl -[SFUMemoryInputStream initWithData:](SFUMemoryInputStream *self, SEL a2, id a3)
{
  void *v5; // x4
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_msgSend(a3, "length");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUMemoryInputStream initWithData:offset:length:](self, "initWithData:offset:length:", a3, 0LL, v5);
}