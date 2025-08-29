+[ExportSessionVideoTranscodingTask videoDateFormatter]
id __cdecl +[ExportSessionVideoTranscodingTask videoDateFormatter](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_10004A080 != -1 )
    dispatch_once(&qword_10004A080, &stru_100041630);
  v2 = (void *)qword_10004A088;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}