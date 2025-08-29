_ASDLogHandleForCategory
id __fastcall ASDLogHandleForCategory(__int64 a1)
{
  void *v2; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( qword_100015830 != -1 )
    dispatch_once(&qword_100015830, &stru_100010AB8);
  v2 = (void *)qword_1000156D8[a1];
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}