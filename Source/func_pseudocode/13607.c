+[TSUAssertionHandler performBlockIgnoringQAFatalAssertions:]
id __cdecl +[TSUAssertionHandler performBlockIgnoringQAFatalAssertions:](id a1, SEL a2, id a3)
{
  void *v3; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_msgSend(
         a1,
         "p_performBlockIgnoringAssertions:onlyFatal:",
         a3,
         objc_msgSend(a1, "isQAFatalAssertionsEnabled"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_msgSend(v3, "lastObject");
}