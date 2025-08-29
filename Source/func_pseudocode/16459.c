+[LegacyAudioController sharedInstance]
LegacyAudioController *__cdecl +[LegacyAudioController sharedInstance](id a1, SEL a2)
{
  void *v2; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_10000E9E0;
  block[3] = &unk_100031718;
  block[4] = a1;
  if ( qword_100041EE8 != -1 )
    dispatch_once(&qword_100041EE8, block);
  v2 = (void *)qword_100041EE0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (LegacyAudioController *)objc_retainAutoreleaseReturnValue(v2);
}