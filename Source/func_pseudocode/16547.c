_MapPreferenceSuiteToString
const __CFString *__fastcall MapPreferenceSuiteToString(__int64 a1)
{
  const __CFString *v1; // x8

  v1 = CFSTR("com.apple.accessoryupdaterd");
  if ( a1 )
    v1 = 0LL;
  if ( a1 == 1 )
    return CFSTR("com.apple.AUDeveloperSettings");
  else
    return v1;
}