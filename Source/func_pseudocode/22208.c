+[QLSatellite satellite]
id __cdecl +[QLSatellite satellite](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_10000C460 != -1 )
    dispatch_once(&qword_10000C460, &stru_1000083D0);
  v2 = (void *)qword_10000C468;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}