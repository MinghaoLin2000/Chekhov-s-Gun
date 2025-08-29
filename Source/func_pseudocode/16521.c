-[iAUPServer parserStateString:]
char *__cdecl -[iAUPServer parserStateString:](iAUPServer *self, SEL a2, int a3)
{
  if ( a3 != 0 && (unsigned int)a3 < 0xFFFFFFFC )
    return "PayloadCountdown";
  else
    return off_100031920[a3 + 4];
}