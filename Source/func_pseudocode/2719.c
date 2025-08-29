+[NSString totalTimeStringForTotalTimeInMS:]
id __cdecl +[NSString totalTimeStringForTotalTimeInMS:](id a1, SEL a2, unsigned __int64 a3)
{
  id v4; // x20
  __int64 v5; // x2
  void *v6; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_alloc_init((Class)&OBJC_CLASS___NSDateComponentsFormatter);
  objc_msgSend(v4, "setZeroFormattingBehavior:", 0x10000LL);
  if ( a3 <= 0x36F267 )
    v5 = 192LL;
  else
    v5 = 224LL;
  objc_msgSend(v4, "setAllowedUnits:", v5);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringFromTimeInterval:", (double)(a3 / 0x3E8)));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}