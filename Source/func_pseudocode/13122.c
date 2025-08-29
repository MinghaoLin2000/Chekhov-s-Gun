+[TSUBacktrace caller]
id __cdecl +[TSUBacktrace caller](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v2 = objc_msgSend(a1, "backtrace");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _objc_msgSend(v2, "callerAtIndex:", 2LL);
}