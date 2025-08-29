+[UINSSystemPreferencesTCCSetting _supportedSettings]
id __cdecl +[UINSSystemPreferencesTCCSetting _supportedSettings](id a1, SEL a2)
{
  void *v2; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-28h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  block[0] = _NSConcreteStackBlock;
  block[1] = 3221225472LL;
  block[2] = sub_100004550;
  block[3] = &unk_10000C220;
  block[4] = a1;
  if ( qword_100011BA0 != -1 )
    dispatch_once(&qword_100011BA0, block);
  v2 = (void *)qword_100011B98;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}