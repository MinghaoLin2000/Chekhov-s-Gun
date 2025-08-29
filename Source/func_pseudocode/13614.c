+[TSUAssertionHandler packedBacktraceString]
id __cdecl +[TSUAssertionHandler packedBacktraceString](id a1, SEL a2)
{
  NSArray *v3; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = +[NSThread callStackReturnAddresses](&OBJC_CLASS___NSThread, "callStackReturnAddresses");
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _objc_msgSend(a1, "packedBacktraceStringWithReturnAddresses:", v3);
}