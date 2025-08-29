+[TSUAssertionHandler logFullBacktrace]
void __cdecl +[TSUAssertionHandler logFullBacktrace](id a1, SEL a2)
{
  NSMutableDictionary *v3; // x20
  void *v4; // x22
  void *v5; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = -[NSThread threadDictionary](
         +[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"),
         "threadDictionary");
  v4 = -[NSMutableDictionary objectForKeyedSubscript:](
         v3,
         "objectForKeyedSubscript:",
         CFSTR("logBacktrace_lastStackAddress"));
  v5 = -[NSArray copy](+[NSThread callStackReturnAddresses](&OBJC_CLASS___NSThread, "callStackReturnAddresses"), "copy");
  if ( v4 && (unsigned int)objc_msgSend(v4, "isEqualToArray:", v5) )
  {
    objc_msgSend(a1, "_logBacktraceWithCallStackSymbols:", &off_1001E32F0);
  }
  else
  {
    objc_msgSend(
      a1,
      "_logBacktraceWithCallStackSymbols:",
      +[NSThread callStackSymbols](&OBJC_CLASS___NSThread, "callStackSymbols"));
    -[NSMutableDictionary setObject:forKeyedSubscript:](
      v3,
      "setObject:forKeyedSubscript:",
      v5,
      CFSTR("logBacktrace_lastStackAddress"));
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}