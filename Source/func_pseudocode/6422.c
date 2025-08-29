+[VideoTranscodingTask signatureOptionToIdentifierMapping]
id __cdecl +[VideoTranscodingTask signatureOptionToIdentifierMapping](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_10004A078 != -1 )
    dispatch_once(&qword_10004A078, &stru_100041520);
  v2 = (void *)qword_10004A070;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}