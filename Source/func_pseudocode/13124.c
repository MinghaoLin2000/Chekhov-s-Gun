-[TSUBacktrace backtraceString]
id __cdecl -[TSUBacktrace backtraceString](TSUBacktrace *self, SEL a2)
{
  __int64 initAdjustment; // x9
  __int64 v3; // x19
  char **v4; // x20
  NSMutableString *v5; // x21
  char **v6; // x23
  __int64 v7; // t1

  initAdjustment = self->_initAdjustment;
  v3 = (unsigned int)(self->_frames - initAdjustment);
  v4 = backtrace_symbols(&self->_callstack[initAdjustment], v3);
  v5 = +[NSMutableString stringWithString:](&OBJC_CLASS___NSMutableString, "stringWithString:", CFSTR("Backtrace:\n"));
  if ( (int)v3 >= 1 )
  {
    v6 = v4;
    do
    {
      v7 = (__int64)*v6++;
      -[NSMutableString appendFormat:](v5, "appendFormat:", CFSTR("\t%s\n"), v7);
      --v3;
    }
    while ( v3 );
  }
  free(v4);
  return v5;
}