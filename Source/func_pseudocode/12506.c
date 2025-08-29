+[NSThread tsu_stringForQualityOfService:]
id __cdecl +[NSThread tsu_stringForQualityOfService:](id a1, SEL a2, signed __int64 a3)
{
  const __CFString *v3; // x8
  const __CFString *v4; // x9
  const __CFString *v5; // x10
  const __CFString *v6; // x9
  const __CFString *v7; // x10

  v3 = CFSTR("NSQualityOfServiceUtility");
  v4 = CFSTR("NSQualityOfServiceUserInitiated");
  v5 = CFSTR("NSQualityOfServiceUserInteractive");
  if ( a3 != 33 )
    v5 = 0LL;
  if ( a3 != 25 )
    v4 = v5;
  if ( a3 != 17 )
    v3 = v4;
  v6 = CFSTR("NSQualityOfServiceDefault");
  v7 = CFSTR("NSQualityOfServiceBackground");
  if ( a3 != 9 )
    v7 = 0LL;
  if ( a3 != -1 )
    v6 = v7;
  if ( a3 <= 16 )
    return (id)v6;
  else
    return (id)v3;
}