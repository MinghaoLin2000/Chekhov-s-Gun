+[UINSSystemPreferencesSettingsManager sharedManager]
id __cdecl +[UINSSystemPreferencesSettingsManager sharedManager](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100011BB0 != -1 )
    dispatch_once(&qword_100011BB0, &stru_10000C290);
  v2 = (void *)qword_100011BA8;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}