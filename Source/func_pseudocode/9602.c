_NSStringFromTSPVersion
NSString *__fastcall NSStringFromTSPVersion(unsigned __int64 a1)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%u.%u.%u"),
           HIWORD(a1),
           WORD2(a1),
           a1);
}