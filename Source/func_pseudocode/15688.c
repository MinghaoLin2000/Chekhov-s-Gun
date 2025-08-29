+[UARPDFUUpdater sharedInstance]
UARPDFUUpdater *__cdecl +[UARPDFUUpdater sharedInstance](id a1, SEL a2)
{
  void *v2; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_100004440;
  block[3] = &unk_100024370;
  block[4] = a1;
  if ( qword_10002AC88 != -1 )
    dispatch_once(&qword_10002AC88, block);
  v2 = (void *)qword_10002AC80;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (UARPDFUUpdater *)objc_retainAutoreleaseReturnValue(v2);
}