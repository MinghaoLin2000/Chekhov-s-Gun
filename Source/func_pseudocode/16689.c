_UARPAnalyticsDurationToBucket
_UNKNOWN **__fastcall UARPAnalyticsDurationToBucket(void *a1)
{
  void *v1; // x0
  __int64 v2; // x2
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v1 = objc_msgSend(a1, "unsignedIntegerValue");
  v2 = 0LL;
  while ( (unsigned __int64)v1 > qword_100029410[v2] )
  {
    if ( ++v2 == 73 )
      return &off_100038E88;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (_UNKNOWN **)+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:");
}