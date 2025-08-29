_AtLoginWindow
__int64 AtLoginWindow()
{
  const __CFString *v0; // x0
  const __CFString *v1; // x19
  _BOOL8 v2; // x20

  v0 = SCDynamicStoreCopyConsoleUser(0LL, 0LL, 0LL);
  if ( !v0 )
    return 1LL;
  v1 = v0;
  v2 = CFStringCompare(v0, CFSTR("loginwindow"), 0LL) == kCFCompareEqualTo;
  CFRelease(v1);
  return v2;
}