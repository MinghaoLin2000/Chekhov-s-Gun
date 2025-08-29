-[NSString tsu_unescapeXML]
id __cdecl -[NSString tsu_unescapeXML](NSString *self, SEL a2)
{
  void *v2; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v2 = -[NSString mutableCopy](self, "mutableCopy");
  objc_msgSend(
    v2,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("&amp;"),
    CFSTR("&"),
    0LL,
    0LL,
    objc_msgSend(v2, "length"));
  objc_msgSend(
    v2,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("&lt;"),
    CFSTR("<"),
    0LL,
    0LL,
    objc_msgSend(v2, "length"));
  objc_msgSend(
    v2,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("&gt;"),
    CFSTR(">"),
    0LL,
    0LL,
    objc_msgSend(v2, "length"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v2);
}