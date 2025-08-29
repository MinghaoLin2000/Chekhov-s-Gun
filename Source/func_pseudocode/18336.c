+[ATEnforcementService bagSubProfile]
NSString *__cdecl +[ATEnforcementService bagSubProfile](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100008DF8 != -1 )
    dispatch_once(&qword_100008DF8, &stru_100004240);
  v2 = (void *)qword_100008E00;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_retainAutoreleaseReturnValue(v2);
}