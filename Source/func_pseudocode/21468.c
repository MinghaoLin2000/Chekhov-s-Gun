+[LSRSpeechAssets sharedInstance]
id __cdecl +[LSRSpeechAssets sharedInstance](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_100065410 != -1 )
    dispatch_once(&qword_100065410, &stru_100059B00);
  v2 = (void *)qword_100065408;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}