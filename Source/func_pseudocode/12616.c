-[SFUOffsetInputStream initWithInputStream:]
SFUOffsetInputStream *__cdecl -[SFUOffsetInputStream initWithInputStream:](SFUOffsetInputStream *self, SEL a2, id a3)
{
  void *v5; // x3
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v5 = objc_msgSend(a3, "offset");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return -[SFUOffsetInputStream initWithInputStream:initialOffset:](self, "initWithInputStream:initialOffset:", a3, v5);
}