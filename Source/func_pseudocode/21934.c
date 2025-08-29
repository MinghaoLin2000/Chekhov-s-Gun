+[PAXPCDispatch sharedInstance]
id __cdecl +[PAXPCDispatch sharedInstance](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_10000CC00 != -1 )
    dispatch_once(&qword_10000CC00, &stru_100008228);
  v2 = (void *)qword_10000CC08;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}