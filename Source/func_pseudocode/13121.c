+[TSUBacktrace new]
id __cdecl +[TSUBacktrace new](id a1, SEL a2)
{
  id v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = objc_alloc((Class)a1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v2, "initWithAdjustment:", 2LL);
}