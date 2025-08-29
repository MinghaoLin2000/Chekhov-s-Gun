+[TSUAssertionHandler _logBacktraceWithCallStackSymbols:]
void __cdecl +[TSUAssertionHandler _logBacktraceWithCallStackSymbols:](id a1, SEL a2, id a3)
{
  void *v5; // x21

  if ( TSUAssertCat_init_token != -1 )
    dispatch_once(&TSUAssertCat_init_token, &stru_1001DF6D8);
  v5 = TSUAssertCat_log_t;
  if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
    sub_100174AA0(a3, v5);
  objc_msgSend(a1, "simulateCrashWithMessage:", CFSTR("+[TSUAssert logBacktrace]"));
}