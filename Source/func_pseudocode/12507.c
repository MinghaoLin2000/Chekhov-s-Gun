+[NSThread tsu_stringForQualityOfServiceClass:]
id __cdecl +[NSThread tsu_stringForQualityOfServiceClass:](id a1, SEL a2, unsigned int a3)
{
  const __CFString *v3; // x8
  const __CFString *v4; // x9
  const __CFString *v5; // x10
  const __CFString *v6; // x9

  v3 = CFSTR("QOS_CLASS_DEFAULT");
  v4 = CFSTR("QOS_CLASS_USER_INITIATED");
  v5 = CFSTR("QOS_CLASS_USER_INTERACTIVE");
  if ( a3 != 33 )
    v5 = 0LL;
  if ( a3 != 25 )
    v4 = v5;
  if ( a3 != 21 )
    v3 = v4;
  v6 = CFSTR("QOS_CLASS_UTILITY");
  if ( a3 != 17 )
    v6 = 0LL;
  if ( a3 == 9 )
    v6 = CFSTR("QOS_CLASS_BACKGROUND");
  if ( !a3 )
    v6 = CFSTR("QOS_CLASS_UNSPECIFIED");
  if ( (int)a3 <= 20 )
    return (id)v6;
  else
    return (id)v3;
}