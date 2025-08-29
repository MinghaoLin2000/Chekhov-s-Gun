+[LSRAudioDump initialize]
void __cdecl +[LSRAudioDump initialize](id a1, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (id)objc_opt_class(&OBJC_CLASS___LSRAudioDump, a2) == a1 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    SFLogInitIfNeeded();
  }
}