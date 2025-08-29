+[NSString displayStringForDate:]
id __cdecl +[NSString displayStringForDate:](id a1, SEL a2, id a3)
{
  id v3; // x20
  id v4; // x21
  void *v5; // x19
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a3 )
  {
    v3 = objc_retain(a3);
    v4 = objc_alloc_init((Class)&OBJC_CLASS___NSDateFormatter);
    objc_msgSend(v4, "setFormatterBehavior:", 1040LL);
    objc_msgSend(v4, "setTimeStyle:", 1LL);
    objc_msgSend(v4, "setDateStyle:", 1LL);
    objc_msgSend(v4, "setDoesRelativeDateFormatting:", 1LL);
    v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "stringFromDate:", v3));
    objc_release(v3);
    objc_release(v4);
  }
  else
  {
    v5 = 0LL;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}