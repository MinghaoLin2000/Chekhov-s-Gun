+[SUContainedSoftwareUpdateController sharedSoftwareUpdateController]
id __cdecl +[SUContainedSoftwareUpdateController sharedSoftwareUpdateController](id a1, SEL a2)
{
  void *v2; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_10000339C;
  block[3] = &unk_100008190;
  block[4] = a1;
  if ( qword_10000D568 != -1 )
    dispatch_once(&qword_10000D568, block);
  v2 = (void *)qword_10000D560;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}