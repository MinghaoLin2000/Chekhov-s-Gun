+[ATEnforcementService bagSubProfileVersion]
NSString *__cdecl +[ATEnforcementService bagSubProfileVersion](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100008E08 != -1 )
    dispatch_once(&qword_100008E08, &stru_100004260);
  v2 = (void *)qword_100008E10;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (NSString *)objc_retainAutoreleaseReturnValue(v2);
}