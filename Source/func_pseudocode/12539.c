+[NSByteCountFormatter tsu_stringWithNonBreakingSpacesFromByteCount:countStyle:]
id __cdecl +[NSByteCountFormatter tsu_stringWithNonBreakingSpacesFromByteCount:countStyle:](
        id a1,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4)
{
  NSString *v4; // x19
  NSString *v5; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(
         +[NSByteCountFormatter stringFromByteCount:countStyle:](
           &OBJC_CLASS___NSByteCountFormatter,
           "stringFromByteCount:countStyle:",
           a3,
           a4));
  v5 = objc_retainAutoreleasedReturnValue(
         -[NSString stringByReplacingOccurrencesOfString:withString:](
           v4,
           "stringByReplacingOccurrencesOfString:withString:",
           CFSTR(" "),
           CFSTR(" ")));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}