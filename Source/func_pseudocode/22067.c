_CreateTokenKeyForAccount
CFStringRef __fastcall CreateTokenKeyForAccount(CFStringRef result)
{
  if ( result )
    return CFStringCreateWithFormat(
             kCFAllocatorDefault,
             0LL,
             CFSTR("%@-%@"),
             CFSTR("40A0DDD2-77F8-4392-B4A3-1E7304206516:fmm-mobileme-token"),
             result);
  return result;
}