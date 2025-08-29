_UARPAnalyticsIterationCountToBucket
_UNKNOWN **__fastcall UARPAnalyticsIterationCountToBucket(void *a1)
{
  void *v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v1 = objc_msgSend(a1, "unsignedIntegerValue");
  if ( (unsigned __int64)v1 > 0x32 )
    return &off_100038EA0;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (_UNKNOWN **)+[NSNumber numberWithUnsignedInteger:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInteger:", v1);
}