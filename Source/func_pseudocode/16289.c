+[AUDeveloperSettingsDatabase sharedDatabase]
id __cdecl +[AUDeveloperSettingsDatabase sharedDatabase](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100041EC8 != -1 )
    dispatch_once(&qword_100041EC8, &stru_100031430);
  v2 = (void *)qword_100041EC0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}