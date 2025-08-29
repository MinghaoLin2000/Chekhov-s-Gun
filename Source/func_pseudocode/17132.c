+[AMActionLoaderServiceListener sharedServiceListener]
AMActionLoaderServiceListener *__cdecl +[AMActionLoaderServiceListener sharedServiceListener](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100024278 != -1 )
    dispatch_once(&qword_100024278, &stru_10001C3B8);
  v2 = (void *)qword_100024270;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (AMActionLoaderServiceListener *)objc_retainAutoreleaseReturnValue(v2);
}