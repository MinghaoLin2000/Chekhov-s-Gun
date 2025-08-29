+[ImageConversionService run]
void __cdecl +[ImageConversionService run](id a1, SEL a2)
{
  id v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = objc_alloc_init((Class)a1);
  objc_msgSend(v2, "run");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v2);
}